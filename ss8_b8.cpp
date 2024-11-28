#include <stdio.h>
int main(){
	int i,j,tong;
	int matrix[3][3]={	
	{1,2,3},//02 11 20
	{4,5,6},//00 11 22
	{7,8,9}
	};
	for(i=0;i<3;i++){
		for(j=2;j>i;j--){
			printf(" ");
		}
		printf("%d ", matrix[i][3-i-1]);
		printf("\n");	
		tong+=matrix[i][3-i-1];
}
	printf("\n\ntong=%d", tong);
}