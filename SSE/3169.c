#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int people[n];
    int left = n;

    // 初始化所有人都在圈中
    for(int i = 0; i < n; i++) {
        people[i] = 1;
    }

    int index = 0;
    while(left > 1) {
        int steps = m;
        while(steps > 0) {
            if(people[index] == 1) { // 如果当前这个人没退出
                steps--;
            }
            if(steps > 0) { // 继续到下一个人
                index = (index + 1) % n;
            }
        }

        // 当前报到m的人退出圈子
        people[index] = 0;
        left--; // 圈中人数减少
    }

    // 输出最后一个留下来的人
    for(int i = 0; i < n; i++) {
        if(people[i] == 1) { // 找到最后一个没退出的人
            printf("%d\n", i + 1); // 输出该人的编号（1-based）
            break;
        }
    }

    return 0;
}
