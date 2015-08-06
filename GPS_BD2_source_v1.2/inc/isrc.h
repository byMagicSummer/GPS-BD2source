/*
 * isrc.h
 *
 *  Created on: 2013-11-21
 *      Author: whc
 */

#ifndef ISRC_H_
#define ISRC_H_

#include "../cfg.h"
#include "ichnl.h"

typedef struct SourceSystem    				//�ź�Դ����ṹ��
		{
			UQUAD	 tmr;                   //�����ʱ����λms
			QUAD	 SatNM;					//����������Ŀ
			ChPrms	 chnls[CHNLNUM];		//��ͨ���ṹ�壬��Ÿ����ǵ������Ϣ
		}SrcSys;

#endif /* ISRC_H_ */
