#include <stdio.h>

int main(void)
{
    int x;
    int y;
    char op;

    printf("This Program will Add up Two Numbers \n");
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Operator: ");
    scanf(" %c", &op);
    printf("Enter Y: ");
    scanf("%d", &y);
    
    if (op == '+')
    {
        printf("%d + %d = %d",x , y, x+y);
    }
    else if(op =='-')
    {
        printf("%d - %d = %d",x , y, x-y);
    }
    else if(op =='*')
    {
        printf("%d * %d = %d",x , y, x*y);
    }
    else if(op =='/')
    {
        printf("%d / %d = %d",x , y, x/y);
    }
    
}