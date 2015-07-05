/*
 * ichnl.h
 *
 *  Created on: 2011-11-21
 *      Author: ah
 */

#ifndef ICHNL_H_
#define ICHNL_H_

#include "inco.h"
#include "iloc.h"
#include "sat_typ.h"
#include "../cfg.h"

typedef struct channel							//ͨ���ṹ��
		{
	        SatType sattype;					//��������
			UBYTE	satID;						//����ID
			DOUB	timer;						//����ʱ���Ӧ�����ڼ�ʱ
			DOUB	amp;						//�źŷ���
			Nco		carNco;						//�ز�NCO
			Nco		cacNco;						//CA��NCO
			BYTE	cacode[BD2_CA_LEN];			//CA������
			BYTE	nhcode[NHLEN];				//NH������
			BYTE	navbit[32];					//��������buffer
			BYTE	navdata;					//��ǰ�ĵ�������
			UQUAD	cacphs;						//CA����Ƭ����
			UQUAD   maxcaphs;					//CA����Ƭ���������ֵ
			UBYTE   navflg;						//�������ض�ȡ��־λ
			UBYTE	CntNav;						//�������ؼ���
			UBYTE	Cntms;						//����������ms����
			UBYTE	Maxms;						//����������ms�������ֵ
			Sat_Loc loc;						//�������λ�õ���Ϣ�Ľṹ��
		}ChPrms;
#endif /* ICHNL_H_ */
