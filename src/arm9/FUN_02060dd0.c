// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct { u32 offset; int size; u32 dst; u32 state; } Rec;
typedef struct { u32 count; u32 pad[11]; Rec recs[4]; } Owner;
typedef struct { u32 pad[4]; Rec *rec; Owner *owner; } Task;
typedef struct {
    u8 pad0[0x5a4]; u32 seg_base[7]; u16 field_48, field_4a, field_4c, pad_4e, pad_50;
    u8 active, pad_53; Owner *owner; u32 *seg_addr;
} Slot;
typedef struct {
    u8 pad0[0x1524]; u8 enabled, cur; u8 pad1[0x262]; Slot slots[16];
    u8 pad2[0x7ce0 - 0x1788 - 16 * 0x5d4]; Task task;
} State;
struct Result { u32 start, length, position; u8 segment; };
struct Header { u8 kind, unused; u16 slot, index; };
extern State *DAT_021180ac;
extern void FUN_020611ec(u32);
extern int FUN_02061d64(struct Result *, u32 *, u32, Slot *);
extern u8 *FUN_02064ac8(struct Header *, State *);
extern int FUN_02064610(Owner *, u32, u8 *, u32);
extern int FUN_02064870(Task *);
extern void FUN_02068728(void);
extern u32 FUN_02060d2c(Task *);
extern void FUN_02064888(Task *, u32 (*)(Task *), int, u32);
extern u32 FUN_02061f90(u32, u32, State *);
u32 FUN_02060dd0(void) {
    struct Result result; struct Header header;
    u8 i; u8 *encoded; u32 address; Owner *owner;
    if (!DAT_021180ac->enabled) return 21;
    for (i = 0; i < 16; i++) {
        DAT_021180ac->cur = (u8)((DAT_021180ac->cur + 1) % 16);
        if (DAT_021180ac->slots[DAT_021180ac->cur].active && DAT_021180ac->slots[DAT_021180ac->cur].field_4c) break;
    }
    if (i == 16) return 21;
    FUN_020611ec(DAT_021180ac->cur);
    if (!FUN_02061d64(&result, DAT_021180ac->slots[DAT_021180ac->cur].seg_base, DAT_021180ac->slots[DAT_021180ac->cur].field_48, &DAT_021180ac->slots[DAT_021180ac->cur])) return 21;
    header.kind = 4; header.slot = DAT_021180ac->cur; header.index = DAT_021180ac->slots[DAT_021180ac->cur].field_48;
    encoded = FUN_02064ac8(&header, DAT_021180ac);
    address = result.position - ((const State *)DAT_021180ac)->slots[((const State *)DAT_021180ac)->cur].seg_base[result.segment] + ((const State *)DAT_021180ac)->slots[((const State *)DAT_021180ac)->cur].seg_addr[result.segment];
    owner = ((const State *)DAT_021180ac)->slots[((const State *)DAT_021180ac)->cur].owner;
    if (!FUN_02064610(owner, address, encoded, result.length)) {
        Task *task = &DAT_021180ac->task;
        if (!FUN_02064870(task)) {
            if (owner->count) { owner->count--; }
            else {
                Rec *recs = owner->recs; Rec *best = 0; int j;
                for (j = 0; j < 4; j++) {
                    if (recs[j].state == 2 && (!best || best->offset > recs[j].offset)) best = &recs[j];
                }
                if (!best) FUN_02068728();
                owner->count = 2; best->state = 1; best->offset = address & ~31u;
                task->rec = best; task->owner = owner;
                FUN_02064888(task, FUN_02060d2c, 0, 4);
            }
        }
        return 21;
    }
    return FUN_02061f90(result.length + 6, DAT_021180ac->slots[DAT_021180ac->cur].field_4c, DAT_021180ac);
}
