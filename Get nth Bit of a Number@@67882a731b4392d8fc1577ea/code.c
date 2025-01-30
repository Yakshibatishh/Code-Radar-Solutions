#include <stdio.h>
int main(){
    int a,num,value;
    scanf("%d",&a,&num);
    value=num&(1<<31);
    printf("%d",value);

}