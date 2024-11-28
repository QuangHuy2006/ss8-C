#include <stdio.h>
#include <math.h>
int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0,i,search=0,arr[10]={1,2,3,4,2,1,2,5,8};	
	int length=sizeof(arr)/sizeof(arr[0]);
	for( i=0;i<length;i++){
	if(arr[i]==1){
			++a;	
	}
	if(arr[i]==2){
			++b;	
	}
	if(arr[i]==3){
			++c;	
	}
	if(arr[i]==4){
			++d;	
	}
	if(arr[i]==5){
			++f;	
	}
	if(arr[i]==8){
			++e;	
	}
}
int max=1;
if(a>b && a>c && a>d && a>e && a>f){
	max=1;
}
if(b>a && b>c && b>d && b>e && b>f){
	max=2;
}
if(c>b && c>a && c>d && c>e && c>f){
	max=3;
}
if(d>b && d>c && d>a && d>e && d>f){
	max=4;
}
if(e>b && e>c && e>d && e>a && e>f){
	max=8;
}
if(f>b && f>c && f>d && f>e && f>a){
	max=5;
}
	printf("phan tu xuat hien nhieu nhat la %d", max);
}
