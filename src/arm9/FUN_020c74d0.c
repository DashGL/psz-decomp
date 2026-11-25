// flags: -O4,s
typedef struct { unsigned char b[8]; } B8;
#pragma thumb off
extern int FUN_0202803c(void *, B8 *);
#pragma thumb on
extern int FUN_020c7458(int, int);
int FUN_020c74d0(void *a, B8 *src, unsigned char v) {
    B8 tmp = *src;
    tmp.b[0] = v;
    return FUN_020c7458(FUN_0202803c(a, &tmp), -1);
}
