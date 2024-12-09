#include<stdio.h>
int main(){
    int count=0,i,j;
    for(i=0;i<=3;i++){
       count=0;
       for(j=0;j<(6/2)-i;j++){
        printf(" "); 
       }
       for(j=0;j<=i;j++){
          printf("%d",++count);
       }
       count--;
       while(count!=0){
           printf("%d",count--);
       }
        printf("\n");
    }
}