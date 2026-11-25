// flags: -O4,s
typedef struct { unsigned int a; unsigned short b, pad; int c; unsigned int arr[4]; } S;
extern int FUN_020855bc(int);
void FUN_02033170(S *s) {
    int i;
    s->b = s->a;
    s->a++;
    for (i = 0; i < 4; i++) {
        s->arr[i] = 0;
        if (FUN_020855bc(i) == 2) s->arr[i] = 1;
    }
}
