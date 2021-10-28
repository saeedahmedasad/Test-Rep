#include <stdio.h>

int main(void){
    int n;
    int i=1;

    printf("Enter the Number of which you want the table of: ");
    scanf("%d", &n);

    while(i<11){
        printf("%d * %d = %d", n, i , n*i);
        printf("\n");
        i++;
    }
}