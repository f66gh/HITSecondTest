#include<stdio.h>
int is_leap_year(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 ==0){
        return 1;
    }
    return 0;
}

int compute_day(int year, int month, int day){
    int sumDay = 0;
    int monthArr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(year < 1990) return 0;
    for(int i = 1990; i < year; i++){
        if(is_leap_year(i)) sumDay += 366;
        else sumDay += 365;
    }

    if(month < 1 || month > 12) return 0;
    if(is_leap_year(year)) monthArr[1] = 29;
    for(int i = 0; i < month - 1; i++){
        sumDay += monthArr[i];
    }

    if(day < 1 || day > monthArr[month - 1]) return 0;
    sumDay += day;

    return sumDay;
}

int is_work(int year, int month, int day){
    int sumDay = compute_day(year, month, day);
    if(sumDay == 0) return 0;
    int temp = sumDay % 5;
    if(temp > 0 && temp < 4) {
        printf("He is working");
    }else{
        printf("He is having a res");
    }
    return 1;
}


int main(){
    int year, month, day;
    int ret = scanf("%4d-%2d-%2d", &year, &month, &day);
    if(ret != 3){
        printf("Invalid input");
        return 0;
    }
    if(is_work(year, month, day) == 0){
        printf("Invalid input");
        return 0;
    }
    return 0;
}
