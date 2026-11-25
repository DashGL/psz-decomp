// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9e, exact bytes and relocation targets.
//cpp
// flags: -O4,p
// Proof: notes/reference/resume2-upper-20261112/native-8d2e0-proof.json
struct Packet_0208d2e0 {
    short s0;
    short s2;
    short s4;
    short s6;
    short s8;
    signed char ba;
    signed char bb;
    signed char bc;
    signed char bd;
    signed char be;
    unsigned char bf;
    unsigned char b10;
    unsigned char b11;
    unsigned char b12;
    signed char b13;
    signed char b14;
    signed char b15;
    signed char b16;
    signed char b17;
};
struct Input_0208d2e0 {
    int f0;
    int f4;
    struct Packet_0208d2e0 sub;
    char f20[12];
};
struct Actor_0208d2e0 {
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
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4c();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    virtual void slot5c();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual void slot6c();
    virtual void slot70();
    virtual void slot74();
    virtual void slot78();
    virtual void slot7c();
    virtual void slot80(Packet_0208d2e0 *, char *);
};
extern "C" char *FUN_02085640(void);
extern "C" void FUN_02043a5c(struct Packet_0208d2e0 *);

extern "C" void FUN_0208d2e0(struct Input_0208d2e0 *param_1) {
    int id = param_1->f4;
    char *obj = FUN_02085640();
    if (obj != 0 && id == *(int *)(obj + 0xfc)) {
        struct Packet_0208d2e0 local;
        local.s0 = param_1->sub.s0;
        local.s2 = param_1->sub.s2;
        local.s4 = param_1->sub.s4;
        local.s6 = param_1->sub.s6;
        local.s8 = param_1->sub.s8;
        local.ba = param_1->sub.ba;
        local.bb = param_1->sub.bb;
        local.bc = param_1->sub.bc;
        local.bd = param_1->sub.bd;
        local.be = param_1->sub.be;
        local.bf = param_1->sub.bf;
        local.b10 = param_1->sub.b10;
        local.b11 = param_1->sub.b11;
        local.b12 = param_1->sub.b12;
        local.b13 = param_1->sub.b13;
        local.b14 = param_1->sub.b14;
        local.b15 = param_1->sub.b15;
        local.b16 = param_1->sub.b16;
        local.b17 = param_1->sub.b17;
        FUN_02043a5c(&local);
        ((Actor_0208d2e0 *)obj)->slot80(&local, param_1->f20);
    }
}
