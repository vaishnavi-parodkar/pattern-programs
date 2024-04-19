#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the no. of lines");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=1;j<=n-i-1;j++){
            printf(" ");
        }
        for(k=i+1; k<=2*i+1; k++){
            printf("%d",k);
        }
        for(int m=2*i; m>=i+1; m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}