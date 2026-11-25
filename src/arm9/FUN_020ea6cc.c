// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 data[0xef];
    u8 flags;
    u8 id[0xe];
    u16 crc;
} SavePage;

typedef struct {
    SavePage pages[4];
    u8 pad[0x100];
    u8 crc_table[0x200];
} SaveBuf;

#pragma thumb off
extern void FUN_020656b8(void *, int, u32);
extern void FUN_0205fd54(void *, u32);
extern u16 FUN_0205fe7c(void *, const void *, u32);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_020654b4(u32, void *, u32);
#pragma thumb on

extern int FUN_020e9ffc(void *);
extern int FUN_020ea028(void *);
extern int FUN_020ea918(void *);
extern int FUN_020ea9cc(void *);
extern int FUN_020ea0b8(void *);
extern u32 FUN_020eaa24(void *, u32);
extern void FUN_020ea130(void *);

int FUN_020ea6cc(SaveBuf *buffer) {
    SavePage *p, *q;
    int *vp;
    int valid[4];
    int changed;
    volatile int i;
    int j;

    FUN_020656b8(buffer, 0, 0x700);
    if (!FUN_020e9ffc(buffer)) {
        return -10001;
    }
    FUN_0205fd54(buffer->crc_table, 0xa001);
    if (!FUN_020ea028(buffer)) {
        return -10001;
    }

    FUN_020656b8(valid, 0, sizeof(valid));
    i = 0;
    p = buffer->pages;
    q = buffer->pages;
    vp = valid;
    do {
        int k;
        u16 c = FUN_0205fe7c(buffer->crc_table, p, 0xfe);
        if (c == p->crc && FUN_020ea918(q)) {
            *vp = 1;
        }
        p++;
        q++;
        k = i;
        vp++;
        k++;
        i = k;
        if (k >= 3) break;
    } while (1);

    {
        u16 c = FUN_0205fe7c(buffer->crc_table, &buffer->pages[3], 0xfe);
        if (c == buffer->pages[3].crc) {
            valid[3] = 1;
        }
    }

    if (valid[0] && valid[1] && valid[2] && valid[3]) {
        FUN_020ea130(buffer->pages[0].id);
        return 0;
    }
    if (!valid[0] && !valid[1] && !valid[2] && !valid[3]) {
        FUN_020ea9cc(buffer);
        if (FUN_020ea0b8(buffer)) {
            return 0;
        }
        return -10000;
    }
    if (!(valid[0] && valid[1]) && !(valid[2] && valid[3])) {
        FUN_020ea9cc(buffer);
        if (FUN_020ea0b8(buffer)) {
            return 0;
        }
        return -10000;
    }
    if (!valid[0] && !valid[1]) {
        FUN_020ea9cc(buffer);
        if (FUN_020ea0b8(buffer)) {
            return -10003;
        }
        return -10000;
    }

    if (!valid[0]) {
        FUN_020eaa24(buffer, 0);
        FUN_02065774(buffer->pages[1].id, buffer->pages[0].id, 14);
        buffer->pages[0].flags = buffer->pages[1].flags;
    } else if (!valid[1]) {
        FUN_020eaa24(buffer, 1);
        FUN_02065774(buffer->pages[0].id, buffer->pages[1].id, 14);
        buffer->pages[1].flags = buffer->pages[0].flags;
    }
    FUN_020ea130(buffer->pages[0].id);
    if (!valid[2]) {
        FUN_020eaa24(buffer, 2);
    }
    if (!valid[3]) {
        FUN_020654b4(0, &buffer->pages[3], 0x100);
    }

    changed = 0;
    {
        int *vp2;
        int j2;
        j2 = 0;
        vp2 = valid;
        for (; j2 < 3; j2++, vp2++) {
            if (!*vp2 && (buffer->pages[0].flags & (1 << j2))) {
                buffer->pages[0].flags &= ~(1 << j2);
                buffer->pages[1].flags = buffer->pages[0].flags;
                changed = 1;
            }
        }
    }
    if (!FUN_020ea0b8(buffer)) {
        return -10000;
    }
    if (changed) {
        return -10002;
    }
    return 0;
}
