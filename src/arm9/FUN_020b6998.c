// flags: -O4,s
typedef struct { unsigned char b[4]; } Bytes;
typedef struct {
    unsigned char pad0[6];
    signed char mod;
    unsigned char pad1;
    unsigned short kind : 6;
    unsigned short pad2 : 10;
} Info;
extern int FUN_0203a1fc(void *);
extern Info *FUN_02084568(Bytes *);
extern int FUN_020848e0(int, int);

int FUN_020b6998(void *unused, Bytes *item) {
    if (!FUN_0203a1fc(item)) {
        Bytes desc = *item;
        Info *p = FUN_02084568(&desc);
        if (p) {
            int k = p->kind;
            if (k == 3) {
                return FUN_020848e0(k, p->mod);
            }
        }
    }
    return 0;
}
