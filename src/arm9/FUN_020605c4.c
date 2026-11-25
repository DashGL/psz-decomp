// flags: -O2,p -noThumb
#pragma opt_common_subs off
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

typedef struct {
    u8 lo : 4;
    u8 hi : 4;
    u8 rest[21];
} PeerInfo;

typedef struct {
    u8 pad0[0x1340];
    PeerInfo arr_1340[15];
    u16 arr_148a[15];
    u32 arr_14a8[15];
    void (*callback)(u32, u32, void *);
    u32 arr_14e8[15];
    u8 pad_1524[2];
    u8 arr_1526[15];
    u8 count_1535;
    u16 mask_1536;
    u8 pad_1538[0x21c];
    u16 arr_1754[15];
    u8 pad_1772[0xfa];
    struct {
        u8 buf[0x4d4];
        u8 *resource;
        u32 pad_4d8;
        u16 f4dc;
        u16 f4de;
        u16 mask_4e0;
        u16 mask_4e2;
        u16 mask_4e4;
        u8 active;
        u8 pad[0xed];
    } groups[16];
} Ctx;

typedef struct {
    u32 f0;
    u8 f4[22];
    u16 f1a;
    u8 f1c;
} Payload;

typedef struct {
    u8 cmd;
    u8 pad1;
    u16 f2;
    u32 rest[4];
} Decoded;

extern Ctx *DAT_021180ac;
extern u32 DAT_021125f4;
extern u8 *FUN_02064b4c(u8 *, void *, u16);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_020600b0(u32, u32, void *);
extern u32 FUN_02061268(u16, u16);

void FUN_020605c4(u8 *packet, u16 peer)
{
    Decoded decoded;
    Payload payload;
    u32 phase;
    u8 *data;

    if (peer == 0 || peer > 15) {
        return;
    }

    data = FUN_02064b4c(packet + 10, &decoded, peer);
    phase = DAT_021180ac->arr_14e8[peer - 1];

    switch (decoded.cmd) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 11:
        break;
    case 7:
        if (phase == 2) {
            if (data == 0) {
                return;
            }
            FUN_02065774(data, &payload, 29);
            DAT_021180ac->arr_14a8[peer - 1] = payload.f0;
            DAT_021180ac->arr_148a[peer - 1] = payload.f1a;
            FUN_02065774(payload.f4, &DAT_021180ac->arr_1340[peer - 1], 22);
            DAT_021180ac->arr_1340[peer - 1].hi = (u8)peer;
            FUN_020600b0(peer, 10, payload.f4);
        }
        if (phase == 10) {
            u8 selected = data[28];
            u8 count = 0;
            if (selected >= 16 || DAT_021180ac->groups[selected].active == 0 ||
                DAT_021180ac->arr_14a8[peer - 1] != *(u32 *)(DAT_021180ac->groups[selected].resource + 20)) {
                DAT_021180ac->arr_1754[peer - 1] = 4;
            } else {
                u8 i;
                for (i = 0; i < 16; i++) {
                    if (DAT_021180ac->groups[selected].mask_4e2 & (1 << i)) {
                        count++;
                    }
                }
                if (count >= DAT_021180ac->groups[selected].resource[24]) {
                    DAT_021180ac->arr_1754[peer - 1] = 0;
                    FUN_020600b0(peer, 11, 0);
                    return;
                }
            }
            switch (DAT_021180ac->arr_1754[peer - 1]) {
            case 3:
                if (DAT_021180ac->mask_1536 & (1 << peer)) {
                    return;
                }
                DAT_021180ac->count_1535++;
                DAT_021180ac->mask_1536 |= (1 << peer);
                DAT_021180ac->arr_1526[peer - 1] = selected;
                DAT_021180ac->groups[selected].mask_4e2 |= (1 << peer);
                DAT_021180ac->groups[selected].mask_4e4 |= (1 << peer);
                DAT_021180ac->arr_1754[peer - 1] = 0;
                FUN_020600b0(peer, 5, 0);
                break;
            case 4:
                DAT_021180ac->arr_1754[peer - 1] = 0;
                FUN_020600b0(peer, 4, 0);
                break;
            }
        }
        break;
    case 8:
        if (phase == 5) {
            FUN_020600b0(peer, 14, 0);
        } else if (phase == 14) {
            if (DAT_021180ac->arr_1754[peer - 1] == 2) {
                u8 selected = DAT_021180ac->arr_1526[peer - 1];
                DAT_021180ac->groups[selected].mask_4e0 |= (1 << peer);
                DAT_021180ac->groups[selected].f4dc = 0;
                DAT_021180ac->arr_1754[peer - 1] = 0;
                FUN_020600b0(peer, 6, 0);
            }
        }
        break;
    case 9:
        if (phase == 6) {
            u8 selected = DAT_021180ac->arr_1526[peer - 1];
            if (selected != 255) {
                DAT_021180ac->groups[selected].f4de =
                    (u16)FUN_02061268(DAT_021180ac->groups[selected].f4de, decoded.f2);
                DAT_021125f4 |= (1 << selected);
            }
        }
        break;
    case 10:
        if (phase == 6) {
            u8 selected = DAT_021180ac->arr_1526[peer - 1];
            if (selected != 255) {
                DAT_021180ac->groups[selected].mask_4e0 &= ~(1 << peer);
                FUN_020600b0(peer, 7, 0);
            }
        } else if (phase == 7) {
            if (DAT_021180ac->arr_1754[peer - 1] == 5) {
                DAT_021180ac->arr_1754[peer - 1] = 0;
                FUN_020600b0(peer, 8, 0);
            }
        }
        break;
    }
}
