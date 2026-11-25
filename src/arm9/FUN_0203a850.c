// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Rec4;

extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_020459a4(int);
extern unsigned int FUN_020a8bb0(void *);
extern void FUN_0204f458(void *, void *);
extern void FUN_0204fbec(void *, int);
extern void FUN_02039534(void *, void *);
#pragma thumb off
extern void FUN_0201d120(void *, unsigned int, unsigned int);
#pragma thumb on
extern void *FUN_0204f3b8(void);
extern void *FUN_0204f400(void *, int, void *);

void FUN_0203a850(char *self, unsigned char *record, int reset) {
    Rec4 first;
    Rec4 second;

    first = *(Rec4 *)record;
    if (FUN_0203a820(&first, 0) && ((second = *(Rec4 *)record), FUN_0203a1a8(&second, 17)) && (int)record[3] < 33) {
        if (FUN_020459a4(*(int *)(self + 252))) {
            char *p;
            FUN_0204f458(FUN_0204f3b8(), *(void **)(self + 436));
            *(void **)(self + 436) = FUN_0204f400(FUN_0204f3b8(), *(int *)(self + 252), record);
            FUN_02039534(self + 416, record);
            p = *(char **)(self + 436);
            if (p) FUN_0204fbec(p, 0);
            p = *(char **)(self + 436);
            if (p) {
                char *model = *(char **)(p + 20);
                if (model) {
                    model = *(char **)(model + 48);
                    if (model) {
                        unsigned short v = *(unsigned short *)(self + 332);
                        void *res = *(void **)(model + 28);
                        if (res) FUN_0201d120(res, 0, v);
                    }
                }
                p = *(char **)(self + 436);
                model = *(char **)(p + 24);
                if (model) {
                    model = *(char **)(model + 48);
                    if (model) {
                        unsigned short v = *(unsigned short *)(self + 332);
                        void *res = *(void **)(model + 28);
                        if (res) FUN_0201d120(res, 0, v);
                    }
                }
            }
            *(unsigned int *)(self + 248) &= ~64u;
        } else {
            FUN_0204f458(FUN_0204f3b8(), *(void **)(self + 436));
            *(void **)(self + 436) = 0;
            FUN_02039534(self + 416, record);
        }
    } else {
        FUN_0204f458(FUN_0204f3b8(), *(void **)(self + 436));
        *(void **)(self + 436) = 0;
        FUN_02039534(self + 416, record);
    }
    if (reset) *(unsigned short *)(self + 340) = 0;
    self[323] = (char)FUN_020a8bb0(record);
}
