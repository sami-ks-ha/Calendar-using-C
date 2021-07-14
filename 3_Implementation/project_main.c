#include<stdio.h>
#include"Calendar.h"
int main()
{
    int year;
    printf("enter the year for which u want to display calendar");
    scanf("%d",&year);
// Function Call
    printCalendar(year);
    test_main();
    return 0;
}