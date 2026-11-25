// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

typedef struct {
    u8 pad0[0x1340];
    u8 arr_1340[15][22];
    u16 arr_148a[15];
    u32 arr_14a8[15];
    void (*callback)(u32, u32, void *);
    u32 arr_14e8[15];
    u8 pad_1524[2];
    s8 arr_1526[15];
    u8 count_1535;
    u16 mask_1536;
    u8 pad_1538[0x21c];
    u16 arr_1754[15];
    u8 pad_1772[0xfa];
    struct {
        u8 buf[0x4e0];
        u16 mask_4e0;
        u16 mask_4e2;
        u16 mask_4e4;
        u8 active;
        u8 pad[0xed];
    } groups[16];
} Ctx;

typedef struct {
    u16 f0;
    u16 f2;
    u8 pad[12];
    u16 aid;
} EventData;

extern Ctx *DAT_021180ac;
extern void FUN_020600b0(u32, u32, void *);
extern void FUN_020656b8(void *, u32, u32);
extern u32 FUN_02064a84(u32);
extern void FUN_02060aa8(void *);
extern void FUN_0206106c(void);
extern void FUN_020621a4(void *, void *, u32, u32);
extern u32 FUN_020644b4(void);
extern u32 FUN_020644c8(void);
extern u32 FUN_020644dc(void);
extern void FUN_020622d0(u32, u32, u32);
extern void FUN_02061294(u32, u32);
extern void FUN_0206557c(u32, void *, u32);

void FUN_02060124(int event, EventData *data)
{
    switch (event) {
    case 21:
        FUN_020600b0(0, 1, data);
        break;
    case 0:
        if (data->aid != 0 && data->aid < 16) {
            FUN_020600b0(data->aid, 2, data);
        }
        break;
    case 1:
        if (data->aid != 0 && data->aid < 16) {
            u16 aid;
            s8 group;
            DAT_021180ac->arr_148a[data->aid - 1] = 0;
            FUN_020656b8(&DAT_021180ac->arr_14a8[data->aid - 1], 0, 4);
            FUN_020656b8(DAT_021180ac->arr_1340[data->aid - 1], 0, 22);
            FUN_02064a84(data->aid);
            DAT_021180ac->arr_1754[data->aid - 1] = 0;
            aid = data->aid;
            group = DAT_021180ac->arr_1526[aid - 1];
            if (group != -1) {
                u32 off = (u8)group * 0x5d4;
                *(u16 *)((u8 *)DAT_021180ac + off + 0x1d4e) &= ~(1 << aid);
                *(u16 *)((u8 *)DAT_021180ac + off + 0x1d50) |= (1 << aid);
                DAT_021180ac->arr_1526[aid - 1] = -1;
                *(u16 *)((u8 *)DAT_021180ac + off + 0x1d4c) &= ~(1 << aid);
            }
            if (DAT_021180ac->mask_1536 & (1 << data->aid)) {
                DAT_021180ac->count_1535--;
                DAT_021180ac->mask_1536 &= ~(1 << data->aid);
            }
            if (DAT_021180ac->arr_14e8[data->aid - 1] == 8) {
                FUN_020600b0(data->aid, 9, 0);
            }
            FUN_020600b0(data->aid, 3, data);
            DAT_021180ac->arr_14e8[data->aid - 1] = 0;
        }
        break;
    case 3:
        FUN_02060aa8(data);
        break;
    case 17:
        break;
    case 25:
        FUN_0206106c();
        break;
    case 28:
        {
            u8 i;
            u32 a, b, c;
            for (i = 0; i < 16; i++) {
                if (DAT_021180ac->groups[i].active && DAT_021180ac->groups[i].mask_4e4) {
                    FUN_020621a4(DAT_021180ac->groups[i].buf, DAT_021180ac->arr_1340,
                                 DAT_021180ac->groups[i].mask_4e2, DAT_021180ac->groups[i].mask_4e4);
                    DAT_021180ac->groups[i].mask_4e4 = 0;
                }
            }
            a = FUN_020644b4();
            b = FUN_020644c8();
            c = FUN_020644dc();
            FUN_020622d0(a, b, c);
        }
        break;
    case 255:
        switch (data->f2) {
        case 1:
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
            FUN_02061294(0, 9);
            break;
        case 0:
        case 2:
        case 3:
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        default:
            FUN_02061294(0, 8);
            break;
        }
        break;
    case 256:
        switch (data->f0) {
        case 0:
        case 7:
        case 8:
        case 13:
        case 14:
        case 15:
        case 17:
        case 18:
        case 21:
        case 25:
        case 29:
            FUN_02061294(0, 9);
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        case 10:
        case 11:
        case 12:
        case 16:
        case 19:
        case 20:
        case 22:
        case 23:
        case 24:
        case 26:
        case 27:
        case 28:
        default:
            FUN_02061294(0, 8);
            break;
        }
        break;
    }

    if (event == 17) {
        void (*callback)(u32, u32, void *) = DAT_021180ac->callback;
        FUN_0206557c(0, DAT_021180ac, 0x7d00);
        DAT_021180ac = 0;
        if (callback) {
            callback(0, 12, 0);
        }
    }
}
