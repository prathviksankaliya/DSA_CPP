#include<stdio.h>

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(j == 1 || i == 6 || j == i)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    return 0;
}

// *
// **
// * *
// *  *
// *   *
// ******
