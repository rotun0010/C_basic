#include <stdio.h>
#include <stdint.h>

#define BIT_SET(var,pos) ((var) |= (1UL<<(pos)))
#define BIT_CLEAR(var, pos) ((var) &= ~(1UL<<(pos)))
#define BIT_TOGGLE(var, pos) ((var) ^= (1UL<<(pos)))
#define BIT_CHECK(var, pos) (!!((var) & (1UL<<(pos))))

void printBinary(uint32_t n);
void print(uint32_t data);

int main(int argc, char const *argv[])
{
    uint32_t data = 0x12345678;
    print(data);

    BIT_SET(data, 0);
    print(data);

    BIT_CLEAR(data, 4);
    print(data);

    BIT_TOGGLE(data, 3);
    print(data);

    printf("Bit %d is currently: %d", 3, BIT_CHECK(data, 3));

    return 0;
}

void printBinary(uint32_t n) {
    // 32비트 정수 기준 (64비트는 sizeof(n) * 8 및 long long 사용)
    int size = sizeof(n) * 8;
    for (int i = size - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 0) printf(" "); // 4자리씩 끊어서 보기 쉽게 출력
    }
    printf("\n");
}

void print(uint32_t data){
    printf("Hex: 0x%x | Bin: ", data);
    printBinary(data);
}