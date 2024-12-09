#include<stdio.h>
int main(){
    int i,j;
    char count;
    for(i=0;i<=6;i++){
        count='A';
       for(j=0;j<=6-i;j++){
       if(i==0)
       {
        printf("")
       }
        printf("%c",count);
        count++;
       } 
       for(j=0;j<=2*i-1;j++){
          printf(" ");
       }
       if(i>0)
       count--;
       while(count>='A'){
           printf("%c",count);
           count--;
       }
        printf("\n");
    }
    
    return 0;
}