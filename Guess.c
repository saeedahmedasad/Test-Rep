#include <stdio.h>

int main(void)
{
    int n;
    int guess_counter=0;
    int guess_limit=3;
    int guess=9;
    printf("Guess A Number Between 0 and 20: ");
    scanf("%d", &n);
    while(n != guess )
        {
            printf("Enter Again: ");
            scanf("%d", &n);
            guess_counter++;
            
        
        }
        printf("You Won The Game!! HURRAY");
}
   