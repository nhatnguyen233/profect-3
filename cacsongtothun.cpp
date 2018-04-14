#include <stdio.h>
#include <conio.h>
 
int main()
{
 
    int i,j,n,dem=0;
    printf("n = ");
    scanf("%d",&n);
   
    for(i=2;i<=n;i++)
    {
        dem = 0; 
        for(j=1;j<=i;j++)
            if (i%j==0)
                dem++;
 
        if(dem==2)
            printf("%d\n",i);
    }
 
    getch();
    return 0;
 
}
