#include<stdio.h>

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int a, b, c;
    printf("please input 3 number x,y,z");
    scanf("%d,%d,%d", &a, &b, &c);
    int num[3] = {a,b,c};
    for(int i = 3; i > 0; i--){
        for(int j = 0; j < i - 1; j++){
            if(num[j] > num[j + 1]) swap(&num[j], &num[j+1]);
        }
    }
    printf("the sorted numbers are:%d,%d,%d\n",  num[0], num[1], num[2]);
    return 0;
}