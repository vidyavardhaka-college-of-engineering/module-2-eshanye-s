//Program to find number of digits in the input
//INPUT - 452
//OUTPUT -3

#include <stdio.h>

int main()
{
   int num;
    int count = 0;
    //printf("Enter any number: ");
    scanf("%d", &num);
    do
    {
        count++;
        num /= 10;
    } while(num!= 0);

    printf("%d",count );

    return 0;
}
