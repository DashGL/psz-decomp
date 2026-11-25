// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_0203bbac @ 0x0203bbac (0x30, Thumb), canonical exact bytes and relocs.
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// Language/ABI evidence: notes/sessions/matching-low-2026-11-12.md
// ROM loads slot 0xd4 through incoming r0 before saving the receiver.
// Plain C emits the same size but moves the receiver before loading the table.
// Concrete primary table 020f988c slot 53 points to 0203ba5c (Thumb bit set),
// whose ABI is int(receiver, signed index, enabled, mode); result unused here.
// Unused virtual slots are layout declarations only; no executable bodies.
//cpp
// flags: -O4,s
struct Receiver_0203bbac {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual int v53(int, int, int);
};
extern "C" void FUN_0203bbac(Receiver_0203bbac *receiver,int value) {
    receiver->v53(value,0,1);
    char *s=(char *)receiver;
    *(unsigned int *)(s+0x1f8)=value; s[0x247]=0; *(unsigned int *)(s+0xf8)|=0x80000;
}
