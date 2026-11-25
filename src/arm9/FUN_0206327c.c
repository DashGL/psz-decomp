// flags: -O2,p -noThumb
#pragma opt_common_subs off
#pragma opt_propagation off
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u32 w[32];
} Copy128;

typedef struct {
    u8 *scanBuf;
    u16 channel;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 pad;
} ScanParam;

typedef struct {
    u16 dmaNo;
    u16 pad02;
    u32 pad04;
    u8 *state;
    u8 *work;
    u32 pad10[4];
    ScanParam scan;
} Globals;

typedef struct {
    u8 pad0[0xc0];
    u8 info[0xa];
    u8 bssid[6];
    u8 pad_d0[0x26];
    u16 f_f6;
    Copy128 f_f8;
    u8 pad_178[8];
} Record;

typedef struct {
    u8 pad0[0x40];
    u8 buf40[0x400];
    u8 scanBuf[0xc0];
    u32 f_500;
    u32 f_504;
    u32 f_508;
    u8 f_50c;
    u8 pad50d[0xb];
    u16 f_518;
    u16 f_51a;
    void (*cb)(int, void *);
    void *f_520;
    u16 pad524;
    u16 f_526;
    u16 f_528;
    u16 f_52a;
    u16 f_52c;
    u8 pad52e[0xb2];
    u16 count;
    u16 aid;
    u32 scanning;
    u32 autoChan;
    int lastIdx;
    u8 pad5f0[0x10];
    Record records[16];
} State;

extern Globals DAT_021180a0;
extern u16 DAT_020f96f4[];

extern void FUN_0206455c(int, int);
extern void FUN_020673d4(void *, u32);
extern void FUN_02064e48(u32, void *, void *, u32);
extern void FUN_020654dc(void *, void *, int);
extern void FUN_0206411c(void);
extern void FUN_02062970(void *);
extern void FUN_02068728(void);
extern void FUN_0206320c(void);
extern int FUN_02055798(void *, int, int, int, int);
extern int FUN_02053fd4(void *, void *);
extern int FUN_02062850(void *);
extern int FUN_02054250(void *, void *, int, int, int);
extern int FUN_02053508(int, void *, int);
extern int FUN_020628c0(void);
extern int FUN_02053dbc(void *);
extern int FUN_02054574(void *, u32, u32, void *, u32, u16, int, int, int, int, int);

#define H(p, o) (*(u16 *)((u8 *)(p) + (o)))

