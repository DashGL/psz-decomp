// flags: -O4,s
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, int *);
extern void FUN_020c212c(void *, int);
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
extern void FUN_0206557c(int, void *, unsigned int);
extern void FUN_020c2b68(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_18__021229c0(int *p) {
    int i;
    unsigned int size;
    p[0] = 0x0212446c;
    for (i = 0; i < 4; i++) {
        if (p[5 + i] != -1) FUN_020c2624(FUN_020c1fc8(), p + 5 + i);
    }
    FUN_020c212c(FUN_020c1fc8(), 2);
    size = ((volatile unsigned int *)p[4])[20];
    FUN_0206557c(0, FUN_0205e260(), size);
    size = ((volatile unsigned int *)p[4])[21];
    FUN_0206557c(0, FUN_0205e464(), size);
    FUN_020c2b68(p + 4);
    FUN_020ba8ac(p);
    return p;
}
