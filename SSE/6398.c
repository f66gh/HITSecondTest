#include<stdio.h>

void roll(int *arr){
    int last = arr[5];
    for(int i = 5; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main(){
    int arr[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%d", arr[j]);
        }
        printf("\n");
        roll(arr);
    }
}
