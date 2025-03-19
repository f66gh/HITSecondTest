#include<stdio.h>
#define MAX 40

int compute_sum(int subject[], int length){
    int result = 0;
    for(int i = 0; i < length; i++){
        result += subject[i];
    }
    return result;
}

float compute_ave(int subject[], int length){
    return (float) compute_sum(subject, length) / length;
}

int main(){
    int num;
    long ID[MAX];
    int MT[MAX], EN[MAX], PH[MAX];

    printf("Input the total number of the students(n<40):");
    scanf("%d", &num);
    printf("Input student’s ID and score as: MT  EN  PH:\n");
    for(int i = 0; i < num; i++){
        scanf("%ld %d %d %d", &ID[i], &MT[i], &EN[i], &PH[i]);
    }
    
    printf("Counting Result:\n");
    printf("Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for(int i = 0; i < num; i++){
        int SUM = MT[i] + EN[i] + PH[i];
        float AVER = (float) SUM / 3;
        printf("%12ld\t%4d\t%4d\t%4d\t%4d\t%5.1f\n", ID[i], MT[i], EN[i], PH[i], SUM, AVER);
    }
    printf("SumofCourse \t%4d\t%4d\t%4d\t", compute_sum(MT, num), compute_sum(EN, num), compute_sum(PH, num));
    printf("\nAverofCourse\t%4.1f\t%4.1f\t%4.1f\t", compute_ave(MT, num), compute_ave(EN, num), compute_ave(PH, num));
    return 0;
}