// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef void (*Hook)(void *);

extern u32 UNK_020f6794[];
extern u32 UNK_020f6798[];
extern u32 UNK_020f67c4[];
extern u32 UNK_0210571c[];
extern u32 UNK_02105768[];
extern u32 UNK_021057d8[];
extern u32 UNK_021057fc[];
extern void *FUN_0201985c(void);
extern void FUN_0201c8a0(void);
extern int FUN_0205e8c4(void *);
extern void FUN_0201c9d4(int, void *, int);
extern void FUN_0201cab8(void *, void *);

#define W(a,o) (*(u32 *)((u32)(a) + (o)))
#define H(a,o) (*(u16 *)((u32)(a) + (o)))
#define B(a,o) (*(u8 *)((u32)(a) + (o)))

static inline u32 PackTexCoord(int s, int t) {
    s16 st = (s16)(s >> 8);
    s16 tt = (s16)(t >> 8);
    return ((u16)st) | (((u32)(u16)tt) << 16);
}

static inline u32 GetResDataByIdx(u32 resource, u32 index) {
    if (resource) {
        u32 table = resource + 4;
        u32 entry;
        if (table && index < B(resource, 5)) {
            table += H(resource, 10);
            entry = table + 4 + H(table, 0) * index;
        } else {
            entry = 0;
        }
        if (entry) {
            return resource + W(entry, 0);
        }
    }
    return 0;
}

void FUN_0201c250(char *self)
{
    u32 descriptor, resource, entry, table, index, flags, width, height;
    int stage, skip;
    int saved[12];
    int matrix[16];
    int paramStore;
    u32 packed;
    int paramMode;
    int paramRestore;

    if ((W(self, 8) & 0x200) || !(W(self, 8) & 1)) {
        goto finish;
    }

    FUN_0201cab8(saved, 0);
    paramStore = 30;
    FUN_0201c9d4(19, &paramStore, 1);

    descriptor = W(self, 0xb0);
    if ((W(descriptor, 16) & 0xc0000000) != 0xc0000000) {
        W(descriptor, 16) &= ~0xc0000000;
        W(W(self, 0xb0), 16) |= 0xc0000000;
        UNK_020f6794[1] = W(W(self, 0xb0), 16);
        FUN_0201c9d4(UNK_020f6794[0], UNK_020f6798, 1);
    }

    stage = W(self, 0x40) ? B(self, 0x99) : 0;
    if (stage == 1) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x40))(self);
        stage = W(self, 0x40) ? B(self, 0x99) : 0;
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }
    if (!skip) {
        descriptor = W(self, 0xb0);
        height = H(descriptor, 0x2e);
        width = H(descriptor, 0x2c);
        UNK_020f67c4[0] = width << 15;
        UNK_020f67c4[5] = (0 - height) << 15;
        UNK_020f67c4[12] = width << 15;
        UNK_020f67c4[13] = height << 15;
        FUN_0201c9d4(22, UNK_020f67c4, 16);
    }

    if (stage == 2) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x40))(self);
        stage = W(self, 0x40) ? B(self, 0x99) : 0;
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }
    if (!skip) {
        index = B(W(self, 0), 1);
        resource = W(self, 0xcc);
        { u32 desc = GetResDataByIdx(resource, index);
        u16 f = H(desc, 0x1e);
        if (f & 0x2000) {
            u32 t = desc + 0x2c;
            if (!(f & 2)) t += 8;
            if (!(f & 4)) t += 4;
            if (!(f & 8)) t += 8;
            FUN_0201c9d4(24, (void *)t, 16);
        } }
    }

    if (stage == 3) {
        W(self, 8) &= ~0x40;
        ((Hook)W(self, 0x40))(self);
        skip = W(self, 8) & 0x40;
    } else {
        skip = 0;
    }
    if (!skip) {
        flags = UNK_0210571c[0x3f];
        if (flags & 1) {
            FUN_0201c9d4(28, UNK_021057fc, 3);
            FUN_0201c9d4(26, UNK_021057d8, 9);
            FUN_0201c9d4(25, saved, 12);
        } else if (flags & 2) {
            FUN_0201c9d4(25, saved, 12);
        } else {
            FUN_0201c9d4(25, FUN_0201985c(), 12);
            FUN_0201c9d4(25, saved, 12);
        }
        FUN_0201c8a0();
        *(volatile u32 *)0x04000440 = 0;
        *(volatile u32 *)0x04000444 = 0;
        *(volatile u32 *)0x04000454 = 0;
        while (FUN_0205e8c4(matrix)) {}
        *(volatile u32 *)0x04000448 = 1;
        *(volatile u32 *)0x04000440 = 3;
        FUN_0201c9d4(22, matrix, 16);
        packed = PackTexCoord(matrix[12] >> 4, matrix[13] >> 4);
        FUN_0201c9d4(34, &packed, 1);
    }

    paramMode = 2;
    FUN_0201c9d4(16, &paramMode, 1);
    paramRestore = 30;
    FUN_0201c9d4(20, &paramRestore, 1);

finish:
    W(self, 0) += 3;
}
