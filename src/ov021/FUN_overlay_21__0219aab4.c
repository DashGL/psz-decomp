// flags: -O4,s
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern int FUN_0203ae60(void *);
int FUN_overlay_21__0219aab4(unsigned int *p) {
    int result = 0, i;
    unsigned int best = p[36];
    void *entity;
    for (i = 1; i < 4; i++) {
        if (p[36 + i] > best) {
            entity = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
            if (entity && !FUN_0203ae60(entity)) {
                best = p[36 + i];
                result = i;
            }
        }
    }
    return result;
}
