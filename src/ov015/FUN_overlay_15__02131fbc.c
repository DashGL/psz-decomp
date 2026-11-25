// flags: -O4,p
typedef struct {
    unsigned char pad0[0xe7];
    unsigned char st;
    unsigned char pad1[7];
    unsigned char flag_ef;
    unsigned char pad2[14];
    unsigned short crc;
} Slot256;

typedef struct {
    Slot256 slots[4];
    unsigned char pad400[0xf8];
    unsigned char crc_table[1];
} SaveData;

extern SaveData *DAT_0213e8c4;
#pragma thumb off
extern void FUN_020656b8(void *, int, int);
extern unsigned short FUN_0205fe7c(const void *, const void *, int);
#pragma thumb on
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_020ea048(void *, const int *, void *);
extern void FUN_overlay_15__021366dc(void **);

void FUN_overlay_15__02131fbc(int idx)
{
    void *buf;
    int flags[4];
    int i;
    int st = DAT_0213e8c4->slots[idx].st;
    int mask = 1 << idx;
    int has_bit = 0;

    FUN_020656b8(flags, 0, 16);
    flags[idx] = 1;

    if (idx <= 2) {
        SaveData *p = DAT_0213e8c4;
        if (p->slots[0].flag_ef & mask) {
            has_bit = 1;
        }
        if (st == 0xff && has_bit != 0) {
            p->slots[0].flag_ef &= ~mask;
            DAT_0213e8c4->slots[1].flag_ef &= ~mask;
            flags[1] = 1;
            flags[0] = 1;
        } else if (st != 0xff && has_bit == 0) {
            p->slots[0].flag_ef |= mask;
            DAT_0213e8c4->slots[1].flag_ef |= mask;
            flags[1] = 1;
            flags[0] = 1;
        }
    }

    for (i = 0; i < 4; i++) {
        if (flags[i] != 0) {
            DAT_0213e8c4->slots[i].crc =
                FUN_0205fe7c(DAT_0213e8c4->crc_table, &DAT_0213e8c4->slots[i], 0xfe);
        }
    }

    buf = FUN_overlay_15__021366c4(0x100, 0x20);
    FUN_020ea048(DAT_0213e8c4, flags, buf);
    FUN_overlay_15__021366dc(&buf);
}
