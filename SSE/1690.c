#include<stdio.h>

int is_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int compute_day(int year, int month, int day){
    int yearDay = 0;
    int month_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(is_leap_year(year)) month_arr[1] = 29;
    for(int i = 0; i < month - 1; i++){
        yearDay += month_arr[i];
    }
    yearDay += day;
    return yearDay;
}

void MonthDay(int year, int yearDay, int *pMonth, int *pDay){
    int i = 0;
    int month_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(is_leap_year(year)) month_arr[1] = 29;
    while(yearDay > 0){
        yearDay -= month_arr[i];
        i++;
    }
    *pMonth = i;
    *pDay = yearDay + month_arr[i - 1];
    return;
}

int main(){
    int choice;
    int year, month, day, yearDay;
    printf("1. year/month/day -> yearDay\n2. yearDay -> year/month/day\n3. Exit\nPlease enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Please enter year, month, day:");
        scanf("%d,%d,%d", &year, &month, &day);
        yearDay = compute_day(year, month, day);
        printf("yearDay = %d\n", yearDay);
        break;
    case 2:
        printf("Please enter year, yearDay:");
        scanf("%d,%d", &year, &yearDay);
        MonthDay(year, yearDay, &month, &day);
        printf("month = %d,day = %d\n", month, day);
        break;
    case 3:
        return 0;
    default:
        break;
    }
    return 0;
}