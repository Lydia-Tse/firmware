#ifndef __SWITCH_H
#define __SWITCH_H	 
#include "sys.h"

#define X_MIN  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_11)//�г̿���X_MIN
#define X_MAX  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_12)//�г̿���X_MAX
#define Y_MIN  GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_9)//�г̿���Y_MIN 
#define Y_MAX  GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_11)//�г̿���Y_MAX
#define Z_MIN  GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_12)//�г̿���Z_MIN
#define Z_MAX  GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_13)//�г̿���Z_MAX
#define S_1	   GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_14)//�г̿���S_1
#define S_2    GPIO_ReadInputDataBit(GPIOG,GPIO_Pin_15)//�г̿���S_2 
									  
//////////////////////////////////////////////////////////////////////////////////   	 
void SWITCH_Init(void);//�ⲿ�жϳ�ʼ��	
u8 SWITCH_Scan(u8);  	//����ɨ�躯��	 					    
#endif
