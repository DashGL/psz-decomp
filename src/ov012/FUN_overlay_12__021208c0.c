// flags: -O4,s
extern void FUN_overlay_12__02120870(int, int, int, int, int);
extern void FUN_overlay_12__0212089c(int, int, int, int);
#pragma thumb off
extern void FUN_0206557c(int, void *, unsigned int);
extern void *FUN_0205e1dc(void);
extern void *FUN_0205e40c(void);
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
#pragma thumb on
void FUN_overlay_12__021208c0(unsigned char **self) {
    unsigned int size;
    FUN_overlay_12__02120870(0, 1, 0, 1, 0);
    FUN_overlay_12__0212089c(0, 1, 16, 5);
    FUN_0206557c(0, (void *)0x05000000, 512);
    size = *(volatile unsigned int *)(self[0] + 80);
    FUN_0206557c(0, FUN_0205e1dc(), size);
    size = *(volatile unsigned int *)(self[0] + 84);
    FUN_0206557c(0, FUN_0205e40c(), size);
    size = *(volatile unsigned int *)(self[1] + 80);
    FUN_0206557c(0, FUN_0205e260(), size);
    size = *(volatile unsigned int *)(self[1] + 84);
    FUN_0206557c(0, FUN_0205e464(), size);
}
