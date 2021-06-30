#ifndef __FONTUPD_H__
#define __FONTUPD_H__	 
//#include <stm32f10x.h>
#include "sys.h"









//ǰ��6M��fatfsռ����.
//6M�Ժ������500K�ֽ�,�û����������.
//6M+500K�ֽ��Ժ���ֽ�,���ֿ�ռ����,���ܶ�!
//������Ϣ�����ַ,ռ33���ֽ�,��1���ֽ����ڱ���ֿ��Ƿ����.����ÿ8���ֽ�һ��,�ֱ𱣴���ʼ��ַ���ļ���С	

#define FONTINFOADDR  	(u32)6803456 	//(1024*6+500)*1024;//Ĭ����6M + 500K�ĵ�ַ
#define ICON_START_ADDR (u32)6291456 //6*1024*1024;//ͼ��洢�׵�ַ��ͼ����������Ϣ��
//�ֿ���Ϣ�ṹ�嶨��
//���������ֿ������Ϣ����ַ����С�� ��33���ֽ�
__packed typedef struct 
{
	u8 fontok;				//�ֿ���ڱ�־��0XAA���ֿ��������������ֿⲻ����
	u32 ugbkaddr; 			//unigbk�ĵ�ַ
	u32 ugbksize;			//unigbk�Ĵ�С	 
	u32 f12addr;			//gbk12��ַ	
	u32 gbk12size;			//gbk12�Ĵ�С	 
	u32 f16addr;			//gbk16��ַ
	u32 gbk16size;			//gbk16�Ĵ�С	 
	u32 icon_codeaddr;			//icon_code��ַ//20150909
	u32 icon_codesize;			//icon_code�Ĵ�С//20150909
}_font_info;																   

extern _font_info ftinfo;	//�ֿ���Ϣ�ṹ��

u32 fupd_prog(u16 x,u16 y,u8 size,u32 fsize,u32 pos);//��ʾ���½���
u8 updata_fontx(u16 x,u16 y,u8 size,u8 *fxpath,u8 fx);//����ָ���ֿ�
u8 update_font(u16 x,u16 y,u8 size,u8 src);//����ȫ���ֿ�
u8 font_init(void);//��ʼ���ֿ�
#endif





















