#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char num[10];
    int n;
    while(1){
        printf("输入十六进制数：\n");
        scanf("%s", num);
        getchar();
        int len = strlen(num);
        n=0;
        for(int i = 0; i < len; i++){
            if(num[i] <= '9' && num[i] >= '0')
                n += (num[i] - '0') * pow(16, len - i - 1);
            else if(num[i] <= 'f' && num[i] >= 'a')
                n += (num[i] - 'a' + 10) * pow(16, len - i - 1);
        }
        printf("十进制数%d\n", n);
        printf("继续吗？\n");
        char c = getchar();
        getchar();
        if(c != 'y') break;
    }
    return 0;
}