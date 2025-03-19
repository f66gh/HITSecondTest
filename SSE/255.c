#include<stdio.h>

int main(){
    int maxIndex = 0, minIndex = 0, n;
    printf("Input n(n<=10):");
    scanf("%d", &n);
    printf("Input %d numbers:", n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }else if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    arr[maxIndex] = min;
    arr[minIndex] = max;

    printf("Exchange results:");
    for(int i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}