#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i==A){
        printf("Excellent");
    }
    else if(i==B){
        printf("Good");
    }
    else if(i==C){
        printf("Average");
    }
    else if(i==D){
        printf("Below Average");
    }
    else if(i==F){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    
}