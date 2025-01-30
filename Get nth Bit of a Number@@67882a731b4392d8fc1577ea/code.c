#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a,&n);
    if(n&(1<<n)){
        printf("0");
    }
    else{
        printf("1");
    }
    }

