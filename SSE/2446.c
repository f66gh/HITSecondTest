#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char call_times(void);

int main()
{
    char a = call_times();
    char b = call_times();
    char c = call_times();
    printf("第一次调用返回字符%c!\n", a);
    printf("第二次调用返回字符%c!\n", b);
    printf("第三次调用返回字符%c!\n", c);
    return 0;
}

char call_times(){
    char static letter = 'A';
    char res = letter;
    letter++;
    return res;
}
