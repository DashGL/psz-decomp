//cpp
// flags: -O4,s
struct Body {
    unsigned int w[6];
};

struct Tail {
    unsigned short h[6];
};

struct Vec {
    unsigned int x, y, z;
};

struct Record {
    unsigned int id;
    short value;
    signed char extra;
    signed char slot;
    unsigned int x;
    unsigned int z;
    Body body;
    Tail tail;
};

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
    virtual void v17(void *);
    inline Vec *getPos() { return (Vec *)((char *)this + 0x38); }
    inline char *getCtx() { return *(char **)((char *)this + 0x10) + 0x14; }
};

extern "C" {
extern void FUN_0207f934(void *, void *);
extern void FUN_0205191c(void *, void *);
extern void *FUN_020ba8bc(unsigned int, int);
extern void FUN_02051948(void *, int, int);
extern void FUN_020bce3c(void *);
extern void FUN_020ba8c4(void *);

void FUN_0205179c(char *s, signed char *request) {
    Record records[8];
    unsigned char fallback[12];
    char *m;

    if (request[4] == *(int *)(s + 0x4c) && (m = *(char **)(s + 0x64)) != 0 && *(int *)m == 4) {
        int total;
        int i2;
        int length;
        char *context;
        int count;
        count = 0;
        total = 0;
        int i;
        char *packet;
        char *cursor;

        for (i = 0; i < 8; i++) {
            Obj *obj = ((Obj **)(*(char **)(s + 0x64) + 4))[i];
            if (obj) {
                Record *rec;
                Vec *pos = (Vec *)((char *)obj + 0x38);
                context = *(char **)((char *)obj + 0x10) + 0x14;
                rec = &records[count++];
                rec->id = *(unsigned int *)((char *)obj + 0xc);
                rec->value = (short)*(int *)((char *)obj + 0x34);
                rec->x = pos->x;
                rec->z = pos->z;
                FUN_0207f934((char *)obj + 0x64, &rec->body);
                FUN_0205191c(&rec->tail, context);
                rec->slot = (signed char)i;
                rec->extra = (signed char)(length = obj->v16());
                total += length;
            }
        }

        packet = (char *)FUN_020ba8bc((unsigned int)count * 0x34 + 0xc + (unsigned int)total, 0x10);
        FUN_02051948(packet, count, total);
        packet[4] = request[1];
        packet[5] = (char)*(int *)(s + 0x4c);
        *(unsigned int *)(packet + 8) = *(unsigned int *)(request + 8);

        Record *rec = records;
        cursor = packet + 0xc;
        for (i2 = 0; i2 < count; i2++, rec++) {
            *(unsigned int *)cursor = rec->id;
            *(short *)(cursor + 4) = rec->value;
            *(signed char *)(cursor + 6) = rec->extra;
            *(signed char *)(cursor + 7) = rec->slot;
            *(unsigned int *)(cursor + 8) = rec->x;
            *(unsigned int *)(cursor + 0xc) = rec->z;
            *(Body *)(cursor + 0x10) = rec->body;
            *(Tail *)(cursor + 0x28) = rec->tail;
            length = rec->extra;
            if (length > 0) {
                Obj *obj = ((Obj **)(*(char **)(s + 0x64) + 4))[rec->slot];
                cursor += 0x34;
                obj->v17(cursor);
                cursor += length;
            } else {
                cursor += 0x34;
            }
        }

        FUN_020bce3c(packet);
        FUN_020ba8c4(packet);
    } else {
        fallback[0] = 1;
        fallback[1] = 0;
        fallback[2] = 0;
        fallback[3] = 0;
        FUN_02051948(fallback, 0, 0);
        FUN_020bce3c(fallback);
    }
}
}
