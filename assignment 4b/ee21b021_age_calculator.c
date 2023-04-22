#include <stdio.h>
#include <stdlib.h>
#define todays_day      05
#define todays_month    03
#define todays_year     2022
int test(int a, int b, int c)
{
    if(c < 0) return 0;
    else if((c == 0) && (b < 0)) return 0;
    else if((c == 0) && (b == 0) && (a < 0)) return 0;
    else return 1;
}
int days_in_month(int a)                                 // this function returns no of days in the month if we input the current month 
{
    if((a == 4) || (a == 6) || (a == 9) || (a == 11))
    {
        return 30;
    }
    else if(a == 2)
    {
        return 28;
    }
    else
    {
        return 31;
    }
}
int main()
{
    int day,month,year,diffrence_day,difference_year,difference_month,dummy;                     // declaration  
    printf("please enter yout date of birth with spaces between the day, month and year(dd mm yyyy):"); 
    scanf("%d %d %d",&day,&month,&year);
    diffrence_day = todays_day - day;
    difference_month = todays_month - month;           // taking basic subatration of dates
    difference_year = todays_year -  year;
    dummy = test (diffrence_day,difference_month,difference_year);
    if(dummy == 0)
    {
        printf("error: input invalid\n");
        return 0;
    }
    if(difference_month < 0)
    {
        difference_year--;
        difference_month += 12;                       // if we have -1 months and 10 years then converting it to 11 months and 9 years
    }                                                 // it is like taking carryovers in substraction here we subatitue one year as 12 months to compensete the negitive value
    if(diffrence_day < 0)
    {
        diffrence_day += days_in_month(todays_month - 1);  // if difference_day is negitive then we convert the previous month to days and add the difference_day(or substract taking absolute value of difference_day)
        difference_month--;                                // example: if we have -3 days in march then it converts to 25 days past february
    }
    if(difference_month < 0)                        // assume the case where the user types 10 march 2021 it bypasses the first if and in second if statement the different_months becomes negitive so we require this
    {
        difference_year--;
        difference_month += 12;                     
    }
    printf("your age till today is (%d/%d/%d): %d days %d months %d year",todays_day,todays_month,todays_year,diffrence_day,difference_month,difference_year);
    return 0;
}   