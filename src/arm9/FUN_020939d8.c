// flags: -O4,s
extern void *DAT_02108c54;
extern unsigned char *FUN_02030a98(void *, void *);
void FUN_020939d8(char *self) {
    unsigned char *p = FUN_02030a98(DAT_02108c54, self + 4);
    if (((signed char *)self)[8] == 0) *p |= 2;
}
