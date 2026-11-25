// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;

typedef union {
    struct {
        u32 x : 12;
        u32 y : 12;
        u32 touch : 1;
        u32 validity : 2;
        u32 dummy : 5;
    } e;
    u32 raw;
    u16 halfs[2];
} TPiData;

typedef void (*TPRecvCallback)(u32 command, u32 result, u8 index);

typedef struct {
    u32 dummy0;
    TPRecvCallback callback;
    TPData buf;
    u16 index;
    u16 pad12;
    TPData *samplingBufs;
    u16 bufSize;
    u8 pad1a[0x1c];
    u16 state;
    u16 err_flg;
    u16 command_flg;
} TPiWork;

extern TPiWork DAT_0211a144;
extern void FUN_02068728(void);

static inline void TPi_CopyTpFromSystemWork(TPData *result) {
    TPiData tmp;
    tmp.halfs[0] = ((volatile u16 *)0x027fffaa)[0];
    tmp.halfs[1] = ((volatile u16 *)0x027fffaa)[1];
    result->x = tmp.e.x;
    result->y = tmp.e.y;
    result->touch = (u8)tmp.e.touch;
    result->validity = (u8)tmp.e.validity;
}

void FUN_0206a718(int tag, u32 data, int err) {
    u16 result = (u16)data;
    u16 command = (u16)((result & 0x7f00) >> 8);
    int err_code;
    (void)tag;

    if (err) {
        DAT_0211a144.err_flg |= (1 << command);
        if (DAT_0211a144.callback) {
            DAT_0211a144.callback(command, 4, 0);
        }
        return;
    }

    if (command == 16) {
        DAT_0211a144.index++;
        if (DAT_0211a144.index >= DAT_0211a144.bufSize) {
            DAT_0211a144.index = 0;
        }
        TPi_CopyTpFromSystemWork(&DAT_0211a144.samplingBufs[DAT_0211a144.index]);
        if (DAT_0211a144.callback) {
            DAT_0211a144.callback(command, 0, (u8)DAT_0211a144.index);
        }
        return;
    }

    if (!(data & 0x01000000)) {
        return;
    }

    switch ((u8)(result & 0xff)) {
    case 0:
        switch (command) {
        case 0:
            TPi_CopyTpFromSystemWork(&DAT_0211a144.buf);
            DAT_0211a144.state = 0;
            break;
        case 1:
            DAT_0211a144.state = 2;
            break;
        case 2:
            DAT_0211a144.state = 0;
            break;
        default:
            break;
        }
        DAT_0211a144.command_flg &= ~(1 << command);
        if (DAT_0211a144.callback) {
            DAT_0211a144.callback(command, 0, 0);
        }
        return;

    case 4:
        err_code = 3;
        break;
    case 2:
        err_code = 1;
        break;
    case 3:
        err_code = 2;
        break;
    default:
        goto fatal;
    }

    DAT_0211a144.err_flg |= (1 << command);
    DAT_0211a144.command_flg &= ~(1 << command);
    if (DAT_0211a144.callback) {
        DAT_0211a144.callback(command, (u8)err_code, 0);
    }
    return;

fatal:
    FUN_02068728();
}
