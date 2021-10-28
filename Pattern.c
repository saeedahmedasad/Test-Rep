#include <stdio.h>

int main(void)
{
    int i=1;
    int n;

    printf("Of how many lines you want the pyramid of");
    scanf("%d", &n);

    while(i<n)
    {

        for(int j=0;j<i;j++)
        {
            printf("*");
        }

        printf("\n");
        
    i++;
    }

}

