// flags: -O4,p
extern int DAT_021a13b0;
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_overlay_21__021992a8(void *, int, int);
void FUN_overlay_21__0219b75c(int *self) {
    void *owner; int *data = (int *)self[2]; int index; owner = (void *)self[1]; index = data[10]; if (data[4] == 0) FUN_02040c0c(owner, index, 22, 4096, 0); else if (data[4] == 1) FUN_02040c0c(owner, index, 43, 4096, 0); ((unsigned short *)data)[38] = ((unsigned short *)data)[39]; FUN_02043ea4(owner, index, 1); FUN_overlay_21__021992a8(owner, DAT_021a13b0, data[2]);
}
