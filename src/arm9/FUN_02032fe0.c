// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *FUN_02032ca0(void *, int);
extern int FUN_020834c0(int);
int FUN_02032fe0(char *s, int kind, int a, int b) {
    char *first, *p;
    if ((*(signed char *)(s + 20) == 0) ? E1 : E0) return -1;
    if (a == b) return -1;
    first = FUN_02032ca0(s, a);
    p = FUN_02032ca0(s, b);
    if (!first || !p) return -1;
    if (kind == 1) return -1;
    while (p) { 
        int index = *(volatile int *)(p + 40), next;
        if (index >= 0 && index < 4) next = *(signed char *)(p + 24 + index);
        else next = -1;
        if (next == a) return FUN_020834c0(*(int *)(p + 40));
        p = FUN_02032ca0(s, next); }
    return *(int *)(first + 40);
}
