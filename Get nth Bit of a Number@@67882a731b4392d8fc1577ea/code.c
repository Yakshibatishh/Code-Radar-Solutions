#include <stdio.h>
int main(){
    int a,n,value;
    scanf("%d",&a,&n);
    value=n&(1<<n-1);
    printf("%d",value);
    }

