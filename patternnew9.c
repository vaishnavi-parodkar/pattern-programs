#include <stdio.h>
int main() {
   
    
    int i, j, n;
    printf("insert value of lines");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
      int k=64;
        for(j=1; j<=i; j++)
        {
            printf("%c",(char)(k+i));
            k++;
        }
        
        printf("\n");
    }
    return 0;
}