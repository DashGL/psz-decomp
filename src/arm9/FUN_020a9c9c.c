// flags: -O4,s
typedef struct {
    char pad0[252];
    int ffc;
    char pad1[88];
    char f158[96];
    void *effects[3];
    char pad2[136];
    char f24c[4];
} Obj;
extern void FUN_0208d7e4(void *, int, int, int, int);
extern void FUN_0207f4fc(void *);
extern void FUN_020a113c(void);
extern void FUN_020472bc(void *);
extern void FUN_0203e504(void *);
void FUN_020a9c9c(Obj *s, short *value) {
    int i;
    FUN_0208d7e4(s->f24c, s->ffc, *value, 0, 4);
    FUN_0207f4fc(s->f158);
    FUN_020a113c();
    for (i = 0; i < 3; i++) {
        if (s->effects[i] != 0) {
            FUN_020472bc(s->effects[i]);
            s->effects[i] = 0;
        }
    }
    FUN_0203e504(s);
}
