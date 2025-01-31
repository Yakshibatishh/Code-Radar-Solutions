#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        prinf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}