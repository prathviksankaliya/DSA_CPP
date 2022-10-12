#include<stdio.h>
using namespace std;

int main()
{
    char ch;
    printf("Enter Alpha : ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("This is A Alphabet!!");
    }
    else{
        printf("this is not a alphabet!!");
    }
    return 0;

}