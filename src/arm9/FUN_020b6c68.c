// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
//cpp
// Proof: notes/reference/resume2-upper-20261112/native-b6c68-proof.json
// flags: -O4,s

struct KeyB6C68 { unsigned char b[4]; };

struct ItemInfoB6C68 {
    int f0;
    unsigned int b0 : 4;
    unsigned int b1 : 7;
    unsigned int b2 : 7;
    unsigned int b3 : 7;
    unsigned int b4 : 7;
    signed char f8;
};

struct SelfB6C68 {
    virtual void slot00(); virtual void slot04(); virtual void slot08();
    virtual void slot0c(); virtual void slot10(); virtual void slot14();
    virtual unsigned char *slot18();
    unsigned char pad4[0x4d - 4];
    unsigned char f4d[5];
};

extern "C" struct ItemInfoB6C68 *FUN_020845a8(void *);
extern "C" int FUN_020b6200(void *, void *);
extern "C" int FUN_020b737c(void *, void *, int);

extern "C" int FUN_020b6c68(struct SelfB6C68 *self, const unsigned char *p, int idx) {
    int total = 0;
    if (idx >= 1 && idx <= 5) {
        unsigned char sp58[0x50];
        unsigned char sp08[0x50];
        KeyB6C68 sp04;
        int k = idx - 1;
        unsigned char *info;

        total += self->f4d[k];
        info = self->slot18();
        if (info != 0) {
            total = (total * info[3]) / 10;
        }
        if (p[0] == 1) {
            struct ItemInfoB6C68 *it;
            sp04 = *(const KeyB6C68 *)p;
            it = FUN_020845a8(&sp04);
            if (it != 0) {
                int add;
                switch (idx) {
                case 1:
                    add = it->b1;
                    break;
                case 2:
                    add = it->b2;
                    break;
                case 3:
                    add = it->b3;
                    break;
                case 4:
                    add = it->b4;
                    break;
                case 5:
                    add = it->f8;
                    break;
                default:
                    add = 0;
                    break;
                }
                total += add;
            }
        }
        FUN_020b6200(self, sp58);
        total += FUN_020b737c(self, sp58, k + 0x15);
        FUN_020b6200(self, sp08);
        total += FUN_020b737c(self, sp08, 0x1a);
    }
    return total;
}
