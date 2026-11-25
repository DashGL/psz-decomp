// flags: -O4,p
typedef struct { unsigned short a; unsigned short pad : 10; unsigned short cat : 3; } Item;
extern int DAT_020f474c;
extern Item *FUN_020845a8(void *);
extern signed char FUN_0209c2c8(void *, int);
void FUN_0209c28c(void *self, unsigned int *desc) {
    Item *p = FUN_020845a8(desc);
    if (p) {
        int value = (unsigned char)FUN_0209c2c8(&DAT_020f474c, p->cat);
        if (value > 4) value = 4;
        desc[1] = (desc[1] & 0xfe3fffff) | (value << 22);
    }
}
