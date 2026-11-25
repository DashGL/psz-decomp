// flags: -O4,p
typedef struct { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int FUN_02047440(void *);
extern int FUN_0204771c(void *);
extern void FUN_0207a120(int, void *, unsigned short, int, int);
extern void FUN_02035408(Vec *, int, int, int);
int FUN_0207a5dc(unsigned char *s) {
    int result = FUN_02047440(s);
    if (result == 0 && FUN_0204771c(s) != 0) {
        
        Vec p;
        int idx;
        int speed;
        int dx, dz;
        if (*(int *)(s + 0x10c) == 0) {
            FUN_0207a120(*(int *)(s + 0xe8), s + 0x5c, *(unsigned short *)(s + 0x11e), *(int *)(s + 0x104), *(int *)(s + 0x108));
            *(int *)(s + 0x10c) = 1;
        }
        idx = (*(unsigned short *)(s + 0x11e) >> 4) * 2;
        speed = *(int *)(s + 0x110);
        dx = (DAT_020ed83c[idx] * speed) >> 12;
        dz = (DAT_020ed83c[idx + 1] * speed) >> 12;
        FUN_02035408(&p, dx + *(int *)(s + 0x5c), *(int *)(s + 0x60), dz + *(int *)(s + 0x64));
        *(Vec *)(s + 0x5c) = p;
    
    }
    return result;
}
