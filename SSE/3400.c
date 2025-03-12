# include<stdio.h>
#define max 40

float aver(int score[], int n);
int main(){
    int n, score[max], hn = 0;
    double ave;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }
    ave = aver(score, n);
    printf("Average score is %10.2f\n", ave);
    for(int i = 0; i < n; i++){
        if(score[i] > ave){
            hn++;
        }
    }
    printf("The number of students in more than average %d", hn);
    return 0;
}

float aver(int score[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += score[i];
    }
    return sum / n;
}