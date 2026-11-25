//cpp
// flags: -O4,s
struct Packet {
    unsigned int header;
    short a;
    short b;
    unsigned short kind;
    short id;
};
struct Request {
    unsigned int header;
    int xyz[3];
    unsigned short angle;
    unsigned char mode;
    signed char type;
    int id;
};
struct Actor {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
};
typedef void (*Method)(void *);
extern "C" {
    void FUN_02085380(Packet *);
    void FUN_020bce3c(void *);
    void FUN_0206f3f4(void *, int, int, int);
    void FUN_0206f6bc(void *, int, int);
    void FUN_0206f93c(void *, int, int);
    void FUN_0206fa64(void *, int);
    void FUN_0206fb84(void *, int);
    void FUN_0206fd10(void *);
    void FUN_0206fd64(void *);
    void FUN_0207005c(void *);
    void FUN_0207007c(void *);
    void FUN_0206f670(void *);
    void FUN_0206f810(void *);
    void FUN_02039050(void *, Method);
    void FUN_0206f570(void *);
    void FUN_0203b6e4(void *, int);
    void FUN_02090754(void *);
    void FUN_0208d98c(Request *);
    void FUN_02034680(void *, const void *);
    void FUN_0203bca0(void *);
    char *FUN_0208555c(int);
    char *FUN_02085640(void);
    int FUN_0208546c(void);
    int FUN_0203b3e4(void *);
}
extern "C" void FUN_0208d7e4(void *unused, int id, int a, int b, unsigned short kind) {
    Packet packet;
    char *actor;

    FUN_02085380(&packet);
    packet.a = a;
    packet.b = b;
    packet.kind = kind;
    packet.id = id;
    FUN_020bce3c(&packet);
    actor = FUN_0208555c(id);
    if (actor != 0) {
        switch (packet.kind) {
    case 0:
        FUN_0206f3f4(actor, packet.a, 0, 0);
        break;
    case 1:
        FUN_0206f3f4(actor, packet.a, 1, 0);
        break;
    case 2:
        FUN_0206f3f4(actor, packet.a, 1, 1);
        break;
    case 3:
        FUN_0206f6bc(actor, packet.a, packet.b);
        break;
    case 4:
        FUN_0206f93c(actor, packet.a, 0);
        break;
    case 5:
        FUN_0206fa64(actor, packet.a);
        break;
    case 6:
        ((Actor *)actor)->v27();
        break;
    case 7:
        FUN_0206fb84(actor, packet.a);
        break;
    case 8:
        FUN_0206fd10(actor);
        break;
    case 9:
        FUN_0206fd64(actor);
        break;
    case 10:
        FUN_0207005c(actor);
        break;
    case 11:
        FUN_0207007c(actor);
        break;
    case 12:
        FUN_0206f670(actor);
        break;
    case 13:
        FUN_0206f810(actor);
        break;
    case 14:
        FUN_02039050(actor, FUN_0206f570);
        break;
    case 15:
        if (packet.id != FUN_0208546c()) {
            *(unsigned short *)(actor + 340) = 10000;
        }
        break;
    case 18:
        if (packet.id != FUN_0208546c()) {
            FUN_0203bca0(actor);
        }
        break;
    case 16:
        FUN_0203b6e4(actor, packet.a);
        break;
    case 17: {
        char *self = FUN_02085640();
        if (self != 0) {
            FUN_02090754(self);
            if (FUN_0203b3e4(self)) {
                Request request;
                FUN_0208d98c(&request);
                FUN_02034680(request.xyz, self + 156);
                request.angle = *(unsigned short *)(self + 192);
                request.mode = 0;
                request.type = *(signed char *)(self + 323);
                request.id = *(int *)(self + 252);
                FUN_020bce3c(&request);
            }
            if (*(short *)(self + 340) >= 10000) {
                FUN_0208d7e4(self + 588, *(int *)(self + 252), 0, 0, 15);
            }
        }
        break;
    }
    }
    }
}
