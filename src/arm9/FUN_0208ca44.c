//cpp
// flags: -O4,s
struct Vec3 {
    int x, y, z;
};
struct StoredPos {
    int x;
    int z;
    unsigned short angle;
    unsigned short pad;
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
    virtual int GetType();
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
};
struct Actor2 {
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
    virtual int GetType(); // +0x40
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
    virtual void Action6c(); // +0x6c
};
struct PacketHdr {
    unsigned char type;
    unsigned char zero;
    unsigned char mode;
    unsigned char kind;
};
struct Packet : PacketHdr {
    Vec3 position;
    unsigned short angle;
    unsigned char flag;
    signed char actor;
    int id;
};
extern "C" {
extern char *FUN_0208555c(int);
extern char *FUN_02085640(void);
extern int FUN_0208546c(void);
extern int FUN_0203b3e4(void *);
extern void FUN_0206f3f4(void *, int, int, int);
extern void FUN_0206f6bc(void *, int, int);
extern void FUN_0206f93c(void *, int, int);
extern void FUN_0206fa64(void *, int);
extern void FUN_0206fb84(void *, int);
extern void FUN_0206fd10(void *);
extern void FUN_0206fd64(void *);
extern void FUN_0207005c(void *);
extern void FUN_0207007c(void *);
extern void FUN_0206f670(void *);
extern void FUN_0206f810(void *);
extern void FUN_0206f570(void);
extern void FUN_02039050(void *, void (*)(void));
extern void FUN_0203bca0(void *);
extern void FUN_0203b6e4(void *, int);
extern void FUN_020345f0(void *, void *);
extern void FUN_0203e4a0(void *, void *);
extern void FUN_020bce3c(void *);
extern void FUN_0208d7e4(void *, int, int, int, int);
extern void FUN_0203e43c(void *);
extern void FUN_02085198(int, int);
extern void FUN_02085188(int, int);
extern void FUN_020865d0(void *, int);
extern void FUN_02090780(int, void *, unsigned short);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb reset
}

static inline bool IsType2(Actor2 *actor) {
    return actor->GetType() == 2;
}

#define INIT_PACKET(p) do { \
    (p).type = 1; \
    (p).zero = 0; \
    (p).mode = 0; \
    (p).kind = 0; \
    (p).mode = 2; \
    (p).kind = 12; \
    (p).type = 6; \
    (p).position.x = 0; \
    (p).position.y = 0; \
    (p).position.z = 0; \
    (p).angle = 0; \
    (p).flag = 0; \
    (p).actor = 0; \
    (p).id = -1; \
} while (0)

extern "C" void FUN_0208ca44(short *command) {
    Packet packet;
    StoredPos stored;
    Vec3 zero;
    Vec3 position;
    char *actor = FUN_0208555c(command[5]);
    if (actor) {
        if (IsType2((Actor2 *)actor)) {
            switch ((unsigned short)command[4]) {
            case 0: FUN_0206f3f4(actor, command[2], 0, 0); break;
            case 1: FUN_0206f3f4(actor, command[2], 1, 0); break;
            case 2: FUN_0206f3f4(actor, command[2], 1, 1); break;
            case 3: FUN_0206f6bc(actor, command[2], command[3]); break;
            case 4: FUN_0206f93c(actor, command[2], 0); break;
            case 5: FUN_0206fa64(actor, command[2]); break;
            case 6: ((Actor2 *)actor)->Action6c(); break;
            case 7: FUN_0206fb84(actor, command[2]); break;
            case 8: FUN_0206fd10(actor); break;
            case 9: FUN_0206fd64(actor); break;
            case 10: FUN_0207005c(actor); break;
            case 11: FUN_0207007c(actor); break;
            case 12: FUN_0206f670(actor); break;
            case 13: FUN_0206f810(actor); break;
            case 14: FUN_02039050(actor, FUN_0206f570); break;
            case 15:
                if (command[5] != FUN_0208546c()) {
                    *(short *)(actor + 0x154) = 10000;
                }
                break;
            case 18:
                if (command[5] != FUN_0208546c()) {
                    FUN_0203bca0(actor);
                }
                break;
            case 16: FUN_0203b6e4(actor, command[2]); break;
            case 17:
                actor = FUN_02085640();
                if (!actor) break;
                FUN_020345f0(&position, actor + 0x9c);
                FUN_0203e4a0(actor, &position);
                if (FUN_0203b3e4(actor)) {
                    INIT_PACKET(packet);
                    {
                        Vec3 *pos = (Vec3 *)(actor + 0x9c);
                        packet.position.x = pos->x;
                        packet.position.y = pos->y;
                        packet.position.z = pos->z;
                    }
                    packet.angle = *(unsigned short *)(actor + 0xc0);
                    packet.flag = 0;
                    packet.actor = *(signed char *)(actor + 0x143);
                    packet.id = *(int *)(actor + 0xfc);
                    FUN_020bce3c(&packet);
                }
                if (*(short *)(actor + 0x154) >= 10000) {
                    FUN_0208d7e4(actor + 0x24c, *(int *)(actor + 0xfc), 0, 0, 15);
                }
                FUN_0203e43c(actor);
                break;
            }
        }
    } else {
        switch ((unsigned short)command[4]) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 7:
            FUN_02085198(command[5], command[2]);
            break;
        case 4:
            FUN_02085188(command[5], 0);
            break;
        case 6:
        case 16:
            FUN_02085198(command[5], 0xffff);
            break;
        case 5:
            FUN_02085188(command[5], command[2]);
            break;
        case 17: {
            int local = FUN_0208546c();
            FUN_020865d0(&stored, local);
            FUN_0200c938(&zero, 12);
            zero.x = stored.x;
            zero.z = stored.z;
            FUN_02090780(local, &zero, stored.angle);
            break;
        }
        }
    }
}
