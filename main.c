#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,j,i,c;
    printf("Donner la taille de dessgin");
    scanf("%d", &A);

    for(i=0; i<=A; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("\n\n");


    for(i=0; i<=A; i++)
    {
        for(j=i; j<= A; j++)
        {
            printf(" ");
        }
        for(j=A-i; j<= A; j++)
        {
            printf("*");
        }
        printf("\n");
    }




    for(i=1; i<=A; i++)
    {
        for(j=1; j<=2*A-1; j++)
        {
            if(j>=A -(i-1) && j<= A + (i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for(i=1; i<=A; i++)
    {
        for(j=1; j<=A; j++)
        {
            if(j>=A -(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<=A; i++)
    {
        for(j=1; j<=A-i; j++)
        {
            printf(" ");
        }
        for(c=1; c<=(2*i)+1 ; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
