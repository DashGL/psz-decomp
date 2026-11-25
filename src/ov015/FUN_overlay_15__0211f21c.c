// version: 2.0/sp1p5
// flags: -O4,p
extern void FUN_overlay_15__021206c0(void *, const void *, unsigned int);
extern void FUN_overlay_15__021206d0(void *, unsigned char, unsigned int);
extern int FUN_overlay_15__021207f4(const char *);
extern int FUN_overlay_15__0211f414(const char *, int);

struct CfgG_0213c2c0 {
    unsigned char pad[0x2c];
    unsigned int f2c;
    unsigned int f30;
};

extern struct CfgG_0213c2c0 DAT_0213c2c0;
extern unsigned char DAT_0213c988[];
extern unsigned char DAT_0213cab8[];
extern unsigned char DAT_0213cbe8[];
extern unsigned char DAT_0213cc58[];

int FUN_overlay_15__0211f21c(unsigned char *p) {
    unsigned char *out = p + 0x117;
    unsigned char *a = DAT_0213c988;
    unsigned char *b = DAT_0213cab8;
    unsigned char *c = DAT_0213cbe8;
    unsigned char *d = DAT_0213cc58;
    if (!out) {
        return -1;
    }
    *(unsigned short *)p = (unsigned short)(DAT_0213c2c0.f2c & DAT_0213c2c0.f30);
    FUN_overlay_15__021206d0(out, 0, 340);
    if (*(unsigned short *)p & 1) {
        FUN_overlay_15__021206c0(out + 0, a + 0x30, *(const unsigned int *)(a + 4));
        FUN_overlay_15__021206c0(out + 6, a + 0x70, *(const unsigned int *)(a + 4));
        FUN_overlay_15__021206c0(out + 12, a + 0xb0, *(const unsigned int *)(a + 4));
        FUN_overlay_15__021206c0(out + 18, a + 0xf0, *(const unsigned int *)(a + 4));
        if (FUN_overlay_15__0211f414((const char *)(a + 8), FUN_overlay_15__021207f4((const char *)(a + 8)))) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 24, a + 8, FUN_overlay_15__021207f4((const char *)(a + 8)));
    }
    if (*(unsigned short *)p & 2) {
        FUN_overlay_15__021206c0(out + 57, b + 0x30, *(const unsigned int *)(b + 4));
        FUN_overlay_15__021206c0(out + 71, b + 0x70, *(const unsigned int *)(b + 4));
        FUN_overlay_15__021206c0(out + 85, b + 0xb0, *(const unsigned int *)(b + 4));
        FUN_overlay_15__021206c0(out + 99, b + 0xf0, *(const unsigned int *)(b + 4));
        if (FUN_overlay_15__0211f414((const char *)(b + 8), FUN_overlay_15__021207f4((const char *)(b + 8)))) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 113, b + 8, FUN_overlay_15__021207f4((const char *)(b + 8)));
    }
    if (*(unsigned short *)p & 4) {
        if (FUN_overlay_15__0211f414((const char *)(c + 0x30), *(const int *)(c + 4) - 1)) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 146, c + 0x30, *(const unsigned int *)(c + 4));
        if (FUN_overlay_15__0211f414((const char *)(c + 8), FUN_overlay_15__021207f4((const char *)(c + 8)))) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 210, c + 8, FUN_overlay_15__021207f4((const char *)(c + 8)));
    }
    if (*(unsigned short *)p & 8) {
        if (FUN_overlay_15__0211f414((const char *)(d + 0x30), *(const int *)(d + 4) - 1)) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 243, d + 0x30, *(const unsigned int *)(d + 4));
        if (FUN_overlay_15__0211f414((const char *)(d + 8), FUN_overlay_15__021207f4((const char *)(d + 8)))) {
            goto fail;
        }
        FUN_overlay_15__021206c0(out + 307, d + 8, FUN_overlay_15__021207f4((const char *)(d + 8)));
    }
    p[0x116] = 0;
    return 0;
fail:
    FUN_overlay_15__021206d0(out, 0, 340);
    return -1;
}
