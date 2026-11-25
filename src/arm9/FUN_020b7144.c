// flags: -O4,s
//cpp
struct S_b7144 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
};
struct Hdr4_b7144 {
    unsigned char b[4];
};
extern "C" {
int FUN_0203a1fc(void *);
int FUN_020b6170(void *, int);
int FUN_020b618c(void *, int);
int FUN_020b737c(void *, void *, int);
void *FUN_020845a8(void *);
void FUN_020b6200(void *, void *);
int FUN_020b7144(char *s);
}

int FUN_020b7144(char *s) {
    int total = 0;
    int group[20];
    int item[4];
    Hdr4_b7144 header;
    ((S_b7144 *)s)->v4(item);
    if (!FUN_0203a1fc(item)) {
        header = *(Hdr4_b7144 *)item;
        void *d = FUN_020845a8(&header);
        if (d) {
            for (int i = 0; i < 2; i++) {
                if (FUN_020b6170(d, i) == 46) {
                    total += FUN_020b618c(d, i);
                }
            }
        }
    }
    FUN_020b6200(s, group);
    return total + FUN_020b737c(s, group, 46);
}
