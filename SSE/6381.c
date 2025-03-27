#include<stdio.h>
#include<math.h>

float Integral(float (*f)(float), float a, float b);
float f1(float x);
float f2(float x);

int main(){
    float x = Integral(f1, 0, 1);
    float y = Integral(f2, 0, 3);
    printf("y1=%.2f\ny2=%.2f\n", x, y);
    return 0;
}

float Integral(float (*f)(float), float a, float b){
    int n = 100;
    float len = b-a;
    float high = len / 100;
    float sum = 0;
    for(int i = 0; i < n; i++){
        float curr = (float) i / n;
        float start = curr * len +a;
        float low = f(start);
        float up = f(start + high);
        sum += (low + up) * high / 2;
    }
    return sum;
}

float f1(float x){
    return 1 + pow(x, 2);
}

float f2(float x){
    return x / (1 + pow(x, 2));
}
