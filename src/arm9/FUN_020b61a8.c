// flags: -O4,s
typedef struct { int words[4]; } Item;
extern void *FUN_02086e3c(void);
extern Item *FUN_020b091c(void *, unsigned int);
extern int FUN_0203a1fc(void *);
int FUN_020b61a8(void *unused, char *out, unsigned int index) {
    if (index < 4) {
        Item item = *FUN_020b091c(FUN_02086e3c(), index);
        if (!FUN_0203a1fc(&item)) {
            typedef struct { unsigned char b[4]; } Head4; typedef struct { int w[3]; } Tail3; *(Head4 *)out = *(const Head4 *)&item; *(Tail3 *)(out + 4) = *(const Tail3 *)((const char *)&item + 4);
            return 1;
        }
    }
    return 0;
}
