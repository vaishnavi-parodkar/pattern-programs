#include <stdio.h>

int main() {
   int i,j,k,n;
    printf("input the number of lines required");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        int sum=0;
        for(j=1; j<=i; j++){
            printf("%d",j);
            sum+=j;
            if(i!=j){printf("+");}
        }
        printf("=");
        printf("%d",sum);
        
        printf("\n");
    }

    return 0;
}