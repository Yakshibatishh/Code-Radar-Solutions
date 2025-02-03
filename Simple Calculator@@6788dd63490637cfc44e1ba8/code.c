#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %ch",&a,&b,&ch);
    int addition,substraction,multiplication,division;
    if(ch=='+'){
        printf("%d",a+b);
    }