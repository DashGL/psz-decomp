// flags: -O4,s
typedef struct {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char pad6[2];
    unsigned short lo : 6;
    unsigned short mid : 4;
    unsigned short hi : 6;
} Res;
extern char DAT_020f474c[];
extern Res *FUN_02084568(void *);
extern int FUN_0209c160(void *, int *, int), FUN_0209c21c(void *, int *), FUN_0209c260(void *, int, int), FUN_0209beac(int);
void FUN_0209c034(void *unused, unsigned *item, int mode) {
    Res *resource;
    int grade, mask, count, index;
    unsigned value;
    resource = FUN_02084568(item);
    if (!resource) return;
    grade = resource->b5 >> 5;
    value = resource->b5 & 31;
    if (value == 21) value = FUN_0209c160(DAT_020f474c, &grade, mode);
    item[2] = (item[2] & 0xfffc1fff) | ((unsigned char)value << 13);
    item[2] = (item[2] & 0xfffff1ff) | ((unsigned)grade << 9);
    mask = 0;
    count = FUN_0209c21c(DAT_020f474c, &mask);
    index = 0;
    while (mask) {
        if (mask & 1) {
            value = FUN_0209c260(DAT_020f474c, count, mode);
            switch (index + 1) {
                case 1: item[1] = (item[1] & 0xfe03ffff) | ((unsigned)(unsigned char)value << 18); break;
                case 2: item[1] = (item[1] & 0xfffc07ff) | ((unsigned)(unsigned char)value << 11); break;
                case 3: item[1] = (item[1] & 0xfffff80f) | ((unsigned)(unsigned char)value << 4); break;
                case 4: item[2] = (item[2] & 0x01ffffff) | ((unsigned)(unsigned char)value << 25); break;
                case 5: item[2] = (item[2] & 0xfe03ffff) | ((unsigned)(unsigned char)value << 18); break;
            }
        }
        index++;
        mask >>= 1;
    }
    value = resource->mid;
    if (value == 4) value = FUN_0209beac(4);
    item[1] = (item[1] & ~15u) | (value & 15);
}
