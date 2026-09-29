#include <stdio.h>
int main(){
    int num1,num2,num3;
    float sum,average;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    average=(float)sum/3.0;
    printf("sum=%.2f\n",sum);
    printf("average=%.2f\n",average);
    return 0;
}