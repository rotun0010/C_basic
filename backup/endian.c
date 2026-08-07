#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool is_little_endian();
uint32_t swap_endian(uint32_t val);

int main(int argc, char const *argv[])
{
    uint32_t network_data = 0x12345678;
    printf("Received Data (Hex): 0x%x\r\n", network_data);

    if (is_little_endian()){
        printf("[System Check] This system is Little Endian\r\n");
        printf("-> Need to swap bytes to match Host Order.\r\n");
        uint32_t host_data = swap_endian(network_data);

        printf("Original (Network): 0x%x\r\n", network_data);
        printf("Converted (Host): 0x%x\r\n", host_data);

        uint8_t* ptr = (uint8_t*)&host_data;
        printf("Memory Dump: [%02x] [%02x] [%02x] [%02x] (Low Addr -> High Addr)\r\n",
                ptr[0], ptr[1], ptr[2], ptr[3]);

    }
    return 0;
}

bool is_little_endian(){
    uint32_t num = 0x01;
    uint8_t* ptr = (uint8_t*)&num;
    if (ptr[0] == 1)
        return true;
    return false;
}

uint32_t swap_endian(uint32_t val){
    return ((val>>24) & 0x000000FF |
            (val>>8) & 0x000FF00 |
            (val<<8) & 0x00FF0000 |
            (val<<24) & 0xFF000000);
}