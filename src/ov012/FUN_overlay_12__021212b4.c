// flags: -O4,s
extern void FUN_overlay_12__02120f78(void *);
extern void FUN_overlay_12__02120e34(int, int, int, int, int);
#pragma thumb off
extern void FUN_0206557c(unsigned int, void *, unsigned int);
extern void *FUN_0205e1dc(void);
extern void *FUN_0205e40c(void);
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
#pragma thumb on
extern void *DAT_0213ec94;

void FUN_overlay_12__021212b4(void **self) {
    unsigned int size;
    void *owner;
    FUN_overlay_12__02120f78(self);
    FUN_overlay_12__02120e34(0, 1, 0, 1, 0);
    FUN_0206557c(0, (void *)0x05000000, 512);
    size = ((volatile unsigned int *)self[1])[20];
    FUN_0206557c(0, FUN_0205e1dc(), size);
    size = ((volatile unsigned int *)self[1])[21];
    FUN_0206557c(0, FUN_0205e40c(), size);
    size = ((volatile unsigned int *)self[2])[20];
    FUN_0206557c(0, FUN_0205e260(), size);
    size = ((volatile unsigned int *)self[2])[21];
    FUN_0206557c(0, FUN_0205e464(), size);
    owner = DAT_0213ec94;
    if (owner) {
        if (owner) ((void *(**)(void *))*(void **)owner)[1](owner);
        DAT_0213ec94 = 0;
    }
}
