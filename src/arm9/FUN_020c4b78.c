// flags: -O4,s
#pragma thumb off
extern void FUN_020656b8(void *, unsigned int, unsigned int);
#pragma thumb reset

extern void *FUN_020ba894(unsigned int);
extern void FUN_020c4434(void *);
extern void FUN_020c4560(void *);
extern void FUN_020ba8ac(void *);
extern int FUN_020c4a88(int, void *);

int FUN_020c4b78(void)
{
    int result;
    unsigned char *p, *end;
    unsigned char *data = FUN_020ba894(0x1458);
    if (data) {
        *(unsigned short *)(data + 4) = 0;
        *(unsigned short *)(data + 0x16) = 0;
        p = data + 0x358;
        end = data + 0x1058;
        do {
            *(unsigned short *)(p + 16) = 0;
            *(unsigned short *)(p + 34) = 0;
            FUN_020c4434(p + 36);
            p[0] = 0;
            p[1] = 0;
            p[2] = 0;
            p[3] = 0;
            *(unsigned short *)(p + 4) = 0;
            *(unsigned short *)(p + 6) = 0;
            *(unsigned int *)(p + 8) = 0;
            *(unsigned int *)(p + 12) = 0;
            *(unsigned short *)(p + 16) = 0;
            *(unsigned short *)(p + 34) = 0;
            FUN_020c4560(p + 36);
            p += 52;
        } while (p < end);
    }
    FUN_020656b8(data, 0, 0x1458);
    result = FUN_020c4a88(0, data);
    if (result == 1) result = FUN_020c4a88(1, data);
    FUN_020ba8ac(data);
    return result;
}
