// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,p

struct InnerCA8DC {
    unsigned char pad0[0x198];
    int f198;
    unsigned char pad19c[0x210 - 0x19c];
    char s210[1];
};

struct SelfCA8DC {
    struct InnerCA8DC *inner;
};

extern const char DAT_020fd100[];
extern const char DAT_020fd0d4[];
extern const char DAT_020fd23c[];
extern const char DAT_020fd154[];
extern const char DAT_020fd0f8[];
extern void FUN_020d183c(char *, const void *, int);
extern void FUN_020cb184(struct SelfCA8DC *, char *, const char *);
extern void FUN_020cb1a0(struct SelfCA8DC *, char *, int);

int FUN_020ca8dc(struct SelfCA8DC *self, int a1, int a2, const void *a3) {
    char buf[0xdb0];
    struct InnerCA8DC *inner = self->inner;

    FUN_020d183c(buf, a3, 0xdad);
    FUN_020cb184(self, inner->s210, DAT_020fd100);
    FUN_020cb1a0(self, inner->s210, a2);
    FUN_020cb184(self, inner->s210, DAT_020fd0d4);
    FUN_020cb1a0(self, inner->s210, inner->f198);
    FUN_020cb184(self, inner->s210, DAT_020fd23c);
    FUN_020cb1a0(self, inner->s210, a1);
    FUN_020cb184(self, inner->s210, DAT_020fd154);
    FUN_020cb184(self, inner->s210, buf);
    FUN_020cb184(self, inner->s210, DAT_020fd0f8);
    return 0;
}
