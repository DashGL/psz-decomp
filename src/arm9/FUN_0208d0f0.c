// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
//cpp
// Proof: notes/reference/resume2-upper-20261112/native-8d0f0-proof.json
// flags: -O4,s
typedef struct {
    int w[0x21];
} BigStruct_0208d0f0;

struct Actor_0208d0f0 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2c();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3c();
    virtual int slot40();
};
extern "C" unsigned char *FUN_02085640(void);
extern "C" unsigned char *FUN_0208555c(int);
extern "C" void FUN_0203bb68(void *, short);
extern "C" void FUN_0203bb88(void *, unsigned char, short);
extern "C" void FUN_0203bb14(void *, unsigned short, short);
extern "C" void FUN_0203bbac(void *, short);

extern "C" void FUN_0208d0f0(unsigned char *r4) {
    BigStruct_0208d0f0 sp04;
    unsigned char *r5 = FUN_02085640();
    int r7;
    if (r5 == 0) {
        return;
    }
    for (r7 = 0; r7 < 4; r7++) {
        signed char *p = (signed char *)(r4 + r7);
        unsigned char *r6 = FUN_0208555c(p[4]);
        sp04 = *(BigStruct_0208d0f0 *)(r5 + 0xd94);
        if (p[4] == *(int *)(r5 + 0xfc)) {
            switch (*(short *)(r4 + 0xa)) {
            case 1:
                FUN_0203bb68(r5, *(short *)(r4 + 8));
                break;
            case 2:
                FUN_0203bb88(r5, *(unsigned char *)((unsigned char *)&sp04 + 0x80), *(short *)(r4 + 8));
                break;
            case 3:
                FUN_0203bb88(r5, *(unsigned char *)((unsigned char *)&sp04 + 0x80), *(short *)(r4 + 8));
                FUN_0203bb14(r5, *(unsigned short *)((unsigned char *)&sp04 + 0x7c), *(short *)(r4 + 8));
                break;
            case 4:
                FUN_0203bb88(r5, *(unsigned char *)((unsigned char *)&sp04 + 0x80), *(short *)(r4 + 8));
                /* ROM selector4 continues through all three updates. */
                FUN_0203bb14(r5, *(unsigned short *)((unsigned char *)&sp04 + 0x7c), *(short *)(r4 + 8));
                FUN_0203bbac(r5, *(short *)(r4 + 8));
                break;
            }
        } else if (r6 != 0 && (((Actor_0208d0f0 *)r6)->slot40() == 3 ? 1 : 0) != 0) {
            switch (*(short *)(r4 + 0xa)) {
            case 3:
                FUN_0203bb14(r6, *(unsigned short *)((unsigned char *)&sp04 + 0x7c), *(short *)(r4 + 8));
                break;
            case 4:
                FUN_0203bb14(r6, *(unsigned short *)((unsigned char *)&sp04 + 0x7c), *(short *)(r4 + 8));
                FUN_0203bbac(r6, *(short *)(r4 + 8));
                break;
            }
        }
    }
}
