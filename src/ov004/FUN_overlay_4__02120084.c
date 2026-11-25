// flags: -O4,s
typedef struct { unsigned char b[4]; } Key_0084;
extern unsigned int FUN_overlay_4__0211ffbc(void *, int);
extern unsigned int FUN_020849d4(void *);
extern char *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern int FUN_020b04f4(void *, const void *);
extern void *FUN_020b00d0(void *, int);
enum { E0 = 0, E1 = 1 };

unsigned int FUN_overlay_4__02120084(void *self, int id) {
    unsigned int value = FUN_overlay_4__0211ffbc(self, id);
    unsigned int check;
    Key_0084 key, temporary;
    int slot;
    temporary.b[0] = (unsigned char)value;
    value >>= 8;
    temporary.b[1] = (unsigned char)value;
    value >>= 8;
    temporary.b[2] = (unsigned char)value;
    value >>= 8;
    temporary.b[3] = (unsigned char)value;
    key = temporary;
    check = ((unsigned int)key.b[0] << 24) | ((unsigned int)key.b[1] << 16) | ((unsigned int)key.b[2] << 8) | key.b[3];
    if (((check == 0xffffffffU) ? E1 : E0) == 0 && FUN_02087138(FUN_02086e3c())) {
        slot = FUN_020b04f4(FUN_02086e3c() + 16, &key);
        if (slot > -1) return FUN_020849d4(FUN_020b00d0(FUN_02086e3c() + 16, slot));
    }
    return 0;
}
