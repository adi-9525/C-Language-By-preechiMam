#include <stdio.h>
int main() {
    int x=1, n;
    printf("Ente the number rows required: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d  ",x);
        }
        x++;
        printf(" \n");
    }
}