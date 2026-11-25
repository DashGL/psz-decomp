// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef void (*Callback)(void *);

struct WState {
    u8 pad0[8512];
    u8 buf[48];      /* 8512 = 0x2140 */
    u16 f8560;       /* 8560 = 0x2170 */
    u8 pad1[238];
    u32 state;       /* 8800 = 0x2260 */
    u32 flags;       /* 8804 = 0x2264 */
    u8 pad2[3];
    u8 f8811;        /* 8811 = 0x226b */
    u8 pad3[22];
    u16 f8834;       /* 8834 = 0x2282 */
    u8 pad4[116];
    u16 reason;      /* 8952 = 0x22f8 */
};

extern struct WState *DAT_02108c0c;
extern void FUN_0202e834(int);
extern void FUN_0202e79c(int, void *, u32, u32);
extern void FUN_0202f070(void *);
extern void FUN_0202ea58(void *);
extern int FUN_02054250(Callback, void *, void *, int, u16);
extern int FUN_02053cd4(Callback);

void FUN_0202f5c8(const u16 *packet) {
    u16 reason;
    int result;

    if (packet[1] == 0) {
        DAT_02108c0c->f8811 = 0;
        DAT_02108c0c->f8834 = 0;
        switch (DAT_02108c0c->state) {
        case 5:
        case 6:
            FUN_0202e834(3);
            FUN_0202e79c(1, 0, 0, 0x8f5);
            break;
        case 7:
            FUN_0202e834(3);
            FUN_0202e79c(0, 0, 0, 0x8fb);
            break;
        case 8:
            reason = DAT_02108c0c->reason;
            DAT_02108c0c->reason = 0;
            if (reason == 18 && (DAT_02108c0c->f8560 & 0x24) != 0x24) {
                u16 arg5;
                int arg4;
                DAT_02108c0c->f8560 |= 0x24;
                arg5 = ((DAT_02108c0c->flags & 0xc0000) == 0xc0000) ? 1 : 0;
                arg4 = ((DAT_02108c0c->flags & 0x30000) != 0x30000) ? 1 : 0;
                result = FUN_02054250(
                    FUN_0202f070,
                    DAT_02108c0c->buf,
                    0,
                    arg4,
                    arg5
                );
                switch (result) {
                case 2:
                    break;
                case 8:
                    FUN_0202e834(12);
                    FUN_0202e79c(1, DAT_02108c0c->buf, reason, 0x91c);
                    break;
                case 3:
                default:
                    FUN_0202e834(11);
                    FUN_0202e79c(7, DAT_02108c0c->buf, reason, 0x925);
                    break;
                }
            } else {
                FUN_0202e834(3);
                FUN_0202e79c(1, DAT_02108c0c->buf, reason, 0x92d);
            }
            break;
        case 9:
        case 12:
            FUN_0202e834(3);
            FUN_0202e79c(0, DAT_02108c0c->buf, 1, 0x935);
            break;
        case 10:
            FUN_0202e834(3);
            FUN_0202e79c(0, DAT_02108c0c->buf, 0, 0x93c);
            break;
        case 13:
            result = FUN_02053cd4(FUN_0202ea58);
            switch (result) {
            case 2:
                break;
            case 8:
                FUN_0202e834(12);
                FUN_0202e79c(1, 0, 0, 0x94a);
                break;
            case 3:
            default:
                FUN_0202e834(11);
                FUN_0202e79c(7, 0, 0, 0x953);
                break;
            }
            break;
        default:
            FUN_0202e834(11);
            FUN_0202e79c(7, 0, DAT_02108c0c->state, 0x959);
            break;
        }
    } else {
        FUN_0202e834(11);
        FUN_0202e79c(7, 0, 0, 0x960);
    }
}
