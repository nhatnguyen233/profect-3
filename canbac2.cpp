#include<stdio.h>
#include<math.h>

int main(){
	
	float x, n,s;
	
	printf("Nhap x: ");
	scanf("%f", &x);
	printf("Nhap n: ");
	scanf("%f", &n);
	
	n=1/n;
	s=pow(x,n);
	
	printf("can bac %0.2 cua %0.2f la %0.2f", 1/n,x,s);
	
	return 0;

}
	
	
	
