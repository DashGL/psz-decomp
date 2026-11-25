//cpp
// flags: -O4,s
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;

struct Packet {
    s16 amount;
    s16 second;
    s16 third;
    s16 fourth;
    s16 flags;
    s8 b0, b1, b2, b3, b4;
    u8 u0, u1, u2, u3;
    s8 b5, b6, b7, b8, b9;
};

struct Vec { int x, y, z; };

struct Entry {
    int type;
    Vec pos;
    int value;
    int timer;
    s16 a, b, c, pad;
};

struct Player {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36();
    virtual void v37(s16);
    virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
    virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45();
    virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
    virtual void v54();
    virtual void v55(int, int);
    u8 pad4[0x5c - 4];
    u16 maxHp;
    u8 pad5E[0x7a - 0x5e];
    u8 level;
    u8 pad7B[0x9c - 0x7b];
    Vec pos;
    u8 padA8[0xf8 - 0xa8];
    u32 flags;
    int id;
    u8 pad100[0x14e - 0x100];
    u16 curHp;
    u8 pad150[0x158 - 0x150];
    u8 f158[0x24c - 0x158];
    u8 f24c[4];
};

extern "C" {
int FUN_0203ae60(void *);
int FUN_0203bcc4(void *, void *, void *);
int FUN_02078198(int);
int FUN_02000ec4(int);
void FUN_0203d200(void *, int);
void FUN_0208d7e4(void *, int, s16, s16, u16);
void FUN_020a9c9c(void *, Packet *);
void FUN_020a10c8(int, int, int);
void FUN_0207f540(void *, Packet *);
void FUN_020700d4(void *, int);
void FUN_0206f6bc(void *, int, int);
void *FUN_02086e3c(void);
void *FUN_020718e0(void);
void *FUN_02090c20(void);
char *FUN_020870c4(void *);
void FUN_02090f74(s16 *, void *, Vec *, int);
void FUN_020c193c(int, int, int, int, int);
void FUN_020719d8(void *, Entry *);
}

extern "C" void FUN_020a98bc(Player *self, Packet *packet, int *context) {
    Packet copy;
    Vec pos1;
    s16 screen[2];
    int severity;
    int maximum;
    int magnitude;
    int high;
    int id;
    int amount;
    int lethal;
    int flags;
    int action;
    int low;
    int *total;

    id = self->id;
    if (((self->flags & 0x08000000) ? 1 : 0) && (packet->amount < 0 || ((packet->flags & 1) ? 1 : 0))) {
        return;
    }
    if (FUN_0203ae60(self)) {
        if ((packet->flags & 0x80) ? 1 : 0) {
            FUN_0203d200(self, 0x21);
        }
        return;
    }
    if ((packet->flags & 4) ? 1 : 0) {
        FUN_0208d7e4(self->f24c, id, 0, 0, 0xc);
        return;
    }
    if ((packet->flags & 0x200) ? 1 : 0) {
        if (FUN_0203bcc4(self, packet, context) || ((self->flags & 0x00200000) ? 1 : 0)) {
            FUN_0208d7e4(self->f24c, id, 0, 0, 0xd);
            return;
        }
    }

    severity = packet->b7;
    maximum = self->maxHp;
    amount = packet->amount;
    lethal = 1;
    if ((int)self->curHp + amount > 0 && !((packet->flags & 1) ? 1 : 0)) {
        lethal = 0;
    }
    if (((packet->flags & 0x20) ? 1 : 0) || (((packet->flags & 0x10) ? 1 : 0) && lethal)) {
        amount = -((int)self->curHp - 1);
        lethal = 0;
    }
    if (lethal) {
        Packet *dst = &copy;
        const Packet *src = packet;
        dst->amount = *(volatile s16 *)&src->amount;
        dst->second = src->second;
        dst->third = src->third;
        dst->fourth = src->fourth;
        dst->flags = src->flags;
        dst->b0 = src->b0;
        dst->b1 = src->b1;
        dst->b2 = src->b2;
        dst->b3 = src->b3;
        dst->b4 = src->b4;
        dst->u0 = src->u0;
        dst->u1 = src->u1;
        dst->u2 = src->u2;
        dst->u3 = src->u3;
        dst->b5 = src->b5;
        dst->b6 = src->b6;
        dst->b7 = src->b7;
        dst->b8 = src->b8;
        dst->b9 = src->b9;
        dst->amount = (s16)amount;
        FUN_020a9c9c(self, &copy);
        return;
    }

    if (amount < 0 && FUN_02078198(context[0])) {
        self->v55(amount, maximum);
    }

    flags = packet->flags;
    action = 0x13;
    if ((flags & 0x400) ? 1 : 0) {
        magnitude = FUN_02000ec4(amount);
        high = (int)(((long long)maximum * 0x333 + 0x800) >> 12);
        low = (int)(((long long)maximum * 0xcd + 0x800) >> 12);
        if ((self->flags & 0x100) ? 1 : 0) {
            action = 0;
        } else if (magnitude >= high && severity >= 2) {
            action = 7;
        } else if (magnitude >= low && severity >= 1) {
            action = ((flags & 8) ? 1 : 0) ? 2 : 1;
        } else {
            action = 0;
        }
    } else if (packet->b2 != -1) {
        action = 0xe;
    } else if (amount > 0) {
        action = 3;
    }

    if (action != 0x13) {
        FUN_0208d7e4(self->f24c, id, (s16)amount, 0, (u16)action);
    }
    FUN_020a10c8(id, amount, 1);
    FUN_0207f540(self->f158, packet);

    if (packet->second != 0) {
        if (packet->second < 0) {
            FUN_020700d4(self, packet->second);
        } else {
            FUN_0206f6bc(self, 0, packet->second);
        }
    }

    total = (int *)(FUN_020870c4(FUN_02086e3c()) + 0x34);
    *total += packet->third;
    if (packet->third != 0) {
        int sound = packet->third < 0 ? 0x1c : 0x16;
        Vec *p = &self->pos;
        pos1.x = self->pos.x;
        pos1.y = p->y;
        pos1.z = p->z;
        FUN_02090f74(screen, FUN_02090c20(), &pos1, 0);
        FUN_020c193c(1, sound, screen[0], screen[1], -1);
    }
    if (*total < 0) {
        *total = 0;
    } else if (*total > 99999999) {
        *total = 99999999;
    }

    if (packet->fourth > 0) {
        Vec pos2 = self->pos;
        Entry event;
        int z, x;
        pos2.y = 0x1000;
        event.type = -1;
        event.value = 0;
        event.timer = 0x1e;
        event.a = 0;
        event.b = 0;
        event.c = 0x19;
        event.timer = 10;
        event.value = packet->fourth;
        event.pos.x = pos2.x;
        event.pos.y = pos2.y;
        event.pos.z = pos2.z;
        if (self->level < 100) {
            self->v37(packet->fourth);
            event.type = 8;
        } else {
            event.type = 6;
        }
        FUN_020719d8(FUN_020718e0(), &event);
    }
}
