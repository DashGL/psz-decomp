// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, int *);
extern void FUN_020c212c(void *, int);
#pragma thumb off
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
extern void FUN_0206557c(int, void *, unsigned int);
#pragma thumb on
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
extern void *DAT_02122c50;
void *FUN_overlay_10__021207a8(int *p) {
    unsigned int size;
    p[0] = (int)&DAT_02122c50;
    FUN_020c38f0(p + 3, 0);
    FUN_020c3588(p + 3);
    if (p[2] != -1) {
        FUN_020c2624(FUN_020c1fc8(), p + 2);
    }
    size = ((volatile unsigned int *)p[1])[20];
    FUN_0206557c(0, FUN_0205e260(), size);
    size = ((volatile unsigned int *)p[1])[21];
    FUN_0206557c(0, FUN_0205e464(), size);
    FUN_020c212c(FUN_020c1fc8(), 2);
    FUN_020c3578(p + 3);
    FUN_020c2b68(p + 1);
    return p;
}
