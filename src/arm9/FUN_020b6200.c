// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// FUN_020b6200 @ 0x020b6200 (complete body0x46; trailing halfword is alignment).
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// Native/output evidence: notes/sessions/matching-upper-resume-2026-11-12.md
//cpp
// flags: -O4,s
struct C_020b6200 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual int v14(void *, unsigned int);
};
struct Record_020b6200 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    int f4[3];
};

extern "C" int FUN_020b6200(C_020b6200 *a, Record_020b6200 *b) {
    int cnt = 0;
    unsigned int i = 0;
    for (; i < 5; i++) {
        Record_020b6200 *p = &b[i];
        if (a->v14(p, i) != 0) {
            cnt++;
        } else {
            p->f0 = 0xff;
            p->f1 = 0xff;
            p->f2 = 0xff;
            p->f3 = 0xff;
            for (int j = 0; j < 3; j++) {
                p->f4[j] = 0;
            }
        }
    }
    return cnt;
}
