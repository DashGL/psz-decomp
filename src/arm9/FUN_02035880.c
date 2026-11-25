// flags: -O4,s
extern void *DAT_02108c84;
extern void *DAT_02108d5c;
extern unsigned int FUN_0203ffa8(void *, int, int, int);
extern void FUN_02033dec(void *, void *, unsigned int);
extern void FUN_020424fc(void *, int, int);
void FUN_02035880(char *s, int index, int slot, int subindex, int value) {
    void *object;
    void *m = DAT_02108c84;
    char *table = *(char **)(s + 152);
    char *record = table + 112 * index;
    signed char *data;
    object = *(void **)record;
    data = **(signed char ***)(s + 20);
    *(unsigned short *)(record + 72 + 8 * slot) = (unsigned short)FUN_0203ffa8(DAT_02108d5c, *data, slot, subindex);
    FUN_02033dec(m, object, *(unsigned short *)(record + 72 + 8 * slot));
    *(short *)(record + 74 + 8 * slot) |= 1;
    FUN_020424fc(object, slot, value);
}
