
#include<stdio.h>
#include<conio.h>
int main(){
int n ,i,j,m,k;
printf("Enter the first number");
scanf("%d",&n);

for(i=1;i<=n;i++){
       k=1;
    for(j=1;j<=(n*2)-1;j++){

    if(j>=(n+1)-i&& j<=(n-1)+i){
        printf("%d",k);
   j<n? k++:k--;
    }
    else
        printf(" ");
    }
    printf("\n");
}
}
