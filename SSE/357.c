#include<stdio.h>

int main(){
    int n, sum = 0, flag = 1;
    int arr[5][7];
    for(int i = 0; i < 5; i++){
        printf("Enter No. and score as: MT EN PH\n");
        scanf("%d", &arr[i][0]);
        for(int j = 1; j < 4; j++){
            scanf("%d", &n);
            sum += n;
            if(n < 90) flag = 0;
            arr[i][j] = n;
        }
        arr[i][4] = sum;
        arr[i][5] = sum / 3;
        arr[i][6] = flag;
        sum = 0;
        flag = 1;
    }
    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n------------------------------------------------------\n");
    char b;
    for(int i = 0; i < 5; i++){
        if(arr[i][6] == 1) b = 'Y';
        else b = 'N';
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], b);
    }
    return 0;
}