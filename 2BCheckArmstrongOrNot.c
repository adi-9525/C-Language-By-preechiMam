#include <stdio.h>
#include <math.h>
double pow(double base, double exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}
int main()
{
    int number, count;
    printf("Enter a number to check if it is an Armstrong number or not: ");
    scanf("%d", &number);
    int oriNum = number;
    int sum = 0;
    int oricount = 1;
    int k = 1;
    while (k != 0)
    {
        for (k = oriNum; k != 0; k = k / 10)
        {
            oricount++;
        }
    }
    --oricount;
    for (int i = 1; i <= oricount; i++)
    {
        int x = (number / (int)pow(10, oricount - i)) % 10;
        
       
        sum = sum + (int)(pow(x, oricount));
    }
    if (sum == number)
    {
        printf("%d is an Armstrong number.", sum);
    }
    else
    {
        printf("%d is not an Armstrong number.", sum);
    }
}