typedef unsigned int u32;
#pragma thumb off
extern int FUN_02000ec4(int);
#pragma thumb on
int FUN_020d554c(unsigned char *p) {
    int a, b;
    *(u32 *)(p + 0x8c) = 6;
    *(u32 *)(p + 0x88) = 4;
    *(u32 *)(p + 0xd4) = 1;
    if (!*(u32 *)(p + 0x9c) || !*(u32 *)(p + 0xac) || !*(u32 *)(p + 0xbc)) return 0;
    b = *(int *)(p + 0x84);
    if (!b && !*(int *)(p + 0x80) && *(u32 *)(p + 0x9c) == *(u32 *)(p + 0x94))
        *(u32 *)(p + 0x8c) = 0;
    else if (*(u32 *)(p + 0x9c) == *(u32 *)(p + 0x94))
        *(u32 *)(p + 0x8c) = 1;
    else {
        a = *(int *)(p + 0x80);
        if (!a && !b && FUN_02000ec4((int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0)) >= 1) {
            *(u32 *)(p + 0x8c) = 5;
            *(u32 *)(p + 0x88) = 0;
        } else if (a && !b && FUN_02000ec4((int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0)) >= 1) {
            *(u32 *)(p + 0x8c) = 5;
            *(u32 *)(p + 0x88) = 2;
        } else if (!a && b && FUN_02000ec4((int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0)) >= 1) {
            *(u32 *)(p + 0x8c) = 5;
            *(u32 *)(p + 0x88) = 3;
        } else if (a && b && FUN_02000ec4((int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0)) >= 1) {
            *(u32 *)(p + 0x8c) = 5;
            *(u32 *)(p + 0x88) = 1;
        } else if (b)
            *(u32 *)(p + 0x8c) = 4;
        else if (a && !b)
            *(u32 *)(p + 0x8c) = 3;
        else if (!a && !b)
            *(u32 *)(p + 0x8c) = 2;
        else
            *(u32 *)(p + 0x8c) = 6;
    }
    if (*(unsigned short *)(p + 0xa0) == *(unsigned short *)(p + 0x98) &&
        *(unsigned short *)(p + 0xb0) == *(unsigned short *)(p + 0xa8) &&
        *(unsigned short *)(p + 0xc0) == *(unsigned short *)(p + 0xb8))
        *(u32 *)(p + 0x90) = 1;
    else if (*(unsigned short *)(p + 0xa0) == *(unsigned short *)(p + 0xb0) &&
             *(unsigned short *)(p + 0xb0) == *(unsigned short *)(p + 0xc0))
        *(u32 *)(p + 0x90) = 2;
    else if (*(unsigned short *)(p + 0xa0) == *(unsigned short *)(p + 0x98) &&
             (int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0) == 1)
        *(u32 *)(p + 0x90) = 4;
    else if ((int)*(unsigned short *)(p + 0xc0) - (int)*(unsigned short *)(p + 0xb0) == 1)
        *(u32 *)(p + 0x90) = 3;
    else
        *(u32 *)(p + 0x90) = 0;
    if (*(unsigned short *)(p + 0xd0) && *(unsigned short *)(p + 0xa0) != *(unsigned short *)(p + 0xd0))
        *(u32 *)(p + 0xd4) = 0;
    return 1;
}
