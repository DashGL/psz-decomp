// flags: -O4,p
typedef struct {
    unsigned int w[3];
} Vec3;

typedef struct {
    int pad[2];
    struct {
        signed char val;
        int amt;
    } entry[2];
} StatusBuf;

extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern char *FUN_020352c0(void *);
extern void FUN_0207f934(void *, void *);
extern void FUN_0207f960(void *, void *);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);

void FUN_0204e1c0(int id, unsigned int type, int value, int amount) {
    void *p = FUN_020352a4(DAT_02108cf4, id);
    if (p) {
        char *q = FUN_020352c0(p);
        if (q) {
            char *s = q + 0x64;
            if (s && type <= 1 && value >= -5 && value <= 5 && amount >= 0) {
                StatusBuf r;
                unsigned int effect[25];
                int flag;
                FUN_0207f934(s, &r);
                r.entry[type].val = (signed char)value;
                r.entry[type].amt = amount;
                FUN_0207f960(s, &r);
                FUN_0203666c(effect);
                *(Vec3 *)((char *)effect + 0x20) = *(Vec3 *)(q + 0x38);
                effect[22] = id;
                effect[21] = 29;
                if (value < 0) {
                    effect[21] = 30;
                    value = -value;
                }
                flag = 0;
                if (type == 1) {
                    flag = 1;
                }
                FUN_02046d94(effect, value, flag);
            }
        }
    }
}
