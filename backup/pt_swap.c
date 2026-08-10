#include <stdio.h>

void swap(float*, float*);

int main(int argc, char const *argv[])
{
    float arr[3] = {};
    printf("실수값 3개 입력: \n");
    for (int i = 0; i < 3; i++){
        scanf("%f", &arr[i]);
    }

    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 2; i++){
            if (arr[i] < arr[i + 1])
                swap(&arr[i], &arr[i + 1]);
        }
    }
    
    printf("정렬된 값 출력: ");
    for (int i = 0; i < 3; i++){
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(float* pa, float *pb){
    float tmp;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}