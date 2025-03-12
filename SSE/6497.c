#include<stdio.h>
#include<math.h>
void func(int N, int prime[], int *prime_count, int composite[], int *composite_count){
    for(int j = 2; j <= N; j++){
        int i = sqrt(j);
        int flag = 0;
        for(int k = 2; k <= i; k++){
            if(j % k == 0){
                composite[*composite_count] = j;
                (*composite_count)++;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            prime[*prime_count] = j;
            (*prime_count)++;
        }
    }
    printf("%d\n", *prime_count);
    for(int i = 0; i < *prime_count; i++){
        printf("%d ", prime[i]);
    }
    printf("\n");
    printf("%d\n", *composite_count);
    for(int i = 0; i < *composite_count; i++){
        printf("%d ", composite[i]);
    }
}

int main(){
    int N, prime[100], prime_count = 0, composite[100], composite_count = 0;
    printf("inputNum\n");
    scanf("%d", &N);
    while(N < 10 || N > 100){
        printf("Input error! Please input an integer N, 10<=N<=100.\n");
        scanf("%d", &N);
    }
    func(N, prime, &prime_count, composite, &composite_count);
    return 0;
}