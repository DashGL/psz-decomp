// flags: -O4,s
extern int FUN_020bbca8(void *), FUN_020bb30c(void), FUN_020bb324(void *, unsigned), FUN_020bb34c(void *, unsigned), FUN_020baa54(void *, void *, int);
extern void FUN_020bab04(void *);

void FUN_020baea8(char *s) {
    int count;
    if (!FUN_020bbca8(s)) return;
    switch (*(int *)(s + 76)) {
    case 1:
        if (FUN_020bb30c() != 3) return;
        if (*(int *)(s + 88)) {
            if (FUN_020bb324(*(void **)(s + 80), *(unsigned short *)(s + 84))) *(int *)(s + 88) = 0;
            return;
        }
        count = FUN_020baa54(s + 28, *(void **)(s + 80), 512);
        if (count > 0) {
            *(unsigned short *)(s + 84) = count;
            *(int *)(s + 88) = 0;
            if (!FUN_020bb324(*(void **)(s + 80), *(unsigned short *)(s + 84))) FUN_020bab04(s + 28);
        }
        break;
    case 2:
        if (FUN_020bb30c() != 4) return;
        if (*(int *)(s + 88)) {
            if (FUN_020bb34c(*(void **)(s + 80), *(unsigned short *)(s + 84))) *(int *)(s + 88) = 0;
            return;
        }
        count = FUN_020baa54(s + 28, *(void **)(s + 80), 192);
        if (count > 0) {
            unsigned short length = count;
            *(unsigned short *)(s + 84) = length;
            *(int *)(s + 88) = 0;
            if (!FUN_020bb34c(*(void **)(s + 80), length)) FUN_020bab04(s + 28);
        }
        break;
    }
}
