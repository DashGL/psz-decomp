// version: 2.0/sp1p2
// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct FragSlot {
    u32 src;        /* 0x00 */
    u16 count;      /* 0x04 */
    u16 id;         /* 0x06 */
    u16 totalBlocks;/* 0x08 */
    u16 totalLen;   /* 0x0a */
    u16 start[8];   /* 0x0c */
    u16 end[8];     /* 0x1c */
    u32 timestamp;  /* 0x2c */
    u8 *payload;    /* 0x30 */
    u8 *buffer;     /* 0x34 */
} FragSlot;

extern u8 UNK_02107054[];
extern FragSlot DAT_0210737c[];
extern u64 FUN_02067e0c(void);
extern void FUN_02065774(const void *, void *, u32);

#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define BE(v) ((u16)(((int)(v) >> 8) | ((int)(v) << 8)))

u8 *FUN_02023984(u8 *ip, u32 *allocated) {
    u32 id, header;
    FragSlot *freeSlot = 0, *slot;
    u32 offset, end, source, fragment, length, i, blockEnd;
    u8 *buffer;

    *allocated = 0;
    fragment = BE(H(ip, 6));
    if (!(fragment & 0x3fff)) {
        return ip;
    }

    header = (ip[0] & 15) * 4;
    source = ((u32)BE(H(ip, 12)) << 16) | BE(H(ip, 14));
    id = H(ip, 4);

    for (i = 0, slot = DAT_0210737c; i < 8; i++, slot++) {
        if (slot->count != 0 && slot->src == source && slot->id == id) {
            break;
        }
        if (slot->count == 0 && freeSlot == 0) {
            freeSlot = slot;
        }
    }

    length = (u32)BE(H(ip, 2)) - header;
    offset = fragment & 0x1fff;
    end = length + offset * 8;

    if (i == 8) {
        if (!freeSlot || end > 0x1000) {
            return 0;
        }
        slot = freeSlot;
        buffer = ((u8 *(*)(u32))W(UNK_02107054, 20))(header + 0x100e);
        slot->buffer = buffer;
        if (!buffer) {
            return 0;
        }
        slot->src = source;
        slot->id = (u16)id;
        slot->totalBlocks = 0;
        slot->timestamp = (u32)(FUN_02067e0c() >> 16);
        slot->payload = slot->buffer + 14 + header;
        FUN_02065774(ip, slot->buffer + 14, header);
    }

    if (slot->count == 8 || end > 0x1000) {
        slot->count = 0;
        ((void (*)(void *))W(UNK_02107054, 64))(slot->buffer);
        return 0;
    }

    blockEnd = offset + ((length + 7) >> 3);
    if (!(fragment & 0x2000)) {
        slot->totalLen = (u16)end;
        slot->totalBlocks = (u16)blockEnd;
    }

    slot->start[slot->count] = (u16)offset;
    slot->end[slot->count] = (u16)blockEnd;
    slot->count++;

    FUN_02065774(ip + header, slot->payload + offset * 8, length);

    id = slot->totalBlocks;
    if (!id) {
        return 0;
    }
    end = 0;
    i = 0;
    while (i < slot->count) {
        if (slot->start[i] <= end && end < slot->end[i]) {
            end = slot->end[i];
            i = 0;
        } else {
            i++;
        }
    }
    if (end < id) {
        return 0;
    }

    buffer = slot->buffer;
    H(buffer, 16) = BE((u16)(slot->totalLen + (buffer[14] & 15) * 4));
    slot->count = 0;
    *allocated = 1;
    return buffer + 14;
}
