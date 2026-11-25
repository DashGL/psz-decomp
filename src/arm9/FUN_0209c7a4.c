// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_0209c774(void *, int, int);
extern int FUN_0208546c(void);
extern int FUN_020967cc(void *, int);
extern int FUN_0209685c(void *, int);
extern void *FUN_02096488(void);

int FUN_0209c7a4(signed char *s, int current, signed char *condition) {
    int kind = condition[1];
    int candidate, i;
    if (kind == 0) {
        int ret = -1;
        int field = *(short *)(condition + 2);
        if (s[field] ? E1 : E0) {
            ret = current;
            if (field == 6) {
                if (FUN_0209c774(s, current, 4)) {
                    ret = 0;
                } else {
                    ret = -1;
                }
            }
        }
        return ret;
    }
    if (kind == 1) {
        if (FUN_0209c774(s, current, *(short *)(condition + 2))) return current;
        return -1;
    }
    candidate = -1;
    if (FUN_0209c774(s, FUN_0208546c(), *(short *)(condition + 2))) {
        candidate = FUN_0208546c();
    } else {
        for (i = 0; i < 5; i++) {
            if (FUN_020967cc(FUN_02096488(), i)) {
                int member = FUN_0209685c(FUN_02096488(), i);
                if (member != current && FUN_0209c774(s, member, *(short *)(condition + 2))) {
                    candidate = member;
                    break;
                }
            }
        }
    }
    return candidate;
}
