#include<stdio.h>
#include<math.h>

int main(){

	int n, tong=0;
	printf("n=");
	scanf("%d", &n);
	
	while (n>0){
		
		tong=tong + n%10;
		n=n/10;
	
	}
	
	printf("tong cac chu so = %d", tong);
}
		
		
