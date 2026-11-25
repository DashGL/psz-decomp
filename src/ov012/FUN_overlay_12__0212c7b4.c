// flags: -O4,s
extern int FUN_overlay_12__0212c7e8(void *);
#pragma thumb off
extern void *FUN_0205e1dc(void);
extern void *FUN_0205e40c(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on
void FUN_overlay_12__0212c7b4(void **self) {
    if (FUN_overlay_12__0212c7e8(self)) {
        void *owner;
        unsigned int size;
        void *buffer;
        owner = self[0]; size = ((unsigned int *)owner)[20]; buffer = FUN_0205e1dc(); FUN_0206557c(0, buffer, size);
        owner = self[0]; size = ((unsigned int *)owner)[21]; buffer = FUN_0205e40c(); FUN_0206557c(0, buffer, size);
    }
}
