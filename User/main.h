/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/main.h 
  * @author  MCD Application Team
  * @version V1.8.0
  * @date    04-November-2016
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2016 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"


#define SM_VERSION 020
/*
�汾˵����
V012:�����˲������浽eeprom����
V013:���Ӷϵ������ܣ��ù���Ŀǰֻ֧��sd���ϵ����򣬺궨��Ϊ REPRINTSUPPORT
�¼ӹ���˵����
1�������ϵ��ȡsd����ӡ��ɱ�־λ
2��ѡ���Ƿ�����
3������������ȡ�ļ������ϵ籣���������װ�Ŀ���¶ȡ�����ͷĿ���¶ȡ�gcode���e��������ꡢ��ǰ��ӡ����
4����process_command����������λ�ϵ��д��������ȡ��gcode����û�ﵽָ�����������������ﵽָ���к���ʼ��
����׼��������
5��������׼���������ȴ�����ͷ���ȴ��ﵽĿ���¶ȣ�x��y��z����㣬���z���ӡ����

V014:�°��������Щ�Դ��������ŵĵ���
V015:1������spiFlash��fatfsϵͳ����sm_plus�ļ�����Ӵ�sd������icon�ļ���spiflash��ȥ��
	 2��������quicklzѹ����ѹ�㷨��ʵ���ܴ�sd����ѹ���10240byte����������ļ� Ŀǰ��ѹ20M���ҵ����ݴ����ʱ35s��
V016:2019-3-16��ʼ������1��Ϊ��wifiͨ�Žӿڣ�������ⲿ������������Ҫ��������и�usart_update����������´�ӡ״̬
��gcodeplayer.c��file_read������ӡ�ReadChar++;���仰��¼��ȡ�ļ��ж����ֽڣ�����ӡ����ʹ��
�����������ݲ鿴svn�ϵ��ĵ���

V017:2019-3-22
1������Զ���ƽ���ܣ������������ƽ�湫ʽ��ͨ��x,y�����z���ƫ����в���������������get_coordinates����������
2����Ӷ�ά�����ɹ��ܣ�ʹ��rqencode�⡣

V018:2019-4-12
�˶���ʽ��Ϊcore_xy��ʽ��x���y������ 
��configuration.h ��    #define COREXY  ʹ�ܸ��˶���ʽ  

V019:2019-4-19
1������Զ���ƽ����

V020:2019-5-8
1������һЩ��λ��������֧�֣���������λ������ʱ�İٷֱ�֧�֣���λ�����жϷ�ʽ�͵�������ͨ���������ã�
��Ҫ˵������ʹ��M4009��M4010�������ʱû����ɶ�����ò�Ҫ��������������ⲻ��Ԥ�ϵ��·�����

2019-7-26
1������ʵ��M4008����
2������M4012����
3�����ӽӽ����ص��Զ���ƽ����

*/


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void TimingDelay_Decrement(void);

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
