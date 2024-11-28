#include <stdio.h>
int main(){
	int a,b,i,j;
	printf("nhap so cot:");
	scanf("%d", &a);
	printf("nhap so hang:");
	scanf("%d", &b);
	int matrix[a][b];
	printf("nhap cac phan tu trong mang(%d phan tu):",a*b);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n", matrix[i][j]);
	}
}