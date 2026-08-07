#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    int pn_counter = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d", &count);

    if (count == 2){
        printf("%5d", count);
        printf("found number: %d", count);
        return 0;
    }

    for (int i = 3; i < count; i += 2)
    {
        int pn = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                pn = 0;
                break;
            }
        }
        if (pn){
            printf("%5d", i);
            pn_counter++;
            if(pn_counter % 5 == 0)
                printf("\n");
        }
    }
    printf("\n소수 개수: %d", pn_counter);
    return 0;
}
