// flags: -O4,s
#pragma thumb off
extern void *FUN_0205e1dc(void);
extern void *FUN_0205e40c(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on
extern void *FUN_020c1fc8(void);
extern void FUN_020c212c(void *, int);
void FUN_overlay_11__02122c14(void **p) {
    void *owner;
    unsigned int size;
    void *buffer;
    owner = p[1]; size = ((unsigned int *)owner)[20]; buffer = FUN_0205e1dc(); FUN_0206557c(0, buffer, size);
    owner = p[1]; size = ((unsigned int *)owner)[21]; buffer = FUN_0205e40c(); FUN_0206557c(0, buffer, size);
    FUN_020c212c(FUN_020c1fc8(), 1);
    FUN_020c212c(FUN_020c1fc8(), 0);
}
