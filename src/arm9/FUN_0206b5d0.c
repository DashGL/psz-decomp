// flags: -O4,s -noThumb
typedef struct {
    int pad[8];
    unsigned int cb;
    unsigned int arg;
} G_6b5d0;
typedef struct {
    unsigned short a;
    unsigned short pad;
    unsigned int b;
} Slot_6b5d0;
extern G_6b5d0 DAT_0211a180;
extern Slot_6b5d0 DAT_0211a1c4[];
extern unsigned int FUN_0206b2ac(void);
extern unsigned int FUN_0206b968(unsigned int);
unsigned int FUN_0206b5d0(unsigned int slot, unsigned int output, unsigned int callback, unsigned int argument) {
    if (!FUN_0206b2ac()) {
        return 1;
    }
    DAT_0211a180.cb = callback;
    DAT_0211a180.arg = argument;
    DAT_0211a1c4[slot].a = 0;
    DAT_0211a1c4[slot].b = output;
    FUN_0206b968(0x03006500 | (slot & 255));
    return 0;
}
