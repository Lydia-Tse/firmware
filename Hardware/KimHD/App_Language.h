﻿/*
*Function:
*Programed by:Ray_DK@163.com
*Complete date:
*Modified by:
*Modified date:
*Remarks:
*/
#ifndef __APP_LANGUAGE_H_
#define __APP_LANGUAGE_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "stm32f4xx.h"   


#define COM_PILE_DATE						    __DATE__   
#define COM_PILE_TIME						    __TIME__
#define FW_VERSION								"3D Printer"
#ifndef MINI
#define SW_VERSION								"Software Version:SC-10-Shark-v0.228r"
#else
#define SW_VERSION								"Software Version:SC-10-Shark-v0.2231mini"
#endif
#define WIFI_VERSION							"WIFI Version:SC-10-Shark-v0.05"
#define LASR_VERSION							"Laser Version:SC-10-Shark-v0.04 L"
#define CO_TD_INFO								"Shenzhen Shengma 3D Technology co. LTD"


#define	SK_NAME										"SKU-60-BASE"




#define C_Print				"��ӡ"
#define C_Ctol				"����"
#define C_Set				"����"
#define C_Preheat			"Ԥ��"
#define C_Move				"�ƶ�"
#define C_Extrusion			"����"
#define C_Fan				"����"
#define C_About				"����"
#define C_Language			"����"
#define C_Status			"״̬"
#define	C_PrintName			"��ӡ�ļ���"
#define	C_Pause				"��ͣ"
#define C_Pursue			"����"
#define C_Stop				"ֹͣ"
#define C_Tempertuare		"�¶�"
#define	C_Speed				"�ٶ�"
#define	C_PrintCtrl			"��ӡ����"
#define	C_PrintSpeed		"��ӡ�ٶ�"
#define	C_SDPrint			"SD����ӡ"
#define C_Back				"����"
#define C_PrintFinish		"��ӡ���"
#define	C_Confirm			"ȷ��"
#define C_Cancel			"ȡ��"	
#define C_Leveling			"��ƽ"
#define C_Adjust			"��ĻУ׼"
#define C_Load				"����"
#define C_Unload			"����"
#define C_Fast				"����"
#define	C_Normal			"����"
#define C_Slow				"����"
#define C_Continue			"�ϵ�����"

#define	C_LaserCtol		"�����̿���"
#define C_LaserMove		"�������ƶ�"
#define	C_Zero				"����"
#define C_Filament		"�Ĳĺľ�"
#define C_autoleveling   "�Զ���ƽ"
#define	C_offset         "ƫ��"


#define E_Print				"Print"
#define E_Ctol				"Control"
#define E_Set					"Setting"
#define E_Preheat			"Preheat"
#define E_Move				"Move"
#define E_Extrusion		"Extrusion"
#define E_Fan					"Fan"
#define E_About				"About"
#define E_Language		"Language"
#define E_Status			"Status"
#define	E_PrintName		"PrintFileName"
#define	E_Pause				"Pause"
#define E_Pursue			"Pursue"
#define E_Stop				"Stop"
#define E_Tempertuare	"Temperature"
#define	E_Speed				"Speed"
#define	E_PrintCtrl		"PrintCtrl"
#define E_PrintSpeed	"PrintSpeed"
#define	E_SDPrint			"SD_Print"
#define E_Back				"Back"
#define E_PrintFinish	"PrintFinish"
#define	E_Confirm			"Confirm"
#define E_Cancel			"Cancel"
#define E_Zero				"Zero"
#define E_Ctrl				"Ctrl"
#define E_Leveling			"Leveling"
#define E_Adjust			"Adjust"
#define E_Load				"Load"
#define E_Unload			"Unload"
#define E_Fast				"Fast"
#define	E_Normal			"Normal"
#define E_Slow				"Slow"
#define E_Continue			"Continue"


#define	E_LaserCtol		"LaserControl"
#define E_LaserMove		"LaserMove"
#define E_Filament		"Filament run out"
#define E_StopPrint		"Stop Printting?"
#define E_autoleveling   "Auto leveling"
#define	E_offset         "offset"

