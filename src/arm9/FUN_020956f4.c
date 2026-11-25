// flags: -O4,s
extern int FUN_020390f4(void *);
extern void FUN_0206eef0(void *, unsigned short, int);
extern void FUN_02039108(void *, int, int, int);
extern void FUN_0203b8ec(void *, int, int);

enum { E0 = 0, E1 = 1 };

void FUN_020956f4(char *s, unsigned short angle, int arg) {
    *(unsigned short *)(s + 192) = angle;
    if (*(int *)(s + 576) != 9 && !FUN_020390f4(s)) {
        FUN_0206eef0(s, angle, arg);
        if (((*(int *)(s + 248) & 128) ? E1 : E0) != 0) {
            FUN_02039108(s, 21, *(int *)(s + 212), 9);
            FUN_0203b8ec(s, 123, 0);
        } else {
            FUN_02039108(s, 21, *(int *)(s + 212), 1);
        }
        s[513] = 0;
    }
}
