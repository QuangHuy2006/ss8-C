#include <stdio.h>
int main(){
	int diff,pos,n,arr[5]={1,2,3,4,36};
	printf("nhap mot so ngau nhien:");
	scanf("%d", &n);
	for(int i=0;i<5;i++){
	if(arr[i]==n)	{
		pos=i;
		break;
		}
	}
	if(pos){
			printf("\nvi tri cua phan tu trong mang la %d",pos+1);
	}else{
		printf("khong co phan tu nay khong mang");
	}
}