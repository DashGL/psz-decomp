// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
struct Rc4Ctx {
    int i;
    int j;
    void *sbox;
    int len;
};

unsigned char FUN_overlay_15__02120460(const void *, int);
void *FUN_overlay_15__0211e640(int);
void FUN_overlay_15__0211e650(void *);
unsigned short FUN_overlay_15__02120808(void);
void FUN_overlay_15__021206c0(void *, const void *, int);
void FUN_overlay_15__02120390(struct Rc4Ctx *, const void *, int, int);
void FUN_overlay_15__021203f4(struct Rc4Ctx *, void *, const void *, int);

int FUN_overlay_15__0212028c(const void *src, void *dst, int len, unsigned char *crc_out, void *rnd_out, const void *key, int key_len) {
    unsigned short rnd;
    struct Rc4Ctx ctx;

    *crc_out = FUN_overlay_15__02120460(src, len);
    ctx.sbox = FUN_overlay_15__0211e640(len);
    if (ctx.sbox == 0) {
        return -1;
    }
    rnd = FUN_overlay_15__02120808();
    FUN_overlay_15__021206c0(rnd_out, &rnd, 2);
    FUN_overlay_15__021206c0((void *)0x0213d028, rnd_out, 2);
    FUN_overlay_15__021206c0((void *)0x0213d02a, key, key_len);
    FUN_overlay_15__02120390(&ctx, (const void *)0x0213d028, key_len + 2, len);
    FUN_overlay_15__021203f4(&ctx, dst, src, len);
    FUN_overlay_15__0211e650(ctx.sbox);
    return 0;
}
