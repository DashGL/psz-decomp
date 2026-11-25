// FUN_02053dfc @ 0x02053dfc (0xdc, arm) - ported from FUN_02035b74 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern int FUN_02052fe4(int, int);
extern void FUN_02053ed8(void *);
extern void FUN_02052de4(int, void *);
extern void FUN_020673f0(void *, u32);
extern int FUN_02052e54(int, u16, ...);

struct Req {
    void *buf;
    u16 len;
    u8 pad[0x14 - 6];
    u16 f14;
    u8 pad2[0x34 - 0x16];
    u16 f34;
    u16 f36;
};

int FUN_02053dfc(void *cb, struct Req *req) {
    int err = FUN_02052fe4(1, 2);
    if (err != 0) {
        return err;
    }
    if (req == 0) {
        return 6;
    }
    if (req->len != 0 && req->buf == 0) {
        return 6;
    }
    if (req->f34 + (req->f14 != 0 ? 0x2a : 0) > 0x200 ||
        req->f36 + (req->f14 != 0 ? 6 : 0) > 0x200) {
        return 6;
    }
    FUN_02053ed8(req);
    FUN_02052de4(7, cb);
    FUN_020673f0(req, 0x40);
    if (req->len != 0) {
        FUN_020673f0(req->buf, req->len);
    }
    err = FUN_02052e54(7, 1, req);
    return (err == 0) ? 2 : err;
}
