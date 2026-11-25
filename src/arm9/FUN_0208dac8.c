// flags: -O4,s
struct Packet {
    int hdr;
    int x;
    int y;
    int z;
    unsigned short angle;
    unsigned char mode;
    unsigned char style;
    int id;
};

extern void FUN_0208d98c(void *);
extern void FUN_02034680(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_0206fe30(void *, void *, unsigned short, unsigned char);
extern void FUN_0206ffbc(void *);
extern char *FUN_0208555c(int);
extern int FUN_0206fdc0(void *, void *, unsigned short, unsigned char);

void FUN_0208dac8(void *unused, int id, void *position, unsigned short angle, unsigned int mode, unsigned int style) {
    struct Packet packet;
    int vector[3];
    char *actor;
    FUN_0208d98c(&packet);
    FUN_02034680(&packet.x, position);
    packet.angle = angle;
    packet.mode = (unsigned char)mode;
    packet.style = (unsigned char)style;
    packet.id = id;
    FUN_020bce3c(&packet);
    actor = FUN_0208555c(id);
    if (actor) {
        FUN_02035408(vector, packet.x, packet.y, packet.z);
        switch (packet.mode) {
        case 0:
            if (!FUN_0206fdc0(actor, vector, packet.angle, packet.style)) {
                *(unsigned int *)(actor + 248) |= 0x4000000;
            }
            break;
        case 1:
            FUN_0206fe30(actor, vector, packet.angle, packet.style);
            break;
        case 2:
            FUN_0206ffbc(actor);
            break;
        }
    }
}
