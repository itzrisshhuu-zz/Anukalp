#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,digit,sum=0;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("sum of digits is %d",sum);
    return 0;
}