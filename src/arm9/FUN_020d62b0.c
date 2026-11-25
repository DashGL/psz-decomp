// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc2, exact bytes and relocation targets.
extern int FUN_020d5864(void *, int, int);
extern void *FUN_020d5774(unsigned int);
extern void FUN_020d6124(void *, void *, int);
extern void FUN_020d6190(void *, void *, int);
extern void FUN_020d61fc(void *, void *, int);

struct Pkt20 {
    unsigned char b[0x14];
};
struct Pkt21 {
    unsigned char b[0x15];
};

void FUN_020d62b0(unsigned char *a0, int a1, int a2) {
    unsigned char sp00[0x4c];
    if (FUN_020d5864(a0, a1, a2) == 0) {
        return;
    }
    {
        unsigned char r4 = a0[7];
        if (r4 == 5 || r4 == 7) {
            unsigned int v;
            void *r0;
            if (a1 < 0x14) {
                return;
            }
            *(struct Pkt20 *)sp00 = *(struct Pkt20 *)a0;
            v = *(unsigned int *)(sp00 + 8);
            r0 = FUN_020d5774(((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000u));
            if (r0 == 0) {
                return;
            }
            if (r4 == 5) {
                FUN_020d6124(r0, sp00, a2);
                return;
            }
            FUN_020d6190(r0, sp00, a2);
            return;
        }
        if (a1 >= 0x15) {
            unsigned int v;
            void *r0;
            *(struct Pkt21 *)sp00 = *(struct Pkt21 *)a0;
            v = *(unsigned int *)(sp00 + 8);
            r0 = FUN_020d5774(((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000u));
            if (r0 != 0) {
                FUN_020d61fc(r0, sp00, a2);
            }
        }
    }
}
