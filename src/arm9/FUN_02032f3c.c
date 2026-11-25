// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *DAT_0210e24c;
extern void *FUN_02032ca0(void *, unsigned int);
extern int FUN_02032fc4(void *, unsigned int, int);
extern int FUN_0205136c(void *, unsigned int, int);
extern void *FUN_02031a74(void);
extern int FUN_02032444(void *, unsigned int, unsigned int);

int FUN_02032f3c(char *s, unsigned int id, unsigned int arg) {
    void *p;
    if (((*(signed char *)(s + 20) == 1) ? E1 : E0) != 0) {
        p = FUN_02032ca0(s, id);
        if (p != 0 && FUN_02032fc4(p, arg, 7) != 0) {
            int limit = 0;
            if (FUN_02032fc4(p, arg, 4) != 0) {
                if (FUN_0205136c(DAT_0210e24c, id, 0) == 0) return 1;
                return limit;
            }
            if (FUN_02032fc4(p, arg, 2) != 0) limit += 2;
            else limit += 1;
            limit -= FUN_02032444(FUN_02031a74(), id, arg);
            if (limit < 0) return 0;
            return limit;
        }
    }
    return 0;
}
