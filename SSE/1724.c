#include<stdio.h>

int main(){
    int arr[5][5] = {{17,24,1,8,15},
        {23,5,7,14,16},
        {4,6,13,20,22},
        {10,12,19,21,3},
        {11,18,25,2,9}};

    int sum = 0;
    for(int i = 0; i < 5; i++) sum += arr[0][i];

    for(int i = 0; i < 5; i++){
        int currSum = 0;
        for(int j = 0; j < 5; j++){
            currSum += arr[i][j];
        }
        if(currSum != sum) return 0;
        currSum = 0;
    }

    for(int i = 0; i < 5; i++){
        int currSum = 0;
        for(int j = 0; j < 5; j++){
            currSum += arr[j][i];
        }
        if(currSum != sum) return 0;
        currSum = 0;
    }

    int currSum = 0;
    for(int i = 0; i < 5; i++) currSum += arr[i][i];
    if(currSum != sum) return 0;

    printf("It is a magic square!\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d", arr[i][j]);
        }
        if(i != 4) printf("\n");
    }
    return 0;
}