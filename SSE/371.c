#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    char *str = (char *)malloc(10 * sizeof(char));
    char *week_day[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    printf("Enter a string:");
    fgets(str, 10, stdin);
    int len = strlen(str);
    str[len - 1] = '\0';
    for(int i = 0; i < 7; i++){
        if(strcmp(week_day[i], str) == 0){
            printf("l=%d\n", i);
            return 0;
        }
    }
    return 0;
}
