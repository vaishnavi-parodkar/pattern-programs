#include<stdio.h>
int main(){
    int i,j, k,n;
    printf("input the number of lines required");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k=65+n-i;
        for(j=1; j<=i; j++){
            printf("%c",(char)(k));
            k++;
        }
        printf("\n");
    }
    return 0;
}