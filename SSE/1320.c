#include<stdio.h>
#include<math.h>
float compute_stu_ave(float gradeArr[][5], int std){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += gradeArr[std][i];
    }
    return (float) sum / 5;
}

float compute_class_ave(float gradeArr[][5], int class){
    int sum = 0;
    for(int i = 0; i < 2; i++){
        sum += gradeArr[i][class];
    }
    return (float) sum / 2;
}

float find_stu_class_max(float gradeArr[][5], int *pStu, int *pClass){
    *pStu = 0, *pClass = 0;
    int max = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            if(max < gradeArr[i][j]){
                max = gradeArr[i][j];
                *pStu = i;
                *pClass = j;
            }
        }
    }
    return max;
}

float compute_var(float gradeArr[][5]){
    float x1 = compute_stu_ave(gradeArr, 0);
    float x2 = compute_stu_ave(gradeArr, 1);
    return (float) 1 / 2 * (pow(x1, 2) + pow(x2, 2)) - pow((float)(x1 + x2) / 2, 2);
}

int main(){
    float gradeArr[2][5];
    for(int i = 1; i <= 2; i++){
        printf("\n输入学生%4d的5个成绩：\n", i);
        scanf("%f %f %f %f %f", &gradeArr[i - 1][0], &gradeArr[i - 1][1], &gradeArr[i - 1][2], &gradeArr[i - 1][3], &gradeArr[i - 1][4]);
    }
    
    printf("\n 序号     课程1     2     3     4     5     平均分\n");
    for(int i = 0; i < 2; i++){
        printf("\n NO%2d", i + 1);
        for(int j = 0; j < 5; j++){
            printf("%8.2f", gradeArr[i][j]);
        }
        printf("%8.2f", compute_stu_ave(gradeArr, i));
        
    }

    printf("\n课平均");
    for(int i = 0; i < 5; i++)
        printf("%8.2f", compute_class_ave(gradeArr, i));
    
    int stu, class;
    float max = find_stu_class_max(gradeArr, &stu, &class);
    printf("\n\n最高分%8.2f是%d号学生的第%d门课\n", max, stu + 1, class + 1);

    printf("\n方差 %8.2f", compute_var(gradeArr));
    return 0;
}