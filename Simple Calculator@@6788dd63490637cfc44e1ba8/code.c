#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %ch",&a,&b,&ch);
    if(ch=='+'){
        printf("%i",a+b);
    }
    else if(ch=='-'){
        printf("%i",a-b);
    }
    else if(ch=='*'){
        printf("%i",a*b);
    }
    else if(ch=='/'){
        printf("%i",a/b);
    }
    else{
        printf("error");
    }
}