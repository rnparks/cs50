#include <stdio.h>


void printchar(char ch, int n);

int main(void)
{
    int height;
    int n = 0;
    do
    { 
        printf("Please Give me a number between 1 and 23: ");
        scanf("%d", &height);
    }
    while (height <= 0 || height > 23);

    int sym = 2;
    int space = height - 1;

    while (n  < height)
    {   
    printchar(' ', space);
    printchar('#', sym);
    printf("\n");
    sym += 1;
    space -= 1;
    n += 1;
    }

}


void printchar(char ch, int n)
{

    for (int i=0; i < n; i++)
        {
            printf("%c", ch);
        }

}




