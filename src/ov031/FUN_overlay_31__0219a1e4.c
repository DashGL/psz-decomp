// flags: -O4,s
typedef struct {
    unsigned char a, b, c, d;
    int sender;
    unsigned char reserved[4];
    signed char command, selector;
    unsigned short angle;
} Packet;
typedef struct {
    signed char selector;
    Packet packet;
} Frame;
extern void *DAT_0219d0a0;
extern int DAT_0219d0a4;
extern int DAT_0219d0b4;
extern int DAT_0219d124;
extern int FUN_overlay_31__021999bc(void *);
extern unsigned short FUN_overlay_31__02199bcc(void *);
extern void FUN_overlay_31__0219a750(void *);
extern void FUN_overlay_31__0219a768(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on
extern void FUN_overlay_31__0219a7ac(void *, void *);
extern void FUN_020bce3c(void *);

void FUN_overlay_31__0219a1e4(int *self, int command) {
    Frame f;
    unsigned short angle;
    f.selector = ((signed char *)self)[220];
    angle = ((unsigned short *)self)[34];
    switch (command) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
        break;
    case 2: {
        void *manager;
        f.selector = FUN_overlay_31__021999bc(self);
        manager = DAT_0219d0a0;
        if (!manager) {
            if (!(DAT_0219d0a4 & 1)) {
                FUN_overlay_31__0219a750(&DAT_0219d0b4);
                FUN_0200c594(&DAT_0219d0b4, FUN_overlay_31__0219a768, &DAT_0219d124);
                DAT_0219d0a4 |= 1;
            }
            manager = &DAT_0219d0b4;
        }
        FUN_overlay_31__0219a7ac(manager, &f.selector);
        ((signed char *)self)[221] = f.selector;
        break;
    }
    case 3:
        angle = FUN_overlay_31__02199bcc(self);
        break;
    }
    ((volatile Frame *)&f)->packet.a = 1;
    f.packet.b = 0;
    ((volatile Frame *)&f)->packet.c = 0;
    ((volatile Frame *)&f)->packet.d = 0;
    ((volatile Frame *)&f)->packet.command = 0;
    ((volatile Frame *)&f)->packet.selector = -1;
    ((volatile Frame *)&f)->packet.angle = 0;
    ((volatile Frame *)&f)->packet.c = 4;
    ((volatile Frame *)&f)->packet.d = 0;
    ((volatile Frame *)&f)->packet.a = 4;
    f.packet.reserved[0] = 0;
    f.packet.sender = self[3];
    f.packet.command = command;
    f.packet.selector = f.selector;
    f.packet.angle = angle;
    FUN_020bce3c(&f.packet);
}
