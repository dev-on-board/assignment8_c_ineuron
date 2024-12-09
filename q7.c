#include<stdio.h>
int main(){
    int i;
    for (i=0;i<=9;i++){
        printf("*");
    }
    printf("\n");
    int a,j;
    for(a=0;a<=4;a++){
        for(j=0;j<=9;j++){
            if(j<4-a || j>5+a)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    
}