#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a,&b,&c);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Zero")
    }
}