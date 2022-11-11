#include<stdio.h>

int main()
{
    int n = 5, temp;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == 1 || i == 5)
            {
                printf("*");
            }
            else{
                if(j == 1 || j == 5)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
    }
        printf("\n");
    }
}

// *****
// *   *
// *   *
// *   *
// *****