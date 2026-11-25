// flags: -O4,s
//cpp
struct S_b71b0 {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};
struct Hdr4_b71b0 {
    unsigned char b[4];
};
extern "C" {
int FUN_0203a1fc(void *);
int FUN_02084684(int, void *, void *);
int FUN_020b67c0(void *, int);
int FUN_020848e0(int, int);
int FUN_020b71b0(char *s);
}

int FUN_020b71b0(char *s) {
    int total = 0;
    int item[4];
    int converted[6];
    Hdr4_b71b0 header;
    ((S_b71b0 *)s)->v2(item);
    if (!FUN_0203a1fc(item)) {
        header = *(Hdr4_b71b0 *)item;
        if (FUN_02084684(*(int *)(s + 104), &header, converted)) {
            for (int i = 0; i < 3; i++) {
                if (FUN_020b67c0(converted, i) == 46) {
                    total += FUN_020848e0(FUN_020b67c0(converted, i), ((signed char *)converted)[13 + i]);
                }
            }
        }
    }
    return total;
}
