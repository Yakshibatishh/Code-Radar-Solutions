#include <stdio.h>
int main(){
    int x,count;
    count=0;
    scanf("%d",&x);
    if(x==0){
        printf("32");
    }
    while((x & 1)==0){
        count ++;
        x=x>>1;
    }
    printf("%d",count);
}