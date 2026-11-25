// flags: -O4,s
extern char DAT_0213a8a4[], DAT_0213a8b0[];
extern unsigned int FUN_overlay_15__021207f4(void *);
extern void FUN_overlay_15__021206c0(void *, void *, unsigned int);
int FUN_overlay_15__0211f4b4(unsigned int *p) {
    p[0] = FUN_overlay_15__021207f4(DAT_0213a8a4);
    FUN_overlay_15__021206c0(p + 1, DAT_0213a8a4, p[0]);
    p[9] = 1;
    p[10] = FUN_overlay_15__021207f4(DAT_0213a8b0);
    if (p[10] > 13) return -1;
    FUN_overlay_15__021206c0(p + 11, DAT_0213a8b0, p[10]);
    return 0;
}
