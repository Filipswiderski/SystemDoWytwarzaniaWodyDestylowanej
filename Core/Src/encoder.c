

#include "encoder.h"
#include "stm32g0xx_hal.h"
#include "tim.h"


#define ENCODER_MAX_VAL (99)
#define ENCODER_STEPS_PER_VALUE (4)

static uint8_t encoderValue = 25;
static uint16_t lastValue = 25;


void encoderInit(void){
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_ALL);
	htim3.Instance->CNT = encoderValue;
}

uint8_t encoderGet(void){
  int32_t diff = htim3.Instance->CNT - lastValue;
  
  if((diff >= ENCODER_STEPS_PER_VALUE) || (diff <= -ENCODER_STEPS_PER_VALUE))
  {
	diff /= ENCODER_STEPS_PER_VALUE;
	int32_t tmpValue = encoderValue - diff;
	
    if(tmpValue > ENCODER_MAX_VAL) {
		tmpValue = ENCODER_MAX_VAL;
	}
    else if(tmpValue < 0) {
		tmpValue = 0;
	}
	
	encoderValue = (uint8_t)tmpValue;
    lastValue = htim3.Instance->CNT;
  }
  
  return encoderValue;
}


