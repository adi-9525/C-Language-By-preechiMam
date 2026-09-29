#include<stdio.h>
#include<math.h>
int main(){
    int arithmetic;
    printf("Enter the arithmetic operation you want to perform \n");
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    scanf("%d", &arithmetic);
    switch(arithmetic) {
        case 1 :
        printf(" you have selected addtion , now enter the two numbers you want to add \n");
        int a,b; 
        scanf("%d %d", &a, &b);
        a=a+b;
        printf("The sum of two numbers is %d", a);
        break;
        case 2 :
        printf(" you have selected substration ");
        int c,d;
        scanf("%d %d", &c, &d);
        c=c-d;
        printf("The difference of two numbers is %d", c);
        break;
        case 3 :
        printf(" you have selected multiplication ");
        int e,f;
        scanf("%d %d", &e, &f);
        e=e*f;
        printf("The product of two numbers is %d", e);
        break;
        case 4 :
        printf(" you have selected division ");
        int g,h;
        scanf("%d %d", &g, &h);
        g=g/h;
        printf("The quotient of two numbers is %d", g);
        break;
    }
}