#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Res{
    int id;
    char name[10];
    int accessCount;
};

void Input_Res(struct Res* resArr, int i);
void Sort_Res(struct Res* resArr, int n);
void Output_Res(struct Res* resArr, int n);

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    struct Res resArr[n];
    for(int i = 0; i < n; i++){
        Input_Res(resArr, i);
    }
    Sort_Res(resArr, n);
    Output_Res(resArr, n);
    return 0;
}

void Input_Res(struct Res* resArr, int i){
    //resArr[i] = (struct Res*)malloc(sizeof(struct Res));
    // 只有new一个指针才需要malloc
    scanf("%d %d", &resArr[i].id, &resArr[i].accessCount);
    getchar();
    fgets(resArr[i].name, 10, stdin);
    resArr[i].name[strlen(resArr[i].name) - 1] = '\0';
}

void Sort_Res(struct Res* resArr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(resArr[i].accessCount < resArr[j].accessCount){
                struct Res temp = resArr[i];
                resArr[i] = resArr[j];
                resArr[j] = temp;
            }
        }
    }
}

void Output_Res(struct Res* resArr, int n){
    for(int i = 0; i < n; i++){
        printf("%d, %s, %d", resArr[i].id, resArr[i].name, resArr[i].accessCount);
    }
}