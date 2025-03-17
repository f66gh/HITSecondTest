#include<stdio.h>

unsigned short ReadNumber(int num[]);
void SortNumberDescending(int num[], unsigned short n);
void PrintNumber(int num[], unsigned short n);
void SummingAveraging(int num[], unsigned short n, int *pSum, float *pAver);


int main(){
    int num[20], len, sum = 0;
    float aver = 0;
    len = ReadNumber(num);
    SortNumberDescending(num, len);
    PrintNumber(num, len);
    SummingAveraging(num, len, &sum, &aver);
    return 0;
}

unsigned short ReadNumber(int num[]){
    printf("Input Numbers:\n");
    int len = 0, n;
    for(int i = 0; i < 21; i++){
        scanf("%d", &n);
        if(n == -1) break;
        num[i] = n;
        len++;
    }
    return len;
}

void SortNumberDescending(int num[], unsigned short n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i - 1; j++){
            if(num[j] < num[j + 1]){
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    return;
}

void SummingAveraging(int num[], unsigned short n, int *pSum, float *pAver){
    for(int i = 0; i < n; i++) *pSum += num[i];
    *pAver = (float)*pSum / n; 
    printf("\nSum=%d,Aver=%.2f\n", *pSum, *pAver);
    return;
}

void  PrintNumber(int num[], unsigned short n){
    printf("\nSort in descending order:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", num[i]);
    }
    return;
}