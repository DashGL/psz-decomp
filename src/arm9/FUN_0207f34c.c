//cpp
// flags: -O4,s
struct S13_elem {
    virtual void f(int);
};
struct S13_container {
    S13_elem *arr;
    int count;
};
typedef void (S13_elem::*PTMF)(int);
extern "C" {
extern const PTMF DAT_020fa678[];

void FUN_0207f34c(S13_container *param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
    if (param_3 != -1 && param_2 >= 0 && param_1->count > param_2 && param_3 >= 0 && param_3 < 0x80 && param_4 >= 0 && param_4 < 4) {
        int base_idx = (param_3 + (param_2 << 7)) << 2;
        const PTMF fn = param_5 ? DAT_020fa678[0] : DAT_020fa678[1];
        if (param_1->arr != 0) {
            if (param_6 != 0) {
                for (int i = 0; i < 4; i++) {
                    (param_1->arr->*fn)(base_idx + i);
                }
            } else {
                (param_1->arr->*fn)(base_idx + param_4);
            }
        }
    }
}
}
