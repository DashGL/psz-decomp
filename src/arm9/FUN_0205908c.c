// flags: -O4,p -noThumb
typedef unsigned int u32;
struct Sub5908c {
    char pad[0x2c];
    u32 f2c;
    u32 f30;
};
struct S5908c {
    int f0;
    int f4;
    struct Sub5908c *f8;
    char pad[0x24];
    u32 f30;
    u32 f34;
    u32 f38;
};
extern int FUN_020587ec(void *, void *, int);
extern int FUN_0205860c(struct S5908c *, int);

int FUN_0205908c(struct S5908c *a) {
    struct { u32 top; u32 bottom; } resp;
    struct { struct Sub5908c *arc; u32 pos; } req;
    struct Sub5908c *arc = a->f8;
    u32 id = a->f34;
    u32 pos = id * 8;
    if (pos >= arc->f30) {
        return 1;
    }
    req.arc = arc;
    req.pos = arc->f2c + pos;
    {
        int r = FUN_020587ec(&req, &resp, 8);
        if (r != 0) return r;
    }
    a->f30 = resp.top;
    a->f34 = resp.bottom;
    a->f38 = id;
    return FUN_0205860c(a, 7);
}
