// flags: -O4,s
typedef struct { signed char b[4]; } Ids_0208db58;
typedef struct { int x, y, z; } Vec;
typedef struct {
    int hdr;
    Vec pos;
    unsigned short angle;
    unsigned short mode;
    int id;
    Ids_0208db58 ids;
} Packet;
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_02034680(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02070020(void *, void *, int);
extern void FUN_0203bca0(void *);
extern void FUN_020a8e54(int);
extern void FUN_020a8e2c(int);
extern char *FUN_0208555c(int);
extern int FUN_0204dab0(int);

void FUN_0208db58(void *unused, int id, Vec *input, int mode, unsigned short angle, Ids_0208db58 *ids) {
    Packet packet;
    Vec position;
    char *actor;
    int i;
    FUN_02036094(&packet);
    FUN_020360a4(&packet, 2, 13, 28);
    packet.pos.x = 0;
    packet.pos.y = 0;
    packet.pos.z = 0;
    packet.angle = 0;
    packet.mode = 0;
    packet.id = -1;
    packet.ids.b[0] = -1;
    packet.ids.b[1] = -1;
    packet.ids.b[2] = -1;
    packet.ids.b[3] = -1;
    if (mode >= 1 && mode < 5) {
        FUN_02034680(&packet.pos, input);
        packet.angle = angle;
        packet.mode = mode;
        packet.id = id;
        packet.ids = *ids;
        FUN_020bce3c(&packet);
    }
    actor = FUN_0208555c(packet.id);
    if (actor) {
        FUN_02035408(&position, packet.pos.x, packet.pos.y, packet.pos.z);
        actor[323] = packet.mode;
        FUN_02070020(actor, &position, packet.angle);
        for (i = 0; i < 4; i++) {
            if (packet.ids.b[i] != -1) {
                char *other = FUN_0208555c(packet.ids.b[i]);
                if (other) {
                    FUN_0203bca0(other);
                    if (FUN_0204dab0(packet.ids.b[i])) FUN_020a8e54(1);
                    if (packet.id != packet.ids.b[i]) other[512] = -10;
                    FUN_020a8e2c(packet.ids.b[i]);
                }
            }
        }
        *(int *)(actor + 248) &= 0xfbffffff;
    }
}
