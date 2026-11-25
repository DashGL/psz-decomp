// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u32 head;
    u32 tail;
} Region;

typedef struct {
    u32 pad0;
    u32 pad1;
    u32 pad2;
    u32 pad3;
    u32 attribute;
} HeapHead;

extern void FUN_02011c70(Region *, u32);
extern u32 FUN_02011c9c(u32, u32);
extern u32 FUN_02011cf4(Region *, u16);
extern u32 FUN_02011cc4(u32, u32, u32);
extern void FUN_02065510(u32, u32, u32);

static inline u16 GetOptForHeap(u32 heap) {
    return (u16)(*(u32 *)(heap - 4) & 0xff);
}

static inline void FillAllocMemory(u32 heap, u32 addr, u32 size) {
    if (GetOptForHeap(heap) & 1) {
        FUN_02065510(0, addr, size);
    }
}

static inline void SetAllocDir(u32 p, u16 dir) {
    *(u16 *)(p + 2) &= ~0x8000;
    *(u16 *)(p + 2) |= (dir & 1) << 15;
}

static inline void SetAlignment(u32 p, u16 align) {
    *(u16 *)(p + 2) &= ~0x7f00;
    *(u16 *)(p + 2) |= (align & 0x7f) << 8;
}

static inline void SetGroupID(u32 p, u8 groupID) {
    *(u16 *)(p + 2) &= ~0x00ff;
    *(u16 *)(p + 2) |= (groupID & 0xff);
}

u32 FUN_02011d94(u32 list, u32 old, u32 allocation, u32 size, u16 direction) {
    Region before, after, used;
    u32 previous, header, p;

    FUN_02011c70(&before, old);
    after.tail = before.tail;
    header = allocation - 16;
    before.tail = header;
    after.head = size + allocation;

    previous = FUN_02011c9c(list, old);

    if (before.tail - before.head < 20) {
        before.tail = before.head;
    } else {
        p = FUN_02011cf4(&before, 0x4652);
        previous = FUN_02011cc4(list, p, previous);
    }

    if (after.tail - after.head < 20) {
        after.head = after.tail;
    } else {
        p = FUN_02011cf4(&after, 0x4652);
        FUN_02011cc4(list, p, previous);
    }

    FillAllocMemory(list, before.tail, after.head - before.tail);

    used.head = header;
    used.tail = after.head;
    p = FUN_02011cf4(&used, 0x5544);

    SetAllocDir(p, direction);
    SetAlignment(p, (u16)(p - before.tail));
    SetGroupID(p, *(u16 *)(list + 16));

    FUN_02011cc4(list + 8, p, *(u32 *)(list + 12));
    return allocation;
}
