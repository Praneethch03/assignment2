#include<stdio.h>
void main()
{
    int n,i,k=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            k++;
        }
    }if(k==2){
        printf("prime number");
    }
    else
    {
        printf("not prime");
    }
}