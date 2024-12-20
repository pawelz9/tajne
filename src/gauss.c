#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
    /**
  	 * Tutaj należy umieścić właściwą implemntację.
		 */
	double m=0;
	
	for(int i=0;i<mat->r-1;i++)
	{
		if(mat->data[i][i]==0)
		{
			printf("element diagonalny rowny zero nie udalo sie dokonac eliminacji gaussa");
			return 1;
		}
			m=mat->data[i+1][i]/mat->data[i][i];
			for(int j=0;j<mat->c;j++)
			{
				mat->data[i+1][j]-=mat->data[i][j]*m;
			}
			b->data[i+1][0]-=b->data[i][0]*m;
	}
		return 0;
}

