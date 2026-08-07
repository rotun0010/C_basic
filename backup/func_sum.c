#include <stdio.h>

int sum(int n){
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int input = 0;
    printf("Press Number: ");
    scanf("%d", &input);
    int res = sum(input);
    printf("%d", res);
    return 0;
}
