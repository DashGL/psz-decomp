// flags: -O4,s
#pragma thumb off
extern void FUN_0205fcdc(void *, int);
extern unsigned int FUN_0205fe54(void *, void *, unsigned int);
extern void FUN_020577bc(void *);
extern void FUN_020577fc(void *, void *, unsigned int);
extern void FUN_020578c4(void *, void *);
#pragma thumb reset
unsigned long long FUN_020dd3a0(unsigned int seed, unsigned int salt, unsigned int method) {
    struct {
        unsigned int pair[2];
        unsigned char digest[16];
        unsigned int context[22];
        unsigned char crc[256];
    } local;
    unsigned int tag;
    local.pair[0] = seed;
    local.pair[1] = salt;
    switch (method) {
    case 0:
        FUN_0205fcdc(local.crc, 7);
        tag = FUN_0205fe54(local.crc, local.pair, 8) & 127;
        break;
    case 1:
    default:
        FUN_020577bc(local.context);
        FUN_020577fc(local.context, local.pair, 8);
        FUN_020578c4(local.digest, local.context);
        tag = (local.digest[0] >> 1) & 127;
        break;
    }
    return ((unsigned long long)tag << 32) | seed;
}
