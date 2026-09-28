#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to get prime numbers up to: ");
    scanf("%d",&n);
    printf("Prime numbers up to %d are:\n", n);
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                if(i==j){
                    printf("%d\n",i);
                }
                break;
            }
        }
    }
}