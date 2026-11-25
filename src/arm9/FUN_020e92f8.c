// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct {
    u32 f0;          // 0x00
    u32 *f4;         // 0x04
    u32 f8;          // 0x08
    u8 f0c;          // 0x0c
    u8 f0d;          // 0x0d
    u8 pad0e[6];     // 0x0e..0x13
    u8 slot;         // 0x14
    u8 mode;         // 0x15
    u8 pad16[0xde];  // 0x16..0xf3
    u32 ids[0x22];   // 0xf4..0x17b
    u8 retry;        // 0x17c
    u8 pad17d[3];    // 0x17d..0x17f
    u32 f180;        // 0x180
    u32 f184;        // 0x184
    u32 f188;        // 0x188
    u32 f18c;        // 0x18c
    u32 f190;        // 0x190
    u8 pad194[0xc];  // 0x194..0x19f
    u32 state;       // 0x1a0
    u8 pad1a4[0x5c]; // 0x1a4..0x1ff
    u32 f200;        // 0x200
    u8 pad204[0xc];  // 0x204..0x20f
    u32 ips[0x20];   // 0x210..0x28f
    u16 ports[0x20]; // 0x290..0x2cf
} Ctx;
#define W(p,o) (*(u32 *)((p)+(o)))
#define H(p,o) (*(u16 *)((p)+(o)))
#define HTONS(x) ((u16)((((int)(x) >> 8) & 0xff) | (((int)(x) << 8) & 0xff00)))
extern Ctx *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern int FUN_020662b4(char *, u32, const char *, ...);
extern char *FUN_020d514c(u32, u32, void *);
extern int FUN_020d350c(u32, void *, char *, char *, int, int, u32, int);
extern int FUN_020e8a78(int);
extern int FUN_020e7000(u32), FUN_020e8a40(int), FUN_020e95c0(int);
extern int FUN_020e7194(u32), FUN_020e5964(u8 *), FUN_020e8a00(int);
extern unsigned long long FUN_02067e0c(void);
extern const char DAT_0210174c[];

void FUN_020e92f8(int result, u32 unused, u8 *address, u8 *request)
{
    Ctx *p, *q, *r;
    unsigned int slot;
    int category, code;
    unsigned long long tick;
    char text[12], *endpoint;
    (void)unused;
    if (FUN_020e961c()->state != 6 && FUN_020e961c()->state != 11) return;
    if (!request) return;
    if (!result) {
        W(request, 8) = 0;
        FUN_020e961c()->slot++;
        slot = FUN_020e961c()->slot;
        if (request[0]) {
            FUN_020e961c()->ips[slot] = W(address, 4);
            FUN_020e961c()->ports[slot] = HTONS(H(address, 2));
            FUN_020e961c()->retry = 0;
            FUN_020e961c()->f180 = 0;
            p = FUN_020e961c();
            p->f184 = 0;
            p->f188 = 0;
            if (FUN_020e961c()->state == 11) FUN_020e9628(12);
            else FUN_020e9628(7);
            FUN_020e961c()->f0c = 0;
            FUN_020662b4(text, 12, DAT_0210174c, FUN_020e961c()->f200);
            p = FUN_020e961c();
            q = FUN_020e961c();
            r = FUN_020e961c();
            endpoint = FUN_020d514c(q->ips[slot], r->ports[slot], 0);
            q = FUN_020e961c();
            code = FUN_020d350c(*p->f4, 0, endpoint, text, -1, 5000, q->f8, 0);
            if (code == 1) {
                FUN_020e8a78(code);
                return;
            }
            if (code) {
                if (FUN_020e7000(FUN_020e961c()->ids[slot])) {
                    return;
                }
            }
        } else {
            if (address) {
                slot--;
                FUN_020e961c()->ips[slot] = W(address, 4);
                FUN_020e961c()->ports[slot] = HTONS(H(address, 2));
            }
            p = FUN_020e961c();
            tick = FUN_02067e0c();
            p->f18c = (u32)tick;
            p->f190 = (u32)(tick >> 32);
            FUN_020e9628(7);
        }
    } else {
        if (!W(request, 8)) return;
        category = FUN_020e8a40(result);
        if (category != 2 && category != 1 && category != 3) return;
        if (!request[0]) {
            if (category == 1 || category == 3 || (category == 2 && request[1] >= 1)) {
                W(request, 8) = 0;
                if (FUN_020e95c0(0)) {
                    p = FUN_020e961c();
                    q = FUN_020e961c();
                    if (FUN_020e7194(p->ids[q->f0d])) {
                        return;
                    }
                }
                return;
            }
            request[1]++;
            if (FUN_020e8a00(FUN_020e5964(request))) {
                return;
            }
            return;
        }
        p = FUN_020e961c();
        tick = FUN_02067e0c();
        p->f184 = (u32)tick;
        p->f188 = (u32)(tick >> 32);
        if (category == 1 || category == 3 || (category == 2 && FUN_020e961c()->retry >= 1)) {
            W(request, 8) = 0;
            if (FUN_020e961c()->mode == 3 || FUN_020e961c()->mode == 2) {
                if (!FUN_020e95c0(1)) return;
            } else if (!FUN_020e95c0(0)) {
                return;
            }
            FUN_020e961c()->retry = 0;
            FUN_020e961c()->f180 = 0;
            p = FUN_020e961c();
            p->f184 = 0;
            p->f188 = 0;
            p = FUN_020e961c();
            q = FUN_020e961c();
            if (FUN_020e7000(p->ids[q->f0d + 1])) {
                return;
            }
        }
    }
}
