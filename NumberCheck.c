#include <stdio.h>

int main(void)
{
    int number;
    printf("This Program Will Check whether the Number is Positive or Negative!\n");

    printf("Enter Your Number");
    scanf("%d", &number);

    if(number<0)
    {
        printf("Your Number is Negative");
    }
    else if(number>0)
    {
        printf("Your Number is Positive");
    }
    else{
        printf("Your Number is equal to Zero");
    }

}