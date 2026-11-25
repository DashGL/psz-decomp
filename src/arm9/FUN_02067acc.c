// flags: -O4,p -noThumb
extern unsigned int DAT_02118424[];
extern unsigned int DAT_027e3000[];
extern void FUN_02067b3c(void);
void FUN_02067acc(void) {
    unsigned int p = *(unsigned int *)0x027ffd9c;
    if (p >= 0x02600000 && p < 0x02800000) {
        DAT_02118424[0] = p;
    } else {
        DAT_02118424[0] = 0;
    }
    if (!DAT_02118424[0]) {
        *(unsigned int *)0x027ffd9c = (unsigned int)FUN_02067b3c;
        DAT_027e3000[0x3f7] = (unsigned int)FUN_02067b3c;
    }
    DAT_02118424[2] = 0;
}