//德文
#define G_Print				"Drucken"
#define G_Ctol				"Kontrolle"
#define G_Set				"Einstellen"
#define G_Preheat			"Vorwärmen"
#define G_Move				"Bewegen"
#define G_Extrusion			"ausdrücken"
#define G_Fan				"Gebläse"
#define G_About				"Über"
#define G_Language			"Sprache"
#define G_Status			"Zustand"
#define	G_PrintName			"gedrucktes Dokument"
#define	G_Pause				"Pause"
#define G_Pursue			"Weiter"
#define G_Stop				"Stopp"
#define G_Tempertuare		"Temperatur"
#define	G_Speed				"Geschwindigkeit"
#define	G_PrintCtrl			"Drucken-Kontrolle"
#define G_PrintSpeed		"Drucken-Geschwindigkeit"
#define	G_SDPrint			"Drucken aus SD Karte"
#define G_Back				"Zurück"
#define G_PrintFinish		"Vollenden"
#define	G_Confirm			"Bestätigen"
#define G_Cancel			"Stornieren"
#define G_Zero				"Nullstellen"
#define G_Ctrl				"Kontrolle"
#define G_Leveling			"Nivellierung"
#define G_Adjust			"Kalibrierung"
#define G_Load				"Belastung"
#define G_Unload			"Entladen"
#define G_Fast				"Schnell"
#define	G_Normal			"Normal"
#define G_Slow				"Langsam" 
#define G_Continue			"Fortsetzen"


#define	G_LaserCtol			"Lasergravur-Kontrolle"
#define G_LaserMove			"Lasergravur-Bewegen"
#define G_Filament			"kein Verbrauchsmaterial"
#define G_StopPrint			"Drucken beenden?"
#define G_autoleveling   	"Auto Nivellierung"
#define	G_offset         	"Abweichung"

//French
#define F_Print				"Print"
#define F_Ctol				"Contrôler"
#define F_Set				"Réglage"
#define F_Preheat			"Préchauffer"
#define F_Move				"Déplacer"
#define F_Extrusion			"Extrusion"
#define F_Fan				"Ventilateur"
#define F_About				"Sur"
#define F_Language			"Langage"
#define F_Status			"État"
#define	F_PrintName			"Nom de fichier de l'impression"
#define	F_Pause				"Pause"
#define F_Pursue			"Continuar"
#define F_Stop				"Parada"
#define F_Tempertuare		"Temperatura"
#define	F_Speed				"Velocidad"
#define	F_PrintCtrl			"Control de Impression"
#define F_PrintSpeed		"Vitesse de l'impression"
#define	F_SDPrint			"Impression de SD"
#define F_Back				"Back"
#define F_PrintFinish		"Achèvement de l'impression"
#define	F_Confirm			"Confirmer"
#define F_Cancel			"Annuler"
#define F_Zero				"Remise à zéro"
#define F_Ctrl				"Contrôler"
#define F_Adjust			"Calibration"
#define F_Load				"Charge"
#define F_Unload			"Décharger"
#define F_Fast				"Rapide"
#define	F_Normal			"Normal"
#define F_Slow				"Lent"
#define F_Continue			"Continuer"

#define	F_LaserCtol			"Contrôle de gravure à laser"
#define F_LaserMove			"Déplacement de gravure à laser"
#define F_Filament			"Consommables épuisés"
#define F_StopPrint			"Arrêter l'impression?"
#define F_Leveling			"Nivellement"
#define F_autoleveling   "Nivellement auto"
#define	F_offset         "décalage"

//Spanish
#define S_Print				"Print"
#define S_Ctol				"Controlar"
#define S_Set				"Configuración"
#define S_Preheat			"Precalentamiento"
#define S_Move				"Mover"
#define S_Extrusion			"Extrusión"
#define S_Fan				"Ventilador"
#define S_About				"Sobre"
#define S_Language			"Lengua"
#define S_Status			"Estado"
#define	S_PrintName			"Nombre del documento de  impresión"
#define	S_Pause				"Suspensión"
#define S_Pursue			"Continuar"
#define S_Stop				"Parada"
#define S_Tempertuare		"Temperatura"
#define	S_Speed				"Velocidad"
#define	S_PrintCtrl			"Control de impresión"
#define S_PrintSpeed		"Velocidad de impresión"
#define	S_SDPrint			"Imprimir SD"
#define S_Back				"Back"
#define S_PrintFinish		"Terminación de impresión"
#define	S_Confirm			"OK"
#define S_Cancel			"Cancelar"
#define S_Zero				"Reducir a cero"
#define S_Ctrl				"Controlar"
#define S_Leveling			"Nivelación"
#define S_Adjust			"Calibración"
#define S_Load				"Carga"
#define S_Unload			"Descargar"
#define S_Fast				"Rápido"
#define	S_Normal			"Normal"
#define S_Slow				"Lento"
#define S_Continue			"Seguir"

