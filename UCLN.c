#include<stdio.h>

int main(){

    int a,b,i;
    printf("nhap 2 so a,b: ");
    scanf("%d%d", &a, &b);

    while(a!=b){
    if(a>b) a=a-b;
    else b=b-a;
    }
    printf("UCLN la %d ",a);

    return 0;

}

