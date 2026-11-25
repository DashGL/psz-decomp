// flags: -O4,s
extern char *FUN_02084568(void *);
extern char *FUN_020845a8(void *);
extern char DAT_020f3110[];
extern char DAT_020f2fc4[];
typedef struct {
    char pad[8];
    unsigned short lo : 10;
    unsigned short id : 6;
} P;
void *FUN_02084ad0(void *a, void *b) {
    P *p = (P *)FUN_02084568(a);
    signed char *q = (signed char *)FUN_020845a8(b);
    if (p != 0 && q != 0) {
        int id = p->id;
        if (id == q[10]) {
            int i = id - 1;
            if (i >= 0 && i < 32) {
                return &DAT_020f3110[10 * i];
            }
        }
    }
    return DAT_020f2fc4;
}
