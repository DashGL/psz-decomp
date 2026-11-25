// flags: -O2,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef void (*Callback)(u32);

typedef struct {
    u8 lo : 4;
    u8 hi : 4;
    u8 rest[21];
} Rec;

typedef struct {
    u8 pad0[0x358];
    u8 f358;
    u8 pad359;
    u16 f35a;
    u16 f35c;
    Rec recs[15];   // 0x35e..0x4a7
    u8 f4a8[8];     // 0x4a8..0x4af
    u16 f4b0;
    u8 pad4b2;
    u8 f4b3;
    u8 f4b4;
    u8 f4b5;
    u8 pad4b6[2];
    u32 f4b8;
} Source;

typedef struct {
    u32 f40;
    u8 type : 2;
    u8 f44_hi : 6;
    u8 f45;
    u8 f46;
    u8 f47;
    u16 crc;
    u8 f4a;
    u8 pad4b;
    u16 f4c;
    u16 f4e;
    Rec records[4];
    u8 tail[8];
} Packet;

typedef struct {
    u32 pad0[4];
    int mode;
    Callback cb;
    u32 pad18;
    Source *ptr;
    u32 pad20;
    u8 f24;
    u8 f25;
    u8 f26;
    u8 pad27[2];
    u8 f29;
    u8 pad2a[0x16];
    Packet pkt;
} State;

extern State DAT_02112600;
extern u8 DAT_021126a8[8];
extern void FUN_020625b4(void);
extern void FUN_020654b4(u32, void *, u32);
extern void FUN_020654dc(void *, void *, u32);
extern int FUN_02061fc8(void *, int);
extern void FUN_02055690(int, void *, int, int, int, u8);

void FUN_020625e4(int first, int second, u8 flags) {
    int i, count;
    u16 changed;
    if (DAT_02112600.f26 != DAT_02112600.ptr->f4b4) {
        FUN_020625b4();
    }
    DAT_02112600.pkt.type = 2;
    DAT_02112600.pkt.f45 = DAT_02112600.ptr->f4b3;
    DAT_02112600.pkt.f46 = DAT_02112600.f26;
    DAT_02112600.pkt.f40 = DAT_02112600.ptr->f4b8;
    DAT_02112600.pkt.f44_hi = DAT_02112600.ptr->f4b5;
    DAT_02112600.pkt.f47 = DAT_02112600.f29++;
    DAT_02112600.pkt.f4a = DAT_02112600.ptr->f358;
    DAT_02112600.pkt.f4c = DAT_02112600.ptr->f35a;
    DAT_02112600.pkt.f4e = DAT_02112600.ptr->f35c;
    if (DAT_02112600.mode == 0 && DAT_02112600.cb) {
        DAT_02112600.cb(DAT_02112600.ptr->f4b8);
    }
    for (i = 0; i < 8; i++) {
        DAT_021126a8[i] = DAT_02112600.ptr->f4a8[i];
    }
    FUN_020654b4(0, DAT_02112600.pkt.records, sizeof(DAT_02112600.pkt.records));
    changed = (u16)(DAT_02112600.ptr->f4b0 ^ DAT_02112600.ptr->f35a);
    count = 0;
    for (i = 0; i < 15; i++) {
        if (changed & (2u << i)) {
            FUN_020654dc(&DAT_02112600.ptr->recs[i], &DAT_02112600.pkt.records[count], sizeof(Rec));
            count++;
            DAT_02112600.ptr->f4b0 |= (2 << i);
            if (count == 4) break;
        }
    }
    if ((u32)count < 4) {
        DAT_02112600.pkt.records[count].hi = 0;
    }
    DAT_02112600.pkt.crc = 0;
    DAT_02112600.pkt.crc = (u16)FUN_02061fc8(&DAT_02112600.pkt.crc, 0x68);
    if (DAT_02112600.ptr->f4b0 == DAT_02112600.ptr->f35a) {
        DAT_02112600.f24 = 1;
    }
    FUN_02055690(0, &DAT_02112600.pkt, sizeof(Packet), first, second, (u8)(flags | 3));
    if (DAT_02112600.mode == 1 && DAT_02112600.cb) {
        DAT_02112600.cb(DAT_02112600.ptr->f4b8);
    }
}
