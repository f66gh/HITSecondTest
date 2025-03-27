#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sushu(int *fRow, int *num);
void compute(int *fRow, int len);

int main() {
    int fRow[2000]; // 存储所有不超过2000的素数
    int num = 0;

    sushu(fRow, &num);
    printf("There are follwing primes in first row :\n");
    compute(fRow, num);

    return 0;
}

// 生成素数数组（修正版）
void sushu(int *fRow, int *num) {
    fRow[0] = 2;
    *num = 1;
    // 只检查奇数，步长2
    for (int i = 3; i < 2000; i += 2) {
        int isPrime = 1;
        // 优化判断条件：j*j <= i
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            fRow[*num] = i;
            (*num)++;
        }
    }
}

// 直接查找符合条件的素数对（核心修正）
void compute(int *fRow, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        int p = fRow[i];
        int q = p + 1898;

        // 跳过超过范围的数
        if (q >= 2000) continue;

        // 二分查找q是否在素数表中
        int left = i + 1;
        int right = len - 1;
        int found = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (fRow[mid] == q) {
                found = 1;
                break;
            } else if (fRow[mid] < q) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (found) {
            count++;
            // 格式化输出，注意逗号位置
            printf("(%d).%3d,......,%d\n", count, p, q);
        }
    }
}
