#include<stdio.h>
#include <ctype.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int is_valid_date(int year, int month, int day) {
    if (month < 1 || month > 12) return 0;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap_year(year)) days[1] = 29;
    return day >= 1 && day <= days[month - 1];
}

int main(){
    int day, y, m, d;
    char gender;

    printf("Please input your busiest day.\n");
    if(scanf("%d", &day) != 1 || day < 1 || day > 7){
        printf("Invalid input.\n");
        return 0;
    }

    printf("Please input your gender.\n");
    if(scanf(" %c", &gender) != 1 || (gender != 'm' && gender != 'f')){
        printf("Invalid input.\n");
        return 0;
    }

    printf("Please input your birthday.\n");
    if(scanf("%d-%2d-%2d", &y, &m, &d) != 3 || !is_valid_date(y, m, d)){
        printf("Invalid input.\n");
        return 0;
    }

    int res = day * 2;
    res += (gender == 'm' ? 4 : 8);
    res = res * 50 + (m <= 6 ? 2002 : 3002);
    res = res - y;
    int age = res % 100 + 10;
    
    printf("Your age is:%d\n", age);
    return 0;
}