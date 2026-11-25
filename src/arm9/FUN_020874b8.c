// flags: -O4,s
extern int FUN_020c4848(void);
extern int FUN_020c4ec8(void);
extern int FUN_020871d8(void *, int);
extern int FUN_0208703c(void *, int);
extern void FUN_020ba8c4(void *);
extern void FUN_020ba8cc(void *, void *, void *, void *);

#define W(n) (*(int *)(s + (n)))

void FUN_020874b8(char *s) {
    int status, a, b;
    switch (W(52)) {
    case 1:
        if (FUN_020c4848()) {
            status = FUN_020c4ec8();
            if (*(void **)(s + 6440)) {
                FUN_020ba8c4(*(void **)(s + 6440));
                *(void **)(s + 6440) = 0;
            }
            W(52) = 6;
            if (status == 0 && FUN_020871d8(s, 3)) {
                W(52) = 2;
            }
        }
        break;
    case 2:
        if (FUN_020c4848()) {
            status = FUN_020c4ec8();
            if (*(void **)(s + 6440)) {
                FUN_020ba8c4(*(void **)(s + 6440));
                *(void **)(s + 6440) = 0;
            }
            W(52) = 6;
            if (status == 0) {
                if (W(6452) == 1) {
                    W(52) = 5;
                } else if (FUN_0208703c(s, 4)) {
                    W(52) = 3;
                }
            }
        }
        break;
    case 3:
        if (FUN_020c4848()) {
            status = FUN_020c4ec8();
            if (*(void **)(s + 6440)) {
                FUN_020ba8c4(*(void **)(s + 6440));
                *(void **)(s + 6440) = 0;
            }
            W(52) = 6;
            if (status == 0 && FUN_0208703c(s, 7)) {
                W(52) = 4;
            }
        }
        break;
    case 4:
        if (FUN_020c4848()) {
            status = FUN_020c4ec8();
            if (*(void **)(s + 6440)) {
                FUN_020ba8c4(*(void **)(s + 6440));
                *(void **)(s + 6440) = 0;
            }
            W(52) = 6;
            if (status == 0) {
                if (W(6452) == 0) {
                    W(52) = 5;
                } else if (FUN_020871d8(s, 2)) {
                    W(52) = 1;
                }
            }
        }
        break;
    case 5:
        a = 0;
        b = 0;
        FUN_020ba8cc(&a, &b, 0, 0);
        W(52) = 0;
        break;
    case 6:
        break;
    }
}
