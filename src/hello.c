#include <stdio.h>

int x = 0;

int y(int x){
    return x * 2;
}

int main(int a, int b){
    int c = 100;
    char d = 'a';
    char e[] = "abcde\0";
    float f = 1.0;
    double g = 1.0;
    printf("%s\n", e);
    printf("%d\n", y(2));

    return 0;
}