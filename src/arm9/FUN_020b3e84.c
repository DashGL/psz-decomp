// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    unsigned char pad0[0x5c];
    Vec pos;
} Actor;

typedef struct {
    unsigned char pad0[0x14];
    Actor *actor;
} Obj;

typedef struct {
    Obj *obj;
    unsigned char pad4[0x20];
    unsigned char id;
    unsigned char pad25[3];
} Entry;

typedef struct {
    unsigned char pad0[0x10];
    int count;
} TableInfo;

typedef struct {
    int f0;
    void *marker;
    int f8;
    unsigned char id;
} State;

extern Entry DAT_0211aaa4[];
extern TableInfo DAT_0211aa74;
extern void FUN_020b44f8(Obj *);
extern void FUN_02048578(void *, int);
extern void FUN_02048540(void *, Vec *);
extern void FUN_02048458(void *);

void FUN_020b3e84(State *s) {
    unsigned char old = s->id;
    int i;
    int j;

    s->id = 0xff;
    s->f8 = -1;

    for (i = 0; i < DAT_0211aa74.count; i++) {
        if (DAT_0211aaa4[i].obj != 0) {
            FUN_020b44f8(DAT_0211aaa4[i].obj);
        }
    }

    if (s->f8 != -1) {
        int selected = -1;
        for (j = 0; j < DAT_0211aa74.count; j++) {
            if (s->id == DAT_0211aaa4[j].id) {
                selected = j;
                break;
            }
        }
        if (selected >= 0 && selected < DAT_0211aa74.count && s->marker != 0) {
            if (DAT_0211aaa4[selected].obj != 0 && DAT_0211aaa4[selected].obj->actor != 0) {
                Vec pos;
                FUN_02048578(s->marker, 1);
                pos = DAT_0211aaa4[selected].obj->actor->pos;
                pos.y += 0x800;
                FUN_02048540(s->marker, &pos);
                if (old != s->id) {
                    FUN_02048458(s->marker);
                }
            }
        }
    } else {
        if (s->marker != 0) {
            FUN_02048578(s->marker, 0);
        }
    }
}
