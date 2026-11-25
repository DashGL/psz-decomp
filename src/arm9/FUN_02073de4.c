// flags: -O4,s
extern void *DAT_020f9b04;
extern int DAT_020f9ae4[];
extern void FUN_020b9cb0(void *, void *);
extern void FUN_02073da4(void *);
extern void FUN_02073dc4(void *);
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern void FUN_02073678(void);
extern void FUN_02073c14(unsigned char *);
extern void FUN_02074520(int, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020bced4(void *, int, int, int);

void *FUN_02073de4(char *s, void *parent) {
    char *p;
    FUN_020b9cb0(s, parent);
    *(void **)s = &DAT_020f9b04;
    s[32] = 0;
    *(int *)(s + 36) = 0;
    *(int *)(s + 40) = 0;
    *(int *)(s + 44) = 0;
    *(int *)(s + 48) = 0;
    *(int *)(s + 52) = 0;
    *(int *)(s + 56) = 0;
    *(int *)(s + 60) = 0;
    *(int *)(s + 64) = 0;
    *(int *)(s + 68) = 0;
    FUN_02073da4(s + 72);
    p = s + 112;
    do {
        FUN_02073dc4(p);
        p += 60;
    } while (p < s + 352);
    FUN_020656b8(s + 352, 0, 20);
    *(int *)(s + 12) = DAT_020f9ae4[0];
    p = (char *)FUN_020ba894(3940);
    if (p) {
        p = (char *)FUN_020bced4(p, 4, 6144, 10240);
    }
    *(void **)(s + 44) = p;
    if (p) {
        *(void (**)(unsigned char *))(p + 8) = FUN_02073c14;
        *(void (**)(int, int))(*(char **)(s + 44) + 3936) = FUN_02074520;
    }
    FUN_02073678();
    return s;
}
