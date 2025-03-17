#include<stdio.h>

int is_leap_year(int y){
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int is_valid_date(int y, int m, int d){
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(is_leap_year(y)) month[1] = 29;
    if(y < 1990 || m < 1 || m > 12) return 0;
    if(d > month[m - 1] || d < 1) return 0;
    return 1;
}

int compute_day(int y, int m, int d){
    int day = 0;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 1990; i < y; i++){
        day += is_leap_year(i) ? 366 : 365;
    }
    if(is_leap_year(y)) month[1] = 29;
    for(int i = 0; i < m - 1; i++) day += month[i];
    return day + d;
}

void is_work(int y, int m, int d){
    if(!is_valid_date(y, m, d)){
        printf("Invalid input.");
        return;
    }
    int ret = compute_day(y, m ,d) % 5;
    if(ret <= 3 && ret >= 1) printf("He is working.");
    else printf("He is having a rest.");
    return;
}

int main(){
    int y, m, d;
    int ret = scanf("%4d-%2d-%2d", &y, &m, &d);
    if(ret != 3) {
        printf("Invalid input.");
        return 0;
    }
    is_work(y, m ,d);
    return 0;
}