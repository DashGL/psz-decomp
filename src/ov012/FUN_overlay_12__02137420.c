// FUN_overlay_12__02137420 @ 0x02137420 (0xe8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0xe8 candidate=0xe8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {
    unsigned char b[4];
} Id;
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;

extern void *FUN_02086e3c(void), *FUN_020870c4(void *);
extern int FUN_020848d0(int, int);
extern void FUN_02071d0c(Draw *), FUN_02090b44(Draw *), FUN_020c32b4(Draw *, int);
extern unsigned int *FUN_02084568(const Id *);
extern unsigned short *FUN_020845a8(const Id *);
extern const unsigned short data_0213c10c[];

void FUN_overlay_12__02137420(int *self)
{
    signed char *player = (signed char *)FUN_020870c4(FUN_02086e3c());
    int cur_class = FUN_020848d0(player[0x20], player[0x22]);
    Draw d;
    int i, allowed;

    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    d.x = 0xad000;
    d.y = 0x15a000;
    for (i = 0; i < 7; i++) {
        if (i == cur_class) {
            d.a = 0x5c;
            FUN_020c32b4(&d, self[18]);
        }
        allowed = 0;
        switch (((unsigned char *)self)[0x13c]) {
        case 0: {
            Id id = *(const Id *)((char *)self + 0x13c);
            unsigned int *info = FUN_02084568(&id);

            if (info) {
                allowed = ((info[0] >> 20) & (1 << i)) != 0;
            }
            break;
        }
        case 1: {
            Id id = *(const Id *)((char *)self + 0x13c);
            unsigned short *info = FUN_020845a8(&id);

            if (info) {
                allowed = (((unsigned int)info[7] >> 2) & (1 << i)) != 0;
            }
            break;
        }
        }
        d.a = allowed ? data_0213c10c[i] : 0x4c;
        FUN_020c32b4(&d, self[18]);
        d.x += 0xb000;
    }
}
