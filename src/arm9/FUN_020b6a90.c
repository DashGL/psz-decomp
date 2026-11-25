// flags: -O4,s
typedef struct { unsigned char b[4]; } Bytes;
typedef struct { unsigned short a; unsigned short val:10, rest:6; } Rec;
extern Rec *FUN_020845a8(void *);
int FUN_020b6a90(void *unused, unsigned char *item) {
    int result = 0;
    if (item[0] == 1) {
        Bytes desc = *(Bytes *)item;
        Rec *p = FUN_020845a8(&desc);
        if (p) {
            result += p->val;
            result += (unsigned char)(((*(int *)(item + 4) & (int)0xfe000000u) >> 25) << 1);
        }
    }
    return result;
}
