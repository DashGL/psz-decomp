// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

struct Slot {
    u8 record[0xe4];       // +0x000 (0x1788)
    u8 f_e4[0x4b3];        // +0x0e4 (0x186c)
    u8 serial;             // +0x597 (0x1d1f)
    u8 pad_598;            // +0x598 (0x1d20)
    u8 slot_id;            // +0x599 (0x1d21)
    u8 pad_59a[10];        // +0x59a (0x1d22)
    u8 f_5a4[0x14];        // +0x5a4 (0x1d2c)
    u8 *resource;          // +0x5b8 (0x1d40)
    u8 *settings;          // +0x5bc (0x1d44)
    u8 pad_5c0[6];         // +0x5c0 (0x1d48)
    u16 f_5c6;             // +0x5c6 (0x1d4e)
    u8 pad_5c8[2];         // +0x5c8 (0x1d50)
    u8 active;             // +0x5ca (0x1d52)
    u8 pad_5cb;            // +0x5cb (0x1d53)
    u8 *f_5cc;             // +0x5cc (0x1d54)
    u8 *f_5d0;             // +0x5d0 (0x1d58)
}; // size = 0x5d4

struct Pool {
    u8 pad0[0x1300];
    u8 f_1300[0x224];
    u8 count;              // 0x1524
    u8 pad_1525[0x263];
    struct Slot slots[16]; // 0x1788 .. 0x74c8
    u8 pad_74c8[0x18];
    u8 f_74e0[0x800];      // 0x74e0
    u8 f_7ce0[0x100];      // 0x7ce0
};

extern struct Pool *DAT_021180ac;
extern u8 DAT_021125f8;
extern u32 FUN_020683d4(void), FUN_020683e8(u32);
extern int FUN_0206453c(void), FUN_02064840(void);
extern void FUN_02061aac(void *, void *);
extern void FUN_02065774(const void *, void *, u32);
extern int FUN_02061c98(void *, void *);
extern void FUN_02062014(void *, void *, void *), FUN_0206223c(void *);
extern void FUN_0206485c(void *), FUN_020647c0(void *, u32);

int FUN_0206181c(u8 *resource, u8 *settings) {
    u8 slot = 0xff;
    u32 saved;
    u8 i;
    u8 *record;

    saved = FUN_020683d4();
    if (!FUN_0206453c()) {
        FUN_020683e8(saved);
        return 0;
    }
    if (DAT_021180ac->count + 1 > 16) {
        FUN_020683e8(saved);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (DAT_021180ac->slots[i].resource == resource) {
            FUN_020683e8(saved);
            return 0;
        }
        if (DAT_021180ac->slots[i].active == 0) {
            slot = i;
            break;
        }
    }
    if (i == 16) {
        FUN_020683e8(saved);
        return 0;
    }
    DAT_021180ac->slots[slot].resource = resource;
    record = DAT_021180ac->slots[slot].record;
    FUN_02061aac(record, settings);
    FUN_02065774(resource + 0x1c, record + 0xc4, 0x20);
    if (!FUN_02061c98(DAT_021180ac->slots[slot].f_5a4, record)) {
        FUN_020683e8(saved);
        return 0;
    }
    FUN_02062014(DAT_021180ac->slots[slot].f_e4, resource, DAT_021180ac->f_1300);
    DAT_021180ac->slots[slot].slot_id = slot;
    FUN_0206223c(DAT_021180ac->slots[slot].f_e4);
    {
        u8 serial = DAT_021125f8;
        u8 next = serial + 1;
        DAT_021180ac->slots[slot].serial = serial;
        DAT_021180ac->slots[slot].f_5c6 = 1;
        DAT_021180ac->slots[slot].settings = settings;
        DAT_021180ac->slots[slot].f_5cc = settings + 0x1e8;
        DAT_021180ac->slots[slot].f_5d0 = settings + 0x258;
        DAT_021125f8 = next;
    }
    if (*(u32 *)(DAT_021180ac->slots[slot].f_5cc + 0x6c) != 0 && !FUN_02064840()) {
        FUN_0206485c(DAT_021180ac->f_7ce0);
        FUN_020647c0(DAT_021180ac->f_74e0, 0x800);
    }
    DAT_021180ac->slots[slot].active = 1;
    DAT_021180ac->count++;
    FUN_020683e8(saved);
    return 1;
}
