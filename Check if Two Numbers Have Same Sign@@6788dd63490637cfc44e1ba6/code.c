#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        printf("Same sign");
    }
    else if(a<0 && b<0){
        printf("same Sign");
    }
    else if(a>0 && b<0){
        printf("Different Sign");
    }
    else{
        printf("Different Sign");
    }
}
    