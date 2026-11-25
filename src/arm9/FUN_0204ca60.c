// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
extern void FUN_0204cc5c(void);
extern int FUN_0204b5cc(void *);
extern int FUN_0203a1a8(void *, int);
extern int FUN_020465c4(int, int, void *);
extern void *FUN_0204225c(void *, int);
extern void FUN_02046b94(void *, unsigned int);
extern void FUN_02046bec(void *);
#pragma thumb off
extern void FUN_0201d1a0(void *, int, int);
#pragma thumb on
extern void FUN_02045b84(int, void *, int);
extern void FUN_02045970(int, void *);
extern void *FUN_0204d68c(void *, void *);
extern void FUN_0206e728(void *, void *);
extern void FUN_0206e738(void *, void *);
extern int FUN_02042418(void *, int);
extern unsigned int FUN_02046bc8(void *);
extern void FUN_0204c75c(void *);
extern int FUN_020424b4(void *, int);
#define W(n) (*(unsigned int *)(s + (n)))
#define P(n) (*(char **)(s + (n)))
int FUN_0204ca60(char *s) {
    int result = FUN_0204b5cc(s);
    Key b, c, d, a;
    void *handle;
    char *obj;
    if (!result) {
        if (!(W(256) & 1) && P(48)) {
            a = *(Key *)(s + 264);
            if (!FUN_0203a1a8(&a, 17)) {
                if (!FUN_020465c4(W(232), 0, s + 264) && P(48)) {
                    handle = FUN_0204225c(P(48), 0);
                    if (handle) {
                        FUN_02046b94(handle, 0);
                        FUN_02046bec(handle);
                    }
                }
                handle = *(void **)(P(48) + 28);
                if (handle) FUN_0201d1a0(handle, 0, 45);
                b = *(Key *)(s + 208);
                FUN_02045b84(W(232), &b, W(260));
            } else {
                c = *(Key *)(s + 208);
                FUN_02045970(W(232), &c);
            }
            W(256) |= 1;
        }
        d = *(Key *)(s + 264);
        if (FUN_0203a1a8(&d, 17) && !W(284) && P(48)) {
            P(284) = FUN_0204d68c(s, s + 52);
            FUN_0206e728(P(48), (void *)FUN_0204cc5c);
            FUN_0206e738(P(48), s);
        }
    }
    if (W(256) & 2) {
        obj = P(48);
        if (obj && FUN_02042418(obj, 0)) {
            handle = FUN_0204225c(obj, 0);
            if (handle) {
                FUN_02046b94(handle, FUN_02046bc8(handle) - 1u);
                FUN_02046bec(handle);
                W(256) &= ~2u;
            }
        }
    }
    if ((int)W(288) > 0) {
        W(288) -= W(76);
        if ((int)W(288) <= 0) FUN_0204c75c(s);
    }
    if ((W(256) & 4) && (int)W(288) <= 0) {
        if ((int)W(288) > 0) {
            W(288) -= W(76);
        } else {
            obj = P(48);
            if (obj && FUN_020424b4(obj, 0) < (int)W(76)) {
                handle = FUN_0204225c(obj, 0);
                if (handle) {
                    FUN_02046b94(handle, 0);
                    FUN_02046bec(handle);
                    W(256) &= ~4u;
                }
            }
        }
    }
    return result;
}
