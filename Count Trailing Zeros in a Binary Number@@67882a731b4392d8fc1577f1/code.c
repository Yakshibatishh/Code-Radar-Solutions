#include <stdio.h>
int main(){
    int x,count;
    count=0;
    scanf("%,&x");
    if(x==0){
        printf("32");
        return 0;
    }
    while((x&1)==0){
        count ++;
        x=x>>1;
    }
    printf("%d",count);
    return 0;
}