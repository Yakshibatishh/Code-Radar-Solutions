#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a,&n);
    printf("%d",a>>n & 1);
    return 0;
