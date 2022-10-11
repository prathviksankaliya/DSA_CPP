#include<stdio.h>
using namespace std;

int main()
{
    int days, years, weeks, user_Days;
    printf("Enter The Days: ");
    scanf("%d", &user_Days);
    years = user_Days/365;
    weeks = user_Days/7 - (years*52);
    days = user_Days - ((years * 365) + (weeks * 7));

    printf("Years is : %d\n",years);
    printf("Weeks is : %d\n",weeks);
    printf("Days is : %d\n",days);
    
    return 0;
}