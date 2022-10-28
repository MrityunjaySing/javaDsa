
/*
       *
      ***
     *****
    *******

*/
#include<stdio.h>
#include<conio.h>
int main(){
int n ,i,j;
printf("Enter the first number");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=(n*2)-1;j++)
    if(j>=(n+1)-i&&j<=(n-1)+i){

        printf("*");
    }
    else{
        printf(" ");
    }
    printf("\n");
}
}
