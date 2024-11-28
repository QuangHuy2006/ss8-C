#include <stdio.h>
int main(){
	int i,j,tong;
	int matrix[3][4]={	
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
	};
	for(i=0;i<1;i++){
		for(j=0;j<4;j++){
			printf("%d ", matrix[i][j]);
			tong+=matrix[i][j];
		}
		printf("\n");
		printf("%d ", matrix[i][j]);
		tong+=matrix[i][j];
		for(j=0;j<4;j++){
			printf(" ");
		}
		printf("%d ", matrix[i][j]+3);
		tong+=matrix[i][j]+3;
	}
	printf("\n");
	for(j=0;j<4;j++){
			printf("%d ", matrix[i][j]+4);
			tong+=matrix[i][j]+4;
		}
	printf("\n\n\ntong cac so=%d", tong);
}