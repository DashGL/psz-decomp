// flags: -O4,s
typedef void (*Hit)(void *, void *, int);
typedef struct Packet { unsigned char bytes[4]; int words[2]; } Packet;
extern int DAT_0211a51c;
extern void *FUN_overlay_19__021985f8(void *, int);
extern int FUN_02084d00(void *);
extern void FUN_02001540(void *, int, unsigned);
extern void FUN_overlay_19__02198b10(void *, const Packet *);
void FUN_overlay_19__0219b154(char *self, char *payload, signed char *event) {
    char *owner = *(char **)(self + 4);
    int type = event[9], mode, health;
    unsigned base;
    void *target;
    Packet packet;
    if (type >= 3 && type <= 6) {
        int index = type - 3;
        mode = 2;
        if (*(signed char *)(payload + 20) == 0 || *(signed char *)(payload + 20) == 3) mode = 3;
        target = FUN_overlay_19__021985f8(owner, index);
        if (target) ((*(Hit **)target)[5])(target, owner, mode);
    }
    if (!FUN_02084d00(&DAT_0211a51c)) return;
    owner = *(char **)(self + 4);
    health = *(short *)(owner + 24);
    base = *(unsigned *)(owner + 52);
    mode = 1;
    if (health > (int)(base << 2)) {
        if (!(*(unsigned *)(self + 0x88) & 4)) {
            mode = 3;
            *(unsigned *)(self + 0x88) |= 4;
        }
    } else if (health > (int)(base << 1)) {
        if (!(*(unsigned *)(self + 0x88) & 2)) {
            mode = 2;
            *(unsigned *)(self + 0x88) |= 2;
        }
    }
    if (mode == 1) {
        *(unsigned *)(self + 0x8c) -= (int)*(short *)payload;
        if (health > (int)(*(unsigned *)(self + 0x8c) << 4)) return;
        *(unsigned *)(self + 0x8c) = 0;
    }
    if (mode != 1) {
        FUN_02001540(&packet, 0, 12);
        packet.words[0] = -1;
        packet.words[1] = -1;
        FUN_02001540(&packet, 0, 12);
        packet.words[0] = -1;
        packet.words[1] = -1;
        packet.bytes[0] = mode;
        packet.bytes[1] = 1;
        FUN_overlay_19__02198b10(*(void **)(self + 4), &packet);
    }
}
