#include<stdio.h>
#include<math.h>
int main(){
    int root1,root2,a,b,c;
    printf("Quadratic euation in the form of ax^2 + bx + c = 0 \n");
    printf("Enter coefficient of x square : ");
    scanf("%d", &a);
    printf("Enter the coefficient of x : ");
    scanf("%d", &b);
    printf("Enter the coefficient c : ");
    scanf("%d", &c);
    int discri=(b*b)-4*a*c;
    if(discri>0){
        root1=(-b+sqrt(discri))/2*a;
        root2=(-b-sqrt(discri))/2*a;
        printf("Roots are real and different \n");
        printf("Root 1 = %d \n", root1);
        printf("Root 2 = %d \n", root2);
    }
         else if (discri==0){
           root1=(-b)/2*a;
           printf("Roots are real and equal and that is  %d", root1);
        }
           else{
            printf("it has no real roots \n");
        }
    }
