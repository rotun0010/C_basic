#include <stdio.h>

void input_nums(int *lotto);
void print_nums(int *lotto, int len);

int main(int argc, char const *argv[])
{
    int lotto_nums[6] = {0}; // int *lotto_nums;
    int len = sizeof(lotto_nums) / sizeof(lotto_nums[0]);
    input_nums(lotto_nums);
    print_nums(lotto_nums, len);
    return 0;
}

void input_nums(int *lotto){
    int num = 0;
    int a = 0;
    for (int i = 0; i < 6; i++){
        printf("Press Number: ");
        scanf("%d", &num);
        a = 0;
        for (int j = 0; j < i; j++){
            if (num == lotto[j]){
                a = 1;
                break;
            }
        }
        if (!a)
            lotto[i] = num;
        else{
            printf("Same Number Exists\n");
            i--;
        }
    }
}

void print_nums(int *lotto, int len){
    for (int i = 0; i < len; i++){
        printf("%d\n", lotto[i]);
    }
}