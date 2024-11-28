#include <stdio.h>
#include <math.h>
int main(){
	int i,j,matrix[3][4]={
	{4,12,36,11},
	{32,14,10,8},
	{22,90,100,122}
	};
	int max=-pow(10,9);
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(matrix[i][j]>max){
				max=matrix[i][j];
			}
		}
	}
	printf("%d", max);
}