//cpp
// flags: -O4,s
enum EBool { E0 = 0, E1 = 1 };
typedef void (*Stroke316)(void *, int, int);
struct Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
extern "C" {
extern char UNK_0211c90c[];
void *FUN_0208bce4(void);
void FUN_0208bd14(void *);
#pragma thumb off
void FUN_02012f40(void *, void *, unsigned int);
#pragma thumb on
void FUN_020a4be0(void *);
void FUN_020c32b4(void *, int);
void FUN_02071d0c(void *);
int FUN_02080ed4(void);
int FUN_02073198(void);
int FUN_020a52e0(void *);
void FUN_020c193c(int, int, int, int, int);
void FUN_020a5148(void *, int);
void FUN_020a521c(void);
void FUN_020a5dc8(void *, Stroke316);
void FUN_020a76b4(void *, int, int);
void FUN_020a7784(void *, int, int);
void FUN_020a7704(void *, int, int);
void FUN_020a59c8(char *s);
}
static inline EBool has_flag(unsigned short v) { return (v & 4) ? E1 : E0; }
void FUN_020a59c8(char *s) {
    int i, p3[4], p2[4], p1[4];
    void *manager;
    if (*(void **)(s + 7212)) {
        manager = FUN_0208bce4();
        if (manager) FUN_0208bd14(manager);
    }
    for (i = 0; i < *(int *)(s + 204); i++)
        FUN_02012f40(UNK_0211c90c, s + 108 + 8 * i, *(unsigned short *)(s + 64));
    FUN_020a4be0(s);
    if (*(int *)(s + 7192) == 1 || *(int *)(s + 7192) == 3) {
        FUN_020c32b4(s + 7196, *(int *)(s + 56));
        FUN_02071d0c(p3);
        *(short *)p3 = *(int *)(s + 7192) == 1 ? 14 : 15;
        p3[2] = 524288;
        p3[3] = 786432;
        FUN_020c32b4(p3, *(int *)(s + 56));
    } else if (!FUN_02080ed4()) {
        FUN_02071d0c(p2);
        *(short *)p2 = 12;
        p2[2] = 757760;
        p2[3] = 1478656;
        FUN_020c32b4(p2, *(int *)(s + 56));
    } else if (FUN_02073198() == 0) {
        FUN_02071d0c(p1);
        *(short *)p1 = 13;
        p1[2] = 135168;
        p1[3] = 1486848;
        FUN_020c32b4(p1, *(int *)(s + 56));
    }
    if (!*(int *)(s + 60) && ((Base *)s)->v4()) {
        *(int *)(s + 6408) = 0;
        if (FUN_020a52e0(s) && *(int *)(s + 7192) != 2) {
            FUN_020c193c(0, 1, 0, 0, -1);
            if (*(int *)(s + 7192) == 1) FUN_020a5148(s, 2);
            else if (*(int *)(s + 7192) == 3) FUN_020a5148(s, 6);
            else FUN_020a521c();
        } else if (has_flag(*(unsigned short *)(s + 88))) FUN_020a5dc8(s, FUN_020a76b4);
        else if (has_flag(*(unsigned short *)(s + 90))) FUN_020a5dc8(s, FUN_020a7784);
        else FUN_020a5dc8(s, FUN_020a7704);
    }
}
