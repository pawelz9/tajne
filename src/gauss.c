#include "gauss.h"
#include <stdio.h>
/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
    /**
  	 * Tutaj należy umieścić właściwą implemntację.
		 */
	double m=0;
	
	for(int i=0;i<mat->c-1;i++)
	{
		if(mat->data[i][i]==0)
		{
			printf("element diagonalny rowny zero nie udalo sie dokonac eliminacji gaussa");
			return 1;
		}
		for(int j=i+1;j<mat->r;j++){
				m=mat->data[j][i]/mat->data[i][i];
				for(int k=i;k<mat->c;k++){
					mat->data[j][k]-=mat->data[i][k]*m;
				}
				b->data[j][0]-=b->data[i][0]*m;
		}	
	}
		return 0;
}

