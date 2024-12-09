#include<stdio.h>
int main(){
    int i,j;
    char count;
    for(i=0;i<=3;i++){
       for(j=0;j<=i;j++){
        printf(" "); 
       }
       count='A';
       for(j=0;j<=3-i;j++){
          printf("%c",count);
          count++;
       }
       count=count-2;
       while(count>='A'){
           printf("%c",count);
           count--;
       }
        printf("\n");
    }
    
    return 0;
}