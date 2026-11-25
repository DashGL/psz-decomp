//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020445a8(void *, int, int);
extern void FUN_overlay_20__0219aad4(void *);
extern void FUN_overlay_20__0219ad1c(void *);
}
extern "C" void FUN_overlay_20__0219aa48(int *self) {
    int *owner = (int *)self[1];
    FUN_020445a8(owner, 0, 0);
    FUN_020445a8(owner, 1, 0);
    FUN_020445a8(owner, 2, 0);
    FUN_020445a8(owner, 3, 0);
    if ((((owner[59] & 16) != 0) ? 1 : 0) != 0 || (((owner[59] & 32) != 0) ? 1 : 0) != 0) {
        FUN_overlay_20__0219aad4(self);
        self[3] = 0;
    } else {
        FUN_overlay_20__0219ad1c(self);
        self[3] = 1;
    }
}
