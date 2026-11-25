// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
void FUN_overlay_15__021206d0(void *, int, int);
void FUN_overlay_15__021206c0(void *, const void *, int);
int FUN_overlay_15__021207f4(const void *);
void FUN_overlay_15__021204f8(void *, int, const void *, int);
void FUN_overlay_15__021201cc(void *, int, int, int, signed char, signed char, const void *);
void FUN_overlay_15__02120224(void *, int, int, int);

extern void *data_0213c2c0[];

int FUN_overlay_15__02120080(int unused, const char *src, int sock) {
    unsigned char key[8];
    void *buf = data_0213c2c0[5];

    FUN_overlay_15__021206d0(buf, 0, 0x5dc);
    FUN_overlay_15__021206c0(key, src + 0x10, 8);
    FUN_overlay_15__021204f8(key, 8, (const void *)0x0213a8b0, FUN_overlay_15__021207f4((const void *)0x0213a8b0));
    FUN_overlay_15__021201cc(buf, 0x3000, 0, 0, 0, 0x11, key);
    FUN_overlay_15__02120224(buf, 0x18, 0, sock);
    return 0;
}
