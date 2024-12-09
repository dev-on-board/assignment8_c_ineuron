#include<stdio.h>
int main(){
    int count,i,j;
    for(i=0;i<=3;i++){
       count=0;
       for(j=0;j<=(6/2)-i;j++){
        printf("%d",++count);
       }
       for(j=0;j<2*i-1;j++){
        printf(" ");
       }
       
       if(i==0){
         count--;
       }
       while(count!=0)
       {
        printf("%d",count--);
       }

        printf("\n");
}
}