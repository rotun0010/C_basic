#include <stdio.h>

long long sum(long long n){
    long long res = n * (n + 1) / 2;
    return res;
}

int main(int argc, char const *argv[])
{
    long long input = 0;
    printf("Press Number: ");
    scanf("%lld", &input);
    long long res = sum(input);
    printf("%I64d", res);
    return 0;
}