void FUN_0206327c(u8 *packet) {
    State *s = (State *)DAT_021180a0.state;
    Record *recs;
    int i;
    int result;

    switch (H(packet, 0)) {
    case 0:
        if (H(packet, 2) != 0) {
            s->cb(0x100, packet);
            return;
        }
        s->cb(0x15, packet);
        result = FUN_02055798(FUN_0206327c, DAT_020f96f4[3], DAT_020f96f4[1], DAT_020f96f4[0], DAT_020f96f4[2]);
        FUN_0206455c(0x1d, result);
        return;

    case 0x1d:
        if (H(packet, 2) != 0) {
            s->cb(0x100, packet);
            return;
        }
        DAT_021180a0.scan.scanBuf = s->scanBuf;
        if (DAT_021180a0.scan.channel == 0) {
            DAT_021180a0.scan.channel = 1;
        }
        if (DAT_021180a0.scan.maxChannelTime == 0) {
            DAT_021180a0.scan.maxChannelTime = 200;
        }
        DAT_021180a0.scan.bssid[0] = 0xff;
        DAT_021180a0.scan.bssid[1] = 0xff;
        DAT_021180a0.scan.bssid[2] = 0xff;
        DAT_021180a0.scan.bssid[3] = 0xff;
        DAT_021180a0.scan.bssid[4] = 0xff;
        DAT_021180a0.scan.bssid[5] = 0xff;
        s->scanning = 1;
        s->autoChan = 1;
        result = FUN_02053fd4(FUN_0206327c, &DAT_021180a0.scan);
        FUN_0206455c(10, result);
        return;

    case 10:
        if (H(packet, 2) != 0) {
            s->cb(0x100, packet);
            return;
        }
        switch (H(packet, 8)) {
        case 3:
            return;
        case 5: {
            recs = s->records;
            for (i = 0; i < s->count; i++) {
                int b5, b4, b3, b2, b1;
                b5 = 0; b1 = 0; b4 = 0; b3 = 0; b2 = 0;
                if (packet[10] == recs[i].bssid[0] && packet[11] == recs[i].bssid[1]) b1 = 1;
                if (b1 && packet[12] == recs[i].bssid[2]) b2 = 1;
                if (b2 && packet[13] == recs[i].bssid[3]) b3 = 1;
                if (b3 && packet[14] == recs[i].bssid[4]) b4 = 1;
                if (b4 && packet[15] == recs[i].bssid[5]) b5 = 1;
                if (b5) {
                    recs[i].f_f6 = H(packet, 0x36);
                    recs[i].f_f8 = *(Copy128 *)(packet + 0x38);
                    FUN_020673d4(&s->records[i], 0xc0);
                    FUN_02064e48(DAT_021180a0.dmaNo, s->scanBuf, &s->records[i], 0xc0);
                    s->lastIdx = i;
                    goto done_found;
                }
            }
            if (i < 16) {
                s->count = (u16)(i + 1);
                FUN_020654dc(packet, &recs[i].info, 0xb8);
                FUN_020673d4(&s->records[i], 0xc0);
                FUN_02064e48(DAT_021180a0.dmaNo, s->scanBuf, &s->records[i], 0xc0);
                s->lastIdx = i;
            }
done_found:
            s->cb(4, packet);
            if (!s->scanning) {
                return;
            }
            if (s->autoChan && !FUN_02062850(&DAT_021180a0.scan)) {
                FUN_0206411c();
            }
            result = FUN_02053fd4(FUN_0206327c, &DAT_021180a0.scan);
            FUN_0206455c(10, result);
            return;
        }
        case 4:
            s->cb(5, packet);
            if (!s->scanning) {
                return;
            }
            if (s->autoChan && !FUN_02062850(&DAT_021180a0.scan)) {
                FUN_0206411c();
            }
            result = FUN_02053fd4(FUN_0206327c, &DAT_021180a0.scan);
            FUN_0206455c(10, result);
            return;
        default:
            s->cb(0x100, packet);
            return;
        }

    case 11:
        if (H(packet, 2) != 0) {
            s->cb(0x100, packet);
            return;
        }
        { void *p = *(void * volatile *)&s->f_520; result = FUN_02054250(FUN_0206327c, p, 0, 1, 0); }
        FUN_0206455c(12, result);
        return;

    case 12:
        if (H(packet, 2) != 0) {
            s->count = 0;
            s->cb(11, packet);
            return;
        }
        switch (H(packet, 8)) {
        case 6:
            s->f_52a = 0;
            s->f_528 = 1;
            return;
        case 7:
            s->aid = H(packet, 10);
            s->cb(6, packet);
            s->f_52a = 1;
            if (FUN_02053508(1, FUN_0206320c, 0) != 0) {
                return;
            }
            { int k; result = FUN_02054574(FUN_0206327c, s->f_504, s->f_51a, s->buf40, s->f_518, (u16)(s->f_52c != 0 ? 0 : (k = 1)), 0, 0, 0, 1, 1); }
            FUN_0206455c(14, result);
            return;
        case 9:
            s->cb(10, packet);
            s->f_52a = 0;
            s->f_528 = 0;
            return;
        case 26:
            return;
        default:
            s->cb(0x100, packet);
            return;
        }

    case 14:
        switch (H(packet, 4)) {
        case 10:
            s->f_528 = 1;
            if (FUN_020628c0() != 0) {
                s->cb(25, 0);
            }
            return;
        case 12:
            return;
        case 13:
            return;
        default:
            s->cb(0x100, packet);
            return;
        }

    case 15:
        s->f_50c = 0;
        if (H(packet, 2) == 0) {
            s->cb(8, packet);
        } else if (H(packet, 2) == 9) {
            s->cb(41, packet);
        } else {
            s->cb(18, packet);
        }
        if (((State *)DAT_021180a0.state)->f_526 == 0) {
            s->cb(25, 0);
        }
        return;

    case 1:
        if (H(packet, 2) != 0) {
            s->f_526 = 0;
            s->cb(0x100, packet);
            return;
        }
        s->f_52a = 0;
        ((State *)DAT_021180a0.state)->f_528 = 0;
        result = FUN_02053dbc(FUN_0206327c);
        FUN_0206455c(2, result);
        return;

    case 2:
        if (H(packet, 2) != 0) {
            s->f_526 = 0;
            s->cb(0x100, packet);
            return;
        }
        FUN_02062970(packet);
        return;

    case 21:
        if (FUN_020628c0() != 0) {
            s->cb(25, 0);
        }
        return;

    case 128:
        switch (H(packet, 4)) {
        case 22:
            FUN_02068728();
            break;
        case 23:
            break;
        }
        return;

    default:
        s->cb(0x100, packet);
        return;
    }
}
