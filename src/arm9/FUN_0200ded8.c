// flags: -O4,s -noThumb
extern unsigned char DAT_02101e30[];
extern unsigned char DAT_02101e3c[];
extern void FUN_02011ac0(void *, void *);
extern void FUN_020119b8(void *, void *);

void FUN_0200ded8(unsigned int *self) {
    unsigned int *linked = (unsigned int *)self[0];
    unsigned char *owner;
    if (linked) {
        linked[0] = 0;
        self[0] = 0;
    }
    owner = (unsigned char *)self[1];
    FUN_02011ac0(owner, self);
    self[1] = 0;
    linked = (unsigned int *)self[2];
    if (linked) {
        FUN_020119b8(owner + 12, linked);
        ((unsigned int *)self[2])[3] = 0;
        self[2] = 0;
    }
    FUN_02011ac0(DAT_02101e3c, self);
    FUN_020119b8(DAT_02101e30, self);
    ((unsigned char *)self)[44] = 0;
}
