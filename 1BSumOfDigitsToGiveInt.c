#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter The number : ");
    scanf("%d",&x);
    int sum=0,remainder;
    while(x!=0){
        remainder=x%10;
        sum=sum+remainder;
        x=x/10;
    }
    printf("%d \n", sum);
    }
