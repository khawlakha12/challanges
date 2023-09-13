#include<stdio.h>
#include<math.h>
#define pi (3.141592653589793)
int main(){
	int r;
	float c;
	
	printf("entrer valleur r:");
	scanf("%d",&r);
	
	c= 2*pi*r;
	printf("la circonference de cercle est:%.2lf",c);
};
