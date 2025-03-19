#include<stdio.h>

int main(){
    int arrA[2][3] = {{1,2,3}, {4,5,6}};
    int arrB[3][2] = {{1,1}, {0,2}, {2,0}};
    int arrC[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            int temp = 0;
            for(int k = 0; k < 3; k++){
                temp += arrA[i][k] * arrB[k][j];
            }
            arrC[i][j] = temp;
        }
    }

    printf("array A=\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("\t%d", arrA[i][j]);
        }
        printf("\n");
    }
    printf("array B=\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("\t%d", arrB[i][j]);
        }
        printf("\n");
    }
    printf("array C=\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("\t%d", arrC[i][j]);
        }
        printf("\n");
    }
    return 0;
}