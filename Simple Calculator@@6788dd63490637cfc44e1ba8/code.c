#include <stdio.h>
int main(){
    float a,b,s;
    char ch;
    scanf("%ffd%c",&a,&b, &ch);
    if(ch=='+'){
        s=a+b;
        printf("%f",s);
    }
    else if(ch=='-'){
        s=a-b;
        printf("%f",s);
    }
    else if(ch=='*'){
        s=a*b;
        printf("%f",s);
    }
    else if(ch=='/'){
        s=a/b;
        printf("%f",s);
    }
    else{
        printf("error");
    }
}