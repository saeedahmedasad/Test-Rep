#include <stdio.h>

int main(void)
{
    int n;
    int guess=3;
    int guess_counter=1;
    int guess_limit=3;
    int outOfGuess=0;

    printf("Guess A Number Between 0 and 20: ");
    scanf("%d", &n);
    while(n != guess && outOfGuess ==0 )
        {
            if(guess_counter<guess_limit)
            {
            printf("Enter Again: ");
            scanf("%d", &n);
            guess_counter++;
            }
            else
            {
                outOfGuess = 1;
            }
            
            
        
        }
        if(outOfGuess == 1)
        {
            printf("You Are Out of Guesses!     Sorry");
        }
        else
        {
                printf("You Won The Game!! HURRAY");
        }
        
}
   