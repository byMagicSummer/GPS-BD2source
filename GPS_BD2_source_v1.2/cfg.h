/*
 * cfg.h
 *
 *  Created on: 2011-11-17
 *      Author: ah
 */

#ifndef CFG_H_
#define CFG_H_

#include "./inc/sat_typ.h"

#define SMPFRQ	16000000.000			//������
#define INTFRQ	5000000.0000			//��Ƶ

#define BD2_CARFRQ  1561098000.0		//BD�ز�Ƶ��
#define BD2_CACFRQ	2046000.0000		//BD��CA��Ƶ��
#define BD2_NH_FRQ	1000.0000000		//NH��Ƶ��
#define BD2_AIDFAC	763.00000000		//BD�ز�Ƶ����CA��Ƶ�ʱ�������
#define BD2_CA_LEN   2046				//BD��CA�볤��

#define GPS_CARFRQ 1575420000.0			//GPS�ز�Ƶ��
#define GPS_CACFRQ 1023000.0000			//GPS��CA��Ƶ��
#define GPS_AIDFCT 1540.0000000			//GPS�ز�Ƶ����CA��Ƶ�ʱ�������
#define GPS_CA_LEN 1023					//GPS��CA�볤��

#define BD2_SATNUM  37					//BD��������
#define GPS_SATNUM	37					//GPS��������
#define NHLEN	20						//BD��������
#define SUBFRM	30						//��֡����

#define TIMELEN 306000                   //����ʱ�䣬��λms
#define INTEVAL 0.002                    //Ƶ�ʿ����ָ��¼������λs

#define TIMEBGN 518454                  //���濪ʼʱ���Ӧ������ʱ����λs


#define USERB   38.897677					//γ��
#define USERL   -77.036531        					//����
#define USERH	0.1						//��

//#define USERB   30.75211					//γ��
//#define USERL   103.930479        					//����
//#define USERH	498.0						//��

#define T       30						//�û��˶��켣����

#define USERAX  0						//�û�x������ٶ�
#define USERAY  0						//�û�Y������ٶ�
#define USERAZ  0						//�û�Z������ٶ�

#define GPS_SMP_BIT  20					//GPS�������س���ʱ�䣬��λms
#define GEO_SMP_BIT  2					//GEO�������س���ʱ�䣬��λms
#define MEO_SMP_BIT	 20					//MEO�������س���ʱ�䣬��λms

#define THRESHOLD  1.77827941003892e-007	//�ж�����

#define CHNLNUM 37							//�����趨���ǿ���

extern const SatType SATTYPE[CHNLNUM];		//������������


#define flag_sele_sate 1		//ѡ�Ǳ�־λ 1:ѡ  0:��ѡ
#define max_num 8  //ѡ��
#define kz 3
#define kd 3
#define Threshold 5.0
#endif /* CFG_H_ */
