#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=2;i++){
        for(j=0;j<=18;j++){
            if((j>=2-i && j<=6+i) || (j>=12-i && j<=16+i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<=9;i++){
        for(j=0;j<=18;j++){
            if(i==0 && j==6)
            printf("MySiRG");
            if(i==0 && j >=6 && j<=11)
            continue;
            if(j>=0+i && j<=18-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}