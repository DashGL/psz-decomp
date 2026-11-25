// flags: -O4,p
typedef struct {
    unsigned char pad[0x30];
    unsigned short held, trig, rep, rel;
} PadState;
typedef struct { void *f00; PadState *pad; } Global;
extern Global DAT_0213e908;
extern unsigned char DAT_0213e910[];
void FUN_overlay_15__021367b8(void) {
    PadState *p = DAT_0213e908.pad;
    unsigned short keys = ((*(volatile unsigned short *)0x04000130 | *(volatile unsigned short *)0x027fffa8) ^ 0x2fff) & 0x2fff;
    int i;
    p->trig = (p->held ^ keys) & keys;
    DAT_0213e908.pad->rel = (keys ^ p->held) & p->held;
    DAT_0213e908.pad->held = keys;
    DAT_0213e908.pad->rep = DAT_0213e908.pad->trig;
    for (i = 0; i < 14; i++) {
        unsigned short bit = (unsigned short)(1 << i);
        if (!(keys & bit)) {
            DAT_0213e910[i] = 0;
        } else {
            DAT_0213e910[i]++;
            if (DAT_0213e910[i] == 40) {
                DAT_0213e908.pad->rep |= bit;
            } else if (DAT_0213e910[i] == 47) {
                DAT_0213e908.pad->rep |= bit;
                DAT_0213e910[i] = 40;
            }
        }
    }
}
