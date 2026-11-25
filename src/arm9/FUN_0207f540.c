// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern void FUN_0207f4d4(void *);
extern int FUN_0207f7a4(void *, int, int);
extern int FUN_0207f7d8(void *, int, int);
extern int FUN_0207f8b0(void *, int, int);
#pragma thumb off
extern int FUN_02000ec4(int);
#pragma thumb on

typedef struct {
    int a, b;
} Slot;

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    Slot slots[2];
} S_7f540;

typedef struct {
    char pad[8];
    short f8;
    short fa;
    signed char f0c;
    signed char f0d;
    signed char f0e;
    signed char f0f[2];
    signed char f11[2];
} P_7f540;

void FUN_0207f540(S_7f540 *s, P_7f540 *p) {
    int type, level, duration, i, value, replace, old;
    Slot *slot;

    if ((p->f8 & 64) ? E1 : E0) FUN_0207f4d4(&s->f4);
    if (s->f4 == 1 && ((p->f8 & 1024) ? E1 : E0)) FUN_0207f4d4(&s->f4);
    type = p->f0c;
    if (type != -1) {
        level = p->f0d;
        FUN_0207f4d4(&s->f4);
        s->f4 = type;
        s->f8 = FUN_0207f7a4(s, type, level);
        duration = p->f0e;
        if (duration > 0) {
            s->fc = (int)((duration > 0) ? (0.5f + (float)(duration << 12)) : ((float)(duration << 12) - 0.5f));
        } else {
            s->fc = FUN_0207f7d8(s, type, level);
        }
        s->f10 = level;
    }
    for (i = 0; i < 2; ++i) {
        value = p->f0f[i];
        if (value) {
            slot = &s->slots[i];
            replace = 0;
            old = slot->b;
            if (old * value <= 0) {
                replace = 1;
            } else {
                int magnitude = FUN_02000ec4(value);
                if (magnitude >= FUN_02000ec4(old)) replace = 1;
            }
            if (replace) {
                slot->a = 0;
                slot->b = value;
                if (p->f0e > 0) {
                    duration = p->f11[i];
                    slot->a = (int)((duration > 0) ? (0.5f + (float)(duration << 12)) : ((float)(duration << 12) - 0.5f));
                } else {
                    slot->a = FUN_0207f8b0(s, i, value);
                }
            }
        }
    }
}
