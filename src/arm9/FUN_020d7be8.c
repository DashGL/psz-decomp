// flags: -O4,p
extern int DAT_0211cf6c;
extern void FUN_020c781c(void);
extern int FUN_020c7468(int, int, int);
extern void FUN_020d7a44(void *);

void FUN_020d7be8(char *a, int b, int c, int d, int e, int f) {
    if (d != 0 || DAT_0211cf6c == 1) {
        FUN_020c781c();
        *(int *)a = c;
        *(int *)(a + 4) = b;
        *(int *)(a + 0x40) = 0;
        *(int *)(a + 0x44) = e;
        *(int *)(a + 0x48) = f;
        *(int *)(a + 0x28) = 0;
        *(int *)(a + 0x20) = FUN_020c7468(2, 2, 0);
        FUN_020d7a44(a + 0x14);
        FUN_020d7a44(a + 8);
    }
}
