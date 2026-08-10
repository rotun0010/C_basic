#include <stdio.h>
#include <stdint.h>

uint32_t bit_reversing(uint32_t n);

int main(){    
    bit_reversing(0xD2);
    bit_reversing(0x0F);
    bit_reversing(0xAA);
    bit_reversing(0x12);

    return 0;
}

uint32_t bit_reversing(uint32_t n){
    printf("Input : 0x%02X (", n);
    for (int i = 7; i >= 0; i--){
        printf("%d", (n >> i) & 1);
        if (i == 4) printf(" ");
    }
    printf(")\n");

    n = ((n >> 1) & 0x55) | ((n & 0x55) << 1); 
    n = ((n >> 2) & 0x33) | ((n & 0x33) << 2); 
    n = ((n >> 4) & 0x0F) | ((n & 0x0F) << 4);

    printf("Output: 0x%02X (", n);
    for (int i = 7; i >= 0; i--){
        printf("%d", (n >> i) & 1);
        if (i == 4) printf(" ");
    }
    printf(")\n");
    printf("-------------------------\n");

    return 0;
}