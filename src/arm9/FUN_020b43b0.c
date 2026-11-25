// flags: -O4,p
extern int DAT_020fc760;
extern struct { void *a; void *b; } DAT_0211aa74;
void *FUN_020b43b0(unsigned char *self) {
    *(void **)self = &DAT_020fc760;
    self[12] = 0xff;
    *(int *)(self + 8) = -1;
    *(int *)(self + 4) = 0;
    DAT_0211aa74.b = self;
    return self;
}
