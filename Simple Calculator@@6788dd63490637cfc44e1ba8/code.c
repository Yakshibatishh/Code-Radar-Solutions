#include <stdio.h>
int main(){
    int a,b,s;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='+'){
        s=a+b;
        printf("%d",s);
    }
    else if(ch=='-'){
        s=a-b;
        printf("%d",s);
    }
    else if(ch=='*'){
        s=a*b;
        printf("%d",s);
    }
    else if(ch=='/'){
        s=a/b;
        printf("%d",s);
    }
    else{
        printf("error");
    }
}