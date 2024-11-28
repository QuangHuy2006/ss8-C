#include <stdio.h>
int main(){
	int i,j,tong;
	int matrix[3][3]={	
	{1,2,3},//00 11 22 
	{4,5,6},
	{7,8,9}
	};
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("%d ", matrix[i][j]);
		printf("\n");
		tong+=matrix[i][j];
}
	printf("\n\ntong=%d", tong);
}