// flags: -noThumb
typedef struct { int f0[7]; int f1c, f20, f24, f28; int f2c[3]; int f38, f3c; int f40[53]; int f114; } G_56a88;
extern G_56a88 DAT_021116a0;
typedef struct { unsigned int status; unsigned int reserved[7]; unsigned int worker; } CardWork;
extern CardWork DAT_02111cc0;
extern void FUN_02055a08(void);
extern unsigned int FUN_02056af8(void);
extern void FUN_02056cdc(void);
void FUN_02056a88(void) {
    G_56a88 *g = &DAT_021116a0;
    if (g->f114 != 0) return;
    g->f114 = 1;
    g->f24 = 0;
    g->f20 = 0;
    g->f1c = 0;
    g->f28 = -1;
    g->f38 = 0;
    g->f3c = 0;
    DAT_02111cc0.status = 0;
    FUN_02055a08();
    DAT_02111cc0.worker = FUN_02056af8();
    FUN_02056cdc();
}