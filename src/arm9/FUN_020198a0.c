// flags: -O4,s -noThumb
extern char DAT_021057d8[];
extern char DAT_02105768[];
extern char DAT_0210584c[];
extern unsigned int DAT_0210571c[];
extern char DAT_0210587c[];
extern void FUN_0205b68c(void *, void *, void *);
extern void FUN_0205b274(void *, void *, unsigned int, unsigned int, unsigned int);
extern void FUN_0205b300(void *, void *);

void FUN_020198a0(void) {
    FUN_0205b68c(DAT_021057d8, DAT_02105768, DAT_0210584c);
    FUN_0205b274(DAT_0210584c, DAT_0210584c, DAT_0210571c[0xec / 4], DAT_0210571c[0xf0 / 4], DAT_0210571c[0xf4 / 4]);
    FUN_0205b300(DAT_0210584c, DAT_0210587c);
}
