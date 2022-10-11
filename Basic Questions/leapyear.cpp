#include<stdio.h>
using namespace std;

int main()
{
    int year;

    printf("Enter a Year: ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("Year is Leap Year");
    }else{
        printf("Year is a not Leap Year!!");
    }
    
    return 0;

}