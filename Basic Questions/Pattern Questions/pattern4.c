#include<stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        for(int space = n-1; space >= i; space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);//*
        }

        printf("\n");
    }
    
    return 0;
}

//     *
//    **
//   ***
//  ****
// *****
//     1
//    12
//   123
//  1234
// 12345