#define	S_LaserCtol			"Control de grabado  láser"
#define S_LaserMove			"Mover de grabado  láser"
#define S_Filament			"No materiales para impresión"
#define S_StopPrint			"¿Dejar de imprimir?"
#define S_autoleveling   "Nivelación auto"
#define	S_offset         "compensar"

//Portuguese
#define P_Print				"Print"
#define P_Ctol				"Contrôle"
#define P_Set				"Configuração"
#define P_Preheat			"Pré-aqueça"
#define P_Move				"Movimento"
#define P_Extrusion			"Extrução"
#define P_Fan				"Ventilador"
#define P_About				"Sobre"
#define P_Language			"Língua"
#define P_Status			"Estado"
#define	P_PrintName			"Nome do documento imprimido"
#define	P_Pause				"Pausar"
#define P_Pursue			"Continuar"
#define P_Stop				"Parar"
#define P_Tempertuare		"Temperatura"
#define	P_Speed				"Velocidade"
#define	P_PrintCtrl			"Contrôle de impressão"
#define P_PrintSpeed		"Velocidade de impressão"
#define	P_SDPrint			"Impressão sd"
#define P_Back				"Back"
#define P_PrintFinish		"Impressão terminada"
#define	P_Confirm			"OK"
#define P_Cancel			"Cancelar"
#define P_Zero				"Voltar a zero"
#define P_Ctrl				"Contrôle"
#define P_Adjust			"Calibração"
#define P_Load				"Carga"
#define P_Unload			"Descarregar"
#define P_Fast				"Rápido"
#define	P_Normal			"Normal"
#define P_Slow				"Lento"
#define P_Continue			"Continuar"

#define	P_LaserCtol			"Contrôle de gravação por laser"
#define P_LaserMove			"Movimento de gravação por laser"
#define P_Filament			"Esgotamento de consumíveis"
#define P_StopPrint			"Parar de imprimir?"	
#define P_Leveling			"Nivelamento"
#define P_autoleveling   "Nivelamento auto"
#define	P_offset         "Deslocamento"

//����
#define J_Print				"ӡˢ"
#define J_Ctol				"����ȥ�`��"
#define J_Set				"�O��"
#define J_Preheat			"���"
#define J_Move				"�Ƅ�"
#define J_Extrusion			"Ѻ��"
#define J_Fan				"�ե���"
#define J_About				"�ˤĤ���"
#define J_Language			"���Z"
#define J_Status			"״�B"
#define	J_PrintName			"ӡˢ�ե�������"
#define	J_Pause				"һ�rͣ"
#define J_Pursue			"�A����"
#define J_Stop				"ֹͣ"
#define J_Tempertuare		"�¶�"
#define	J_Speed				"���ԩ`��"
#define	J_PrintCtrl			"ӡˢ����ȥ�`��"
#define J_PrintSpeed		"ӡˢ���ԩ`��"
#define	J_SDPrint			"SD���`��ӡˢ"
#define J_Back				"����"
#define J_PrintFinish		"ӡˢ����"
#define	J_Confirm			"�_��"
#define J_Cancel			"ȡ��"
#define J_Zero				"���ꥢ"
#define J_Ctrl				"����ȥ�`��"
#define J_Leveling			"�װ��{��"
#define J_Adjust			"ӆ��"
#define J_Load				"ؓ��"
#define J_Unload			"����"
#define J_Fast				"�٤�"
#define	J_Normal			"��ͨ"
#define J_Slow				"����`"
#define J_Continue			"�@�A����"



#define	J_LaserCtol			"��`���`���̥���ȥ�`��"
#define J_LaserMove			"��`���`�����Ƅ�"
#define J_Filament			"���Ϥ����ʤ��Ǥ�"	
#define J_StopPrint			"ӡˢ��ֹͣ���ޤ���? "
#define J_autoleveling   	"����ե�٥��"
#define	J_offset         	"���ե��å�"

