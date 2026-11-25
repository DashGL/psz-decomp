typedef struct { unsigned int x, y, z; } Vector;
extern int FUN_02085880(unsigned int);
extern void FUN_0203666c(void *);
extern void FUN_020345f0(Vector *, void *);
extern void *FUN_02046d94(void *, int, int);
int FUN_0203ba5c(char *s, int index, int enabled, int mode) {
    unsigned int record[25];
    Vector v;
    int ret = 0;
    if (index >= 0) {
        if (mode == 1) {
            *(unsigned int *)(s + 0xf8) |= 0x200000;
        } else {
            *(unsigned int *)(s + 0xf8) |= 4;
        }
        if (enabled && FUN_02085880(*(unsigned int *)(s + 0xfc))) {
            FUN_0203666c(record);
            FUN_020345f0(&v, s + 0x9c);
            *(Vector *)((char *)record + 0x20) = v;
            *(unsigned short *)((char *)record + 0x3a) = *(unsigned short *)(s + 0xc0);
            record[22] = *(unsigned int *)(s + 0xfc);
            record[21] = 29;
            FUN_02046d94(record, 0, 4);
        }
        ret = 1;
    }
    return ret;
}
