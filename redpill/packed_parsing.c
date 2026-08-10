#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t rgb = 0;
    printf("Input: ");
    scanf("%x", &rgb);

    uint32_t r = 0;
    uint32_t g = 0;
    uint32_t b = 0;

    r = (rgb >> 11) & 0x001F;
    g = (rgb >> 5) & 0x003F;
    b = rgb & 0x001F;

    printf("[Raw Value] R: %d (0x%X), G: %d (0x%X), B: %d (0x%X)\n", r, r, g, g, b, b);
    
    r = r << 3;
    g = g << 2;
    b = b << 3;

    printf("[8-bit Ext] R: %d,       G: %d,       B: %d", r, g, b);
    
    return 0;
}

// #include <stdio.h>
// #include <stdint.h>

// #define MASK_RED   0xF800   //1111 1000 0000 0000 => 0001 1111 => 1111 1000
// #define MASK_GREEN 0x07E0
// #define MASK_BLUE  0x001F
// void parse_rgb565(uint16_t pixel){
//     uint8_t r_raw = (pixel & MASK_RED) >> 11;
//     uint8_t g_raw = (pixel & MASK_GREEN) >> 5;
//     uint8_t b_raw = (pixel & MASK_BLUE);

//     uint8_t r8 = (r_raw <<3);
//     uint8_t g8 = (g_raw <<2);
//     uint8_t b8 = (b_raw <<3);

//     printf("Input : 0x%04X\r\n", pixel);
//     printf("[Raw Value] R : %2d (0x%02X), G : %2d (0x%02X), B : %2d (0x%02X)\r\n",
//         r_raw, r_raw , g_raw, g_raw, b_raw, b_raw );
//     printf("[8-bit Ext] R: %3d , G: %3d, B: : %3d\r\n", r8,g8,b8);
// }

// int main(int argc, char const *argv[])
// {
//     printf("=== Day 3: Packed Data Parsing (RGB565) ===\r\n");
//     parse_rgb565(0xFFFF);
//     parse_rgb565(0xF000);
//     parse_rgb565(0x07E0);
//     parse_rgb565(0x1234);
    
//     return 0;
// }
