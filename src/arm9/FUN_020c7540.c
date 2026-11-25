// flags: -O4,s
extern int FUN_02028170(int, int, int, int, void *);
extern int FUN_020c7458(int, int);

int FUN_020c7540(int a, int b, int c, int d, unsigned char *p, int e) {
    unsigned char local[8];
    unsigned char *src = p;
    unsigned char *dst = local;
    unsigned int n = 8;
    do {
        *dst++ = *src++;
    } while (--n != 0);
    local[0] = e;
    return FUN_020c7458(FUN_02028170(a, b, c, d, local), -1);
}
