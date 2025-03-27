#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int a = 'a';
    int A = 'A';
    int arr[26];
    for(int i = 0; i < 26; i++) arr[i] = 0;
    int curr = getchar();
    while(curr != '\n'){
        int low = curr - 'a', high = curr - 'A';
        if(low >= 0 && low <= 25) arr[low]++;
        if(high >= 0 && high <= 25) arr[high]++;
        curr = getchar();
    }
    for(int i = 0; i < 26; i++){
        printf("%c(%c):%d\n", 'A'+ i, 'a' + i, arr[i]);
    }
    return 0;
}


