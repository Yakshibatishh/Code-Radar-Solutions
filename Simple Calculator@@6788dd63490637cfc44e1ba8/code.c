#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%i %i %c",&a,&b,&ch);
    if(ch=='+'){
        printf("%i",a+b);
    }
    else if(ch=='-'){
        printf("%i",a-b);
    }
    else if(ch=='*'){
        printf("%i",a*b);
    }
    else(ch=='/'){
        printf("%i",a/b);
    }
}