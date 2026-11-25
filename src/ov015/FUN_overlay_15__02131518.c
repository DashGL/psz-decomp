// flags: -O4,s
extern char *DAT_0213e8bc;
extern void FUN_overlay_15__0213596c(void *, int, unsigned int, unsigned int);
void FUN_overlay_15__02131518(unsigned int value) {
    char *p = DAT_0213e8bc;
    FUN_overlay_15__0213596c(*(void **)p, -1, *(unsigned short *)(p + 16), value + *(unsigned short *)(p + 18));
    DAT_0213e8bc[26] = (unsigned char)value;
}
