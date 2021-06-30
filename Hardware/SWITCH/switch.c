#include "switch.h"
#include "delay.h"
#include "usart.h"
//#include "lcd.h"
//////////////////////////////////////////////////////////////////////////////////
//�ⲿ�ж�0�������
void SWITCH_Init(void)
{

	EXTI_InitTypeDef EXTI_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	GPIO_InitTypeDef GPIO_InitStructure;

	//��ʼ��XMIN-->GPIOC.11,XMIN-->GPIOC.12,
	//      YMIN-->GPIOG.9,	YMIN-->GPIOG.11,
	//      ZMIN-->GPIOG.12,ZMIN-->GPIOG.13,
	//      S_1-->GPIOG.14,	S_2-->GPIOG.15,
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOG, ENABLE); //ʹ��PORTA,PORTEʱ��

	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_11 | GPIO_Pin_12; //PE2~4
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOC11,12

	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_9 | GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
	GPIO_Init(GPIOG, &GPIO_InitStructure);//��ʼ��GPIOG9,11-15


	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);	//ʹ�ܸ��ù���ʱ��


	//GPIOG.14	  �ж����Լ��жϳ�ʼ������  �½��ش���	//S_1
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource14);
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_InitStructure.EXTI_Line = EXTI_Line14;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);	  	//����EXTI_InitStruct��ָ���Ĳ�����ʼ������EXTI�Ĵ���

	//GPIOG.15	  �ж����Լ��жϳ�ʼ������  �½��ش���	//S_2
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource15);
	EXTI_InitStructure.EXTI_Line = EXTI_Line15;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);	  	//����EXTI_InitStruct��ָ���Ĳ�����ʼ������EXTI�Ĵ���

	NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;			//ʹ�ܿ���S_1,S_2���ڵ��ⲿ�ж�ͨ��
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;	//��ռ���ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;					//�����ȼ�1
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;								//ʹ���ⲿ�ж�ͨ��
	NVIC_Init(&NVIC_InitStructure);  	  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���

	EXTI_ClearITPendingBit(EXTI_Line14);
	EXTI_ClearITPendingBit(EXTI_Line15);
}
u8 SWITCH_Scan(u8 mode)
{
	return 0;// �ް�������
}


//�ⲿ�ж�15_10�������
void EXTI15_10_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line14) != RESET)
	{
		delay_ms(10);//����
		if(S_1 == 0)	 //����S_1
		{
		}
		EXTI_ClearITPendingBit(EXTI_Line14);  //���LINE4�ϵ��жϱ�־λ
	}
	else  if(EXTI_GetITStatus(EXTI_Line15) != RESET)
	{
		delay_ms(10);//����
		if(S_2 == 0)	 //����S_2
		{
		}
		EXTI_ClearITPendingBit(EXTI_Line15);  //���LINE4�ϵ��жϱ�־λ
	}

}
