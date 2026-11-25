// flags: -O4,s
extern char DAT_020fc68c[];
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020c2624(void *, void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
extern void FUN_020ba8ac(void *);
extern void *FUN_020c1fc8(void);
#pragma thumb off
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
extern void FUN_0206557c(int, void *, unsigned int);
#pragma thumb on

void *FUN_020b2120(char *s) {
    unsigned int size;
    *(void **)s = DAT_020fc68c;
    FUN_020c38f0(s + 28, 0);
    FUN_020c3588(s + 28);
    if (*(int *)(s + 24) != -1) {
        FUN_020c2624(FUN_020c1fc8(), s + 24);
    }
    size = ((volatile unsigned int *)*(void **)(s + 20))[20];
    FUN_0206557c(0, FUN_0205e260(), size);
    size = ((volatile unsigned int *)*(void **)(s + 20))[21];
    FUN_0206557c(0, FUN_0205e464(), size);
    FUN_020c3578(s + 28);
    FUN_020c2b68(s + 20);
    FUN_020ba8ac(s);
    return s;
}
