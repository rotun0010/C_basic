#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    char op;
    printf("write equation: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op){ // 조건을 찾아 들어간 후 이후 코드 이어서 진행
        case '+':
            printf("%d %c %d = %d", a, op, b, a + b);
            break;

        case '-':
            printf("%d %c %d = %d", a, op, b, a - b);
            break;
        case '*':
            printf("%d %c %d = %d", a, op, b, a * b);
            break;

        case '/':
            if (b == 0)
                printf("Can't divide by zero.");
            else
                printf("%d %c %d = %f", a, op, b, a / (float)b);
            break;
    }

    // if (op == '*')
    //     printf("%d %c %d = %d", a, op, b, a * b);
    // else if (op == '+')
    //     printf("%d %c %d = %d", a, op, b, a + b);
    // else if (op == '-')
    //     printf("%d %c %d = %d", a, op, b, a - b);
    // else if (op == '/'){
    //     if (b == 0)
    //         printf("Can't divide by zero.");
    //     else
    //         printf("%d %c %d = %d", a, op, b, a / b);
    // }
            
    return 0;
}