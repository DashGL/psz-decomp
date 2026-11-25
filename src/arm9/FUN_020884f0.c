// flags: -O4,s
extern char *UNK_0211a540[];
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb reset
extern void FUN_02088488(void *);
extern int FUN_02073198(void);
void FUN_020884f0(void) {
    char *slots[2][2];
    int counts[2];
    int i, group;
    FUN_0200c938(counts, 8);
    FUN_0200c938(slots, 16);
    for (i = 0; i < 4; ++i) {
        char *a = UNK_0211a540[i];
        if (a) {
            int g = *(int *)(a + 364);
            int n = counts[g];
            if (n < 2) {
                slots[g][n] = a;
                counts[g] = n + 1;
            }
        }
    }
    for (group = 0; group < 2; ++group) {
        switch (counts[group]) {
        case 1: {
            char *a = slots[group][0];
            *(int *)(a + 360) = 0;
            if (group == 0 && *(int *)(a + 368)) {
                if (*(int *)(a + 232) == FUN_02073198()) {
                    *(int *)(a + 360) = 2;
                } else if (*(int *)(a + 324)) {
                    if (*(int *)(a + 332) > 1119) {
                        if (*(int *)(a + 328) < 0) *(int *)(a + 360) = 1;
                    } else if (*(int *)(a + 328) > 0) {
                        *(int *)(a + 360) = 1;
                    }
                }
            }
            break;
        }
        case 2: {
            char *a = slots[group][0];
            char *b = slots[group][1];
            if (*(int *)(a + 324) && *(int *)(b + 324)) {
                if (*(int *)(a + 328) < *(int *)(b + 328)) {
                    *(int *)(a + 360) = 0;
                    *(int *)(b + 360) = 1;
                } else {
                    *(int *)(a + 360) = 1;
                    *(int *)(b + 360) = 0;
                }
            } else {
                *(int *)(a + 360) = 0;
                *(int *)(b + 360) = 1;
            }
            break;
        }
        }
    }
    for (i = 0; i < 4; ++i) {
        if (UNK_0211a540[i]) FUN_02088488(UNK_0211a540[i]);
    }
}
