// flags: -O4,s
extern void FUN_020a4640(void *);
extern void FUN_020a4888(void *, int);

enum { E0 = 0, E1 = 1 };

void FUN_020a48d4(int *s) {
    switch (s[1]) {
    case 0:
        FUN_020a4640(s);
        s[1] = 1;
        break;
    case 1:
    case 2:
        s[2]++;
        if (s[2] >= 90) {
            s[2] = 0;
            s[1] = (s[1] == 1) ? 2 : 1;
            FUN_020a4888(s, (s[1] == 1) ? E1 : E0);
        }
        break;
    }
}
