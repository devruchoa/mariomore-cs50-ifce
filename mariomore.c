#include <stdio.h>

int main() {
    int n;

    printf("Quantos degraus deve ter? ");
    scanf("%d", &n);

    for (int c = 0; c < n; c++)
    {
        
        for (int j = n - 1; j>c; j--)
        {
            printf(" ");
        }
        
        for (int j = 0; j<=c; j++)
             {
                 printf("#");
             }  
        
        printf(" ");

        for (int j = 0; j<=c; j++)
             {
                 printf("#");
             } 

        for (int j = n - 1; j>c; j--)
        {
            printf(" ");
        }

        printf("\n");       
        
    }   
    return 0;
}