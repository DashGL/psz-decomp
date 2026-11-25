// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u16 f00;
    u16 f02;
    u8 f04[2];
    u8 f06[4];
    u8 pad0a[0x36];
    u16 f40;
    u16 pad42;
    u32 f44;
    u16 f48;
    u8 pad4a[6];
    u8 f50[0x70];
} ScanDesc;

typedef struct {
    u16 f00;
    u16 f02;
    u16 f04;
    u16 f06;
    u16 f08;
    u16 f0a;
    u16 f0c;
    u16 count;
    ScanDesc *desc[16];
} ScanEvent;

typedef struct {
    u8 data[0x6e];
    u16 crc;
} ScanRecord;

typedef struct {
    u8 pad0[0xf00];
    u8 buf[0x400];
    u8 pad1300[0x44];
    void (*callback)(ScanEvent *);
    ScanRecord records[16];
    u16 signals[16];
    u16 ids[16];
    u32 count;
    u32 idx;
    u32 status;
    u16 crcState;
    u16 crcTable[256];
} ScanState;

extern ScanState *DAT_0211dbc8;
extern const u8 DAT_020f6020[];
extern void FUN_020673d4(void *, unsigned int);
extern void FUN_02065774(const void *, void *, unsigned int);
extern void FUN_020656b8(void *, int, unsigned int);
extern void FUN_020b9a3c(void *, const void *, unsigned int);
extern void FUN_020b9ad4(void *, const void *, unsigned int, void *);
extern void FUN_0205fd98(void *, void *, const void *, unsigned int);
extern unsigned int FUN_0205fe7c(void *, const void *, unsigned int);
extern unsigned int FUN_020dca24(unsigned int);

void FUN_020dca3c(ScanEvent *event) {
    u8 key[8];
    u32 cipher[258];
    unsigned int i, j;
    unsigned int duplicate;
    ScanState *state;
    ScanRecord *record;
    unsigned int crc, stored, index, signal;

    FUN_020673d4(DAT_0211dbc8->buf, 1024);
    if (event->f02 == 0 && event->f08 == 5) {
        for (i = 0; i < event->count; ++i) {
                        if (event->desc[i]->f40 != 1 || event->desc[i]->f44 != 0x857) {
                continue;
            }
            duplicate = 0;
            for (j = 0; j < DAT_0211dbc8->count; ++j) {
                if (DAT_0211dbc8->ids[j] == event->desc[i]->f48) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate == 1) {
                continue;
            }
            state = DAT_0211dbc8;
            FUN_02065774(event->desc[i]->f50, &state->records[state->idx], 0x70);
            FUN_02065774(DAT_020f6020, key, 4);
            FUN_02065774(event->desc[i]->f06, key + 4, 4);
            FUN_020b9a3c(cipher, key, 8);
            state = DAT_0211dbc8;
            record = &state->records[state->idx];
            FUN_020b9ad4(cipher, record, 0x70, record);
            state = DAT_0211dbc8;
            record = &state->records[state->idx];
            FUN_0205fd98(state->crcTable, &state->crcState, record, 0x6e);
            crc = FUN_0205fe7c(DAT_0211dbc8->crcTable, record, 0x6e);
            state = DAT_0211dbc8;
            index = state->idx;
            stored = state->records[index].crc;
            if (crc != stored && stored != 0) {
                FUN_020656b8(&state->records[index], 0, 0x70);
                continue;
            }
            signal = FUN_020dca24((u8)event->desc[i]->f02);
            state->signals[state->idx] = signal;
            state = DAT_0211dbc8;
            state->ids[state->idx] = event->desc[i]->f48;
            state = DAT_0211dbc8;
            state->idx = (int)(state->idx + 1) % 16;
            state = DAT_0211dbc8;
            state->count += 1;
            state = DAT_0211dbc8;
            if ((int)state->count > 16) {
                state->count = 16;
            }
        }
    }
    DAT_0211dbc8->status = 2;
    if (DAT_0211dbc8->callback != 0) {
        DAT_0211dbc8->callback(event);
    }
}
