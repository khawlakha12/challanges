#include<stdio.h>

int main(){
	int a,b,c,tmp;
	printf("donner les trois nombres:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	tmp=a;
	a=c;
	c=tmp;
	printf("l'inverse est = %d,%d,%d",a,b,c);
	
	return 0;
	
}

