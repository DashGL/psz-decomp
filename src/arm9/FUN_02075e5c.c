// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02039108(void *, int, int, int);
extern void FUN_0203b8ec(void *, int, int);
extern void FUN_02039038(void *, int, void (*)(void *));
extern void FUN_0206f054(void *);
void FUN_02075e5c(char *s, unsigned short angle, int flag) {
    *(unsigned short *)(s + 192) = angle;
    if (((*(int *)(s + 248) & 128) ? E1 : E0) != 0) {
        FUN_02039108(s, 14, *(int *)(s + 212), 9);
        FUN_0203b8ec(s, 123, 0);
    } else {
        FUN_02039108(s, 14, *(int *)(s + 212), 0);
    }
    FUN_02039038(s, 0, FUN_0206f054);
    s[321] = flag;
    *(int *)(s + 576) = 9;
}
