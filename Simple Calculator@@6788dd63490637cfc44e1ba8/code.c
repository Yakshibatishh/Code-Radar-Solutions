#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%d %d %ch",&a,&b,&ch);
    if(ch=='+'){
        printf("%f",a+b);
    }
    else if(ch=='-'){
        printf("%f",a-b);
    }
    else if(ch=='*'){
        printf("%f",a*b);
    }
    else if(ch=='/'){
        printf("%f",a/b);
    }
    else{
        printf("error");
    }
}