//����
#define R_Print				"���֧�ѧ��"
#define R_Ctol				"�����ӧ֧�ܧ�"
#define R_Set				"���ѧ����ۧܧ�"
#define R_Preheat			"����֧էӧѧ�ڧ�֧ݧ�ߧ�� ���է�ԧ�֧�"
#define R_Move				"���֧�֧ާ֧�֧ߧڧ�"
#define R_Extrusion			"���ܧ����٧ڧ�"
#define R_Fan				"���֧ߧ�ڧݧ����"
#define R_About				"����"
#define R_Language			"���٧��"
#define R_Status			"��������ߧڧ�"
#define	R_PrintName			"���֧�ѧ�� �ڧާ֧ߧ� ��ѧۧݧ�"
#define	R_Pause				"���ѧ�٧�"
#define R_Pursue			"�����է�ݧاڧ��"
#define R_Stop				"������"
#define R_Tempertuare		"���֧ާ�֧�ѧ����"
#define	R_Speed				"���ܧ������"
#define	R_PrintCtrl			"�����ѧӧݧ֧ߧڧ� ��֧�ѧ���"
#define R_PrintSpeed		"���ܧ������ ��֧�ѧ��"
#define	R_SDPrint			"���֧�ѧ�� SD-�ܧѧ���"
#define R_Back				"���ѧ٧ѧ�"
#define R_PrintFinish		"���ѧӧ֧��֧ߧڧ� ��֧�ѧ��"
#define	R_Confirm			"����"
#define R_Cancel			"����ާ֧ߧ�"
#define R_Zero				"���ҧ���"
#define R_Ctrl				"�����ӧ֧�ܧ�"
#define R_Adjust			"��ĻУ׼"
#define R_Continue			"�����է�ݧاڧ��"

#define	R_LaserCtol			"����ߧ���ݧ� �ݧѧ٧֧�ߧ�� �ԧ�ѧӧڧ��ӧܧ�"
#define R_LaserMove			"���֧�֧ާ֧�֧ߧڧ� �ݧѧ٧֧�ߧ�� �ԧ�ѧӧڧ��ӧܧ�"
#define R_Filament			"���ѧ���էߧ�� �ާѧ�֧�ڧѧݧ� �ڧ��֧��ѧߧ�"

//Italian
#define I_Print				"Print"
#define I_Ctol				"Controlla"
#define I_Set				"Impostazioni"
#define I_Preheat			"Preriscalda"
#define I_Move				"Mossa"
#define I_Extrusion			"Estrusione"
#define I_Fan				"Ventilatore"
#define I_About				"Su"
#define I_Language			"linguaggio"
#define I_Status			"Stato"
#define	I_PrintName			"Filenome stampatp"
#define	I_Pause				"Pausa"
#define I_Pursue			"Continua"
#define I_Stop				"Ferma"
#define I_Tempertuare		"Temperatura"
#define	I_Speed				"Velocità"
#define	I_PrintCtrl			"Controllo di stampa"
#define I_PrintSpeed		"Velocità di stampa"
#define	I_SDPrint			"Stampa da SD"
#define I_Back				"Back"
#define I_PrintFinish		"Fine stampa"
#define	I_Confirm			"Conferma"
#define I_Cancel			"Annulla"
#define I_Zero				"Azzera"
#define I_Ctrl				"Controlla"
#define I_Leveling			"livellamento"
#define I_Adjust			"correzione"
#define I_Load				"Caricare"
#define I_Unload			"Scaricare"
#define I_Fast				"Veloce"
#define	I_Normal			"Normale"
#define I_Slow				"Lento"
#define I_Continue			"Continua"

#define	I_LaserCtol			"Controllo dell'incisione laser"
#define I_LaserMove			"Incisione laser mobile"
#define I_Filament			"Materiale esaurito"
#define I_StopPrint			"Smetti di stampare?"	
#define I_autoleveling   "Livellamento auto"
#define	I_offset         "compensare"


//#define MSG_AUTHOR								" Kim"
#define MSG_CONTACT								"Ray_DK@163.com"
#define MSG_COTD									"http://www.KimAuto.com.cn"

//#define __TIM2_CCRV_MOTO					//????????????????
#define __TMC_DRIVER							//??TMC????????????
#define __USR_SYS_CONFIG_SPEED		//????????,???????????

#define USER_DEBUG_LEVEL 2

#if (USER_DEBUG_LEVEL > 0)

#define  USR_ErrLog(...)    printf("ERROR: ") ;\
                            printf(__VA_ARGS__);\
														printf("\r\n");
#else
#define USR_ErrorLog(...)
#endif

#if (USER_DEBUG_LEVEL > 1)
#define  USR_UsrLog(...)    printf(__VA_ARGS__);\
														printf("\r\n");
#else
#define USR_UsrLog(...)
#endif

#if(USER_DEBUG_LEVEL > 2)
#define  USR_DbgLog(...)    printf("DBUG: ");\
                            printf(__VA_ARGS__);\
                            printf("\r\n");
#else
#define USR_DbgLog(...)
#endif

/*
�޸�˵��:
1.��ǰʹ�ò��������ӡ����,�ڲ��Թ����з����е���Ƭ���û���ܲ�����Ϣ,���ʹ�ô��ְ취û�а취�����ӡ��������

*/



#ifdef __cplusplus
}
#endif				//End of __cplusplus

#endif				//End of files








