#include <stdio.h>

struct date_rec
{
    int day;
    int month;
    int year;
};
struct date_rec current_date;

int monthArr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void is_leap_year(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        monthArr[1] = 29;
    }
}

void input_date(struct date_rec *current_date){
    printf("请输入当前日期（年 月 日）：");
    scanf("%d %d %d", &current_date->year, &current_date->month, &current_date->day);
    is_leap_year(current_date->year);
}
void increment_date(struct date_rec *current_date){
    int newDay = current_date->day + 1;
    if(newDay > monthArr[current_date->month - 1]){
        if(current_date->month == 12){
            current_date->year += 1;
            current_date->month = 1;
        }else{
            current_date->month += 1;
        }
        current_date->day = 1;
    }else{
        current_date->day = newDay;
    }
}
void output_date(struct date_rec *current_date){
    printf("当前日期：%d年%d月%d日！", current_date->year, current_date->month, current_date->day);
}

int main()
{
    input_date(&current_date);
    increment_date(&current_date);
    output_date(&current_date);
    return 0;
}