// flags: -O4,s
typedef struct {
    int hdr;
    int item[4];
    short arg;
    short index;
} Packet;
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern void FUN_0203955c(void *);
extern void FUN_02039534(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_02070110(void *, void *, int);
extern void *FUN_0208555c(int);
void FUN_0208d784(void *unused, int index, void *item, int arg) {
    Packet packet;
    void *actor;
    FUN_02036094(&packet);
    FUN_020360a4(&packet, 2, 8, 24);
    FUN_0203955c(packet.item);
    packet.arg = 0;
    packet.index = -1;
    FUN_02039534(packet.item, item);
    packet.arg = (short)arg;
    packet.index = (short)index;
    FUN_020bce3c(&packet);
    actor = FUN_0208555c(packet.index);
    if (actor != 0) {
        FUN_02070110(actor, packet.item, packet.arg);
    }
}
