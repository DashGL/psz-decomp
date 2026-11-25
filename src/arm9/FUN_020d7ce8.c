// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x13c, exact bytes and relocation targets.
// flags: -O4,p
struct Srvd7ce8 {
    char pad00[0x14];
    unsigned char f14;
    char pad15[7];
    int f1c;
    int f20;
    char pad24[4];
    unsigned char f28;
};

struct Ctxd7ce8 {
    char pad00[8];
    char f08[0x24];
    unsigned char f2c[0x14];
    int f40;
    void (*f44)(struct Ctxd7ce8 *, int, struct Srvd7ce8 *, int);
    int f48;
};

extern const char *DAT_020ffb78[];
extern const char DAT_020fff8c[];

extern int FUN_02005898(const char *);
extern void FUN_020d7a08(void *, struct Srvd7ce8 *);
extern void FUN_020d7a50(struct Ctxd7ce8 *, struct Srvd7ce8 *);
extern int FUN_020d915c(const char *, int);
extern int FUN_020d7790(const char *);
extern void FUN_020d810c(struct Srvd7ce8 *, const char *, const char *);
extern int FUN_02003f38(const char *, const char *, int);
extern void FUN_020d8494(struct Srvd7ce8 *, const char *, int);
extern void FUN_020d8364(struct Srvd7ce8 *, const char *, int);
extern int FUN_020c7824(void);

void FUN_020d7ce8(struct Ctxd7ce8 *ctx, struct Srvd7ce8 *srv, const char *buf, int len) {
    if (*buf != 0 && *buf != 9) {
        return;
    }
    len -= 5;
    buf += 5;
    if ((srv->f14 & 0x80) != 0) {
        srv->f14 &= 0x7f;
        if (len > 0) {
            srv->f20 = FUN_02005898(buf);
            FUN_020d7a08(ctx->f08, srv);
            FUN_020d7a50(ctx, srv);
            ctx->f44(ctx, 3, srv, ctx->f48);
            return;
        }
    } else if ((srv->f14 & 4) != 0) {
        int i;
        for (i = 0; i < ctx->f40; i++) {
            int slen = FUN_020d915c(buf, len);
            if (slen < 0) {
                break;
            }
            if (FUN_020d7790(DAT_020ffb78[ctx->f2c[i]]) == 0) {
                FUN_020d810c(srv, DAT_020ffb78[ctx->f2c[i]], buf);
            }
            buf += slen;
            len -= slen;
        }
        srv->f14 |= 0x41;
    } else {
        if (*buf != 0 && FUN_02003f38(DAT_020fff8c, buf, 8) == 0) {
            FUN_020d8494(srv, buf, len);
            if (srv->f28 != 0xff) {
                return;
            }
            srv->f14 |= 0x43;
        } else {
            FUN_020d8364(srv, buf, len);
            srv->f14 |= 0x43;
        }
    }
    srv->f14 &= 0xf3;
    srv->f1c = FUN_020c7824() - srv->f1c;
    FUN_020d7a08(ctx->f08, srv);
    ctx->f44(ctx, 0, srv, ctx->f48);
}
