#include <stdio.h>

void swap(int *a, int *b);

void main(){
    int a = 1;
    int b = 2;

    swap(&a, &b);

    printf("a: %d, b: %d", a, b);
    return 0;
}

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
    return 0;
}