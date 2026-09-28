#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of fibonacci terms required: ");
    scanf("%d",&n);
    int t1=0, t2=1, nextTerm;
    printf("Fibonacci Series: ");
    for(int i=1;i<=n;++i){
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}