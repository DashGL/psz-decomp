// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_overlay_9__0211e640(void);
extern int FUN_overlay_9__0211e690(int);
extern int FUN_overlay_9__0211e64c(void);
extern int FUN_overlay_9__0211e6c0(void);
extern int FUN_overlay_9__0211fc40(void *, int);
extern int FUN_020b2298(void *, void *);
extern void FUN_overlay_9__0211fb18(void *, int);
extern void FUN_020b3088(void *, int);
extern void FUN_overlay_9__0211e6b4(int);

int FUN_overlay_9__0211fa54(char *s, short *out) {
    int old = *(int *)(s + 4), result = 0, id, state;
    if (((*(int *)(s + 104) & 4) == 4) ? E1 : E0) {
        id = FUN_overlay_9__0211e690(FUN_overlay_9__0211e640());
        state = FUN_overlay_9__0211e64c();
        if (id != -1) {
            if (id != 0) {
                if (FUN_overlay_9__0211e6c0()) {
                    out[0] = 7;
                    out[1] = id;
                    result = 1;
                    *(int *)(s + 104) = 0;
                }
            } else if (FUN_overlay_9__0211fc40(s, state)) {
                FUN_overlay_9__0211fb18(s, state);
            } else if (FUN_overlay_9__0211fc40(s, *(int *)(s + 116))) {
                FUN_overlay_9__0211fb18(s, *(int *)(s + 116));
            }
        }
    }
    switch (*(int *)(s + 108)) {
    case 3:
    case 7:
    case 8:
    case 9:
        FUN_020b3088(s + 120, 0);
        break;
    }
    result |= FUN_020b2298(s, out);
    FUN_overlay_9__0211e6b4(old);
    return result;
}
