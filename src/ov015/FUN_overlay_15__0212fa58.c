// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
// check: exact
// target: FUN_overlay_15__0212fa58 @ 0x0212fa58 (size 0x5c, ov015)

struct Owner8c {
    void *a;
    void *b[3];
    void *c[3];
};
struct State8c {
    unsigned char sel;
    struct Owner8c *owner;
};
extern struct State8c data_0213e88c;
extern const unsigned short data_0213a4e6[];
extern const unsigned short data_0213a4e8[];
extern int FUN_overlay_15__0213587c(void *, int);
extern void FUN_overlay_15__02135aac(int, int, int);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__02135a10(void *, int, int);

void FUN_overlay_15__0212fa58(void)
{
    int idx = data_0213e88c.sel - 4;
    FUN_overlay_15__02135aac(0, 50, FUN_overlay_15__0213587c(data_0213e88c.owner->c[idx], 0));
    FUN_overlay_15__0213596c(
        data_0213e88c.owner->c[idx],
        -1,
        data_0213a4e6[(idx + 3) * 2],
        data_0213a4e8[(idx + 3) * 2]);
    FUN_overlay_15__02135a10(data_0213e88c.owner->c[idx], -1, 3);
}
