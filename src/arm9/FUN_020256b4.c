// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern unsigned char UNK_02107054[];
extern void FUN_02024890(void *, u32);
extern void FUN_02021070(void);
extern void FUN_0202447c(u32);
extern void FUN_02065774(void *, void *, u32);
extern int FUN_02024928(void);
extern u8 *FUN_02024388(u32 *);
extern u8 *FUN_02025684(u8 *);
extern unsigned long long FUN_02067e0c(void);

typedef int (*Poll)(void);

#define BE16(p) ((u16)(((u32)(p)[0] << 8) | (p)[1]))
#define SWAP16(v) ((u16)(((int)(v) >> 8) | ((int)(v) << 8)))

int FUN_020256b4(const u8 *name, u32 type, int identifier, void *output, u32 capacity)
{
    u8 packet[60];
    int result;
    int count;
    u32 length;
    u32 start;
    u32 questions;
    u32 dataLength;
    u8 *label;
    u8 *write;
    u8 *reply;
    u8 *end;
    u8 *record;
    u8 ch;

    *(u16 *)(packet) = SWAP16(identifier);
    if (type != 32) {
        *(u16 *)(packet + 2) = 1;
    } else {
        *(u16 *)(packet + 2) = 0x1001;
    }
    *(u16 *)(packet + 4) = 0x100;
    *(u16 *)(packet + 6) = 0;
    *(u16 *)(packet + 8) = 0;
    *(u16 *)(packet + 10) = 0;

    label = packet + 12;
    write = label + 1;
    length = 0;
    count = 0;
    while ((ch = *name++) != 0) {
        if (ch != '.') {
            if (write - packet >= 60) {
                return -1;
            }
            length++; count = length;
            *write++ = ch;
        } else {
            *label = count;
            label = write++;
            length = 0;
            count = 0;
        }
    }
    *label = length;
    write[0] = 0;
    write[1] = type >> 8;
    write[2] = type;
    write[3] = 0;
    write[4] = 1;

    FUN_02024890(packet, write + 5 - packet);
    result = 0;
    start = (u32)(FUN_02067e0c() >> 16);

    while ((*(Poll *)(UNK_02107054 + 0x48))() && result == 0 && (int)((u32)(FUN_02067e0c() >> 16) - start) < 15) {
        if (!FUN_02024928()) {
            FUN_02021070();
            continue;
        }
        reply = FUN_02024388(&length);
        if (length > 12 && SWAP16(*(u16 *)reply) == identifier) {
            if ((reply[3] & 15) == 3) {
                result = -1;
            } else if ((reply[3] & 15) == 0) {
                end = reply + length;
                questions = (u16)(reply[5] | ((u32)reply[4] << 8));
                record = reply + 12;
                while (questions--) {
                    record = FUN_02025684(record) + 4;
                }
                while (record < end) {
                    record = FUN_02025684(record);
                    dataLength = BE16(record + 8);
                    if (BE16(record) == type) {
                        if (type != 12) {
                            u8 *a = record + 6;
                            u8 *b = record + 8;
                            result = ((u32)((u16)((a[dataLength] << 8) | (a + dataLength)[1])) << 16) |
                                     (u16)((b[dataLength] << 8) | (b + dataLength)[1]);
                        } else if (dataLength > capacity) {
                            result = 2;
                        } else {
                            FUN_02065774(record + 10, output, dataLength);
                            result = 1;
                        }
                        break;
                    }
                    record += dataLength + 10;
                }
            }
        }
        FUN_0202447c(length);
    }
    return result;
}
