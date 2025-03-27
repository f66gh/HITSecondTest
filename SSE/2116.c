#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int arr[30];
    printf("Please enter scores:\n");
    for(int i = 0; i < 30; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 29; i++){
        for(int j = i + 1; j < 30; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted results:\n");
    for(int i = 0; i < 30; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
