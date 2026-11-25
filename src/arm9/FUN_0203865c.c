// flags: -O4,s
typedef struct {
    unsigned short hdr[2];
    unsigned short entries[22];
} Table_0203865c;
extern void *DAT_02108c84;
extern void FUN_02033e50(void *, void *, unsigned int);
int FUN_0203865c(char *s, int index) {
    void *p, *m;
    m = DAT_02108c84;
    p = *(void **)(s + 0x8c);
    if (p && m) {
        Table_0203865c *table = *(Table_0203865c **)(s + 0x90);
        if (table && index >= 0 && index < 22 && *(unsigned int *)(s + 0xe8) - 4 <= 1) {
            FUN_02033e50(m, p, table->entries[index]);
            *(int *)(s + 0xd0) = index;
            *(int *)(s + 0xe8) = 4;
            return 1;
        }
    }
    return 0;
}
