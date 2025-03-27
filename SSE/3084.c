#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void sort_func(int *arr, int len){

    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }

}
int main()
{
    int inputArr[10];
    printf("Input 10 numbers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &inputArr[i]);
    }
    sort_func(inputArr, 10);
    int evenArr[10];
    int oddArr[10];
    int eLen = 0, oLen = 0;
    for(int i = 0; i < 10; i++){
        if(inputArr[i] % 2 == 0){
            evenArr[eLen++] = inputArr[i];
        }else {
            oddArr[oLen++] = inputArr[i];
        }
    }
    printf("Output: ");
    int len = 10;
    for(int i = 0; i < oLen; i++){
        len--;
        if(len == 0){
            printf("%d\n", oddArr[i]);
        }else{
            printf("%d,", oddArr[i]);
        }
    }
    for(int i = 0; i < eLen; i++){
        len--;
        if(len == 0){
            printf("%d\n", evenArr[i]);
        }else{
            printf("%d,", evenArr[i]);
        }
    }
    return 0;
}
