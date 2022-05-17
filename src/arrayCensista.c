/*
 * arrayCencista.c
 *
 *  Created on: 15 may 2022
 *      Author: jmrodri
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayCensista.h"
#define EMPTY 1
#define OCCUP 0

int initArrayCensista(Censista* pArray, int len)
{
	int ret=-1;
	int i;

	if(pArray!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			pArray[i].isEmpty = EMPTY; // esta empty
			ret=0;
		}
	}

	return ret;
}

int findEmptyCensistaPos(Censista* pArray, int len)
{
	int ret=-1;
	int i;

	if(pArray!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			if(pArray[i].isEmpty==EMPTY)
			{
				ret=i;
				break;
			}
		}
	}

	return ret;
}

