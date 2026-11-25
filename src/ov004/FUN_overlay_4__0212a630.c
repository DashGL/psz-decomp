//cpp
// flags: -O4,s
typedef struct Pair { int x, y; } Pair;
typedef struct FourPairs { Pair p[4]; } FourPairs;
typedef struct EightPairs { Pair p[2][4]; } EightPairs;
typedef struct TwelvePairs { Pair p[3][4]; } TwelvePairs;
typedef struct U16x4 { unsigned short h[4]; } U16x4;
typedef struct Draw { unsigned short h[4]; Pair xy; } Draw;

typedef struct Panel4 {
    unsigned char pad0[0x18];
    struct {
        unsigned char raw[0x10];
        int active;
    } slots[4];
    unsigned char pad68[0x310 - 0x68];
    int baseX;
    int baseY;
    signed char cursor[4];
} Panel4;

extern "C" {
extern const FourPairs DAT_0212e30c;
extern const EightPairs DAT_0212e32c;
extern const TwelvePairs DAT_0212e36c;
extern const U16x4 DAT_0212e2d4;
extern void *DAT_02108c64;

int FUN_0208546c(void);
int FUN_02077fec(void *);
int FUN_02032fe0(void *, int, int, int);
int FUN_0206d36c(const int *, int *);
signed char *FUN_020856f4(int);
void *FUN_02077f3c(void);
int *FUN_02072af0(void);
int *FUN_02032ca0(void *, int);
void FUN_02032dfc(int *, void *);
void FUN_02090b44(void *);
void FUN_0200c938(void *, unsigned int);
void FUN_02071d0c(Draw *);
void FUN_020144f0(void);
void FUN_02014714(void);
void FUN_0208971c(void *, const void *);
void FUN_020c32b4(Draw *, int);
}

extern "C" void FUN_overlay_4__0212a630(Panel4 *self, int slot) {
    TwelvePairs three;
    Pair bottom[3];
    Pair top[3];
    FourPairs one;
    EightPairs two;
    int event[5];
    int counts[4];
    Draw a;
    Draw b;
    U16x4 icons;
    int kind;
    int otherKind;
    int i;
    signed char *other;
    int local;
    int handle;
    signed char *peer;

    top[0].x = (self->baseX - 5) << 12;
    top[0].y = (self->baseY - 18) << 12;
    top[1].x = self->baseX << 12;
    top[1].y = (self->baseY - 25) << 12;
    top[2].x = (self->baseX + 5) << 12;
    top[2].y = (self->baseY - 18) << 12;

    bottom[0].x = (self->baseX - 3) << 12;
    bottom[0].y = (self->baseY + 13) << 12;
    bottom[1].x = (self->baseX + 2) << 12;
    bottom[1].y = (self->baseY + 13) << 12;
    bottom[2].x = (self->baseX + 7) << 12;
    bottom[2].y = (self->baseY + 13) << 12;

    one = DAT_0212e30c;
    two = DAT_0212e32c;
    three = DAT_0212e36c;
    icons = DAT_0212e2d4;

    local = FUN_0208546c();
    peer = FUN_020856f4(local);
    FUN_02032dfc(event, DAT_02108c64);
    handle = FUN_02077fec(FUN_02077f3c());

    if (!peer) {
        return;
    }

    if ((peer[0] == 1) ? 1 : 0) {
        int dir;
        FUN_02090b44(&self->slots[slot]);
        self->slots[slot].active = 0;
        if (FUN_02072af0()[2] != 0) {
            return;
        }
        FUN_0200c938(counts, 16);
        for (i = 0; i < 4; i++) {
            if (local == i) {
                continue;
            }
            other = FUN_020856f4(i);
            if (!other) {
                continue;
            }
            if (!FUN_02032ca0(DAT_02108c64, other[2])) {
                continue;
            }
            dir = FUN_02032fe0(DAT_02108c64, event[1], peer[2], other[2]);
            if (dir != -1) {
                counts[dir]++;
            }
        }
        other = FUN_020856f4(slot);
        if (other && !((other[0] == 0) ? 1 : 0)) {
            if (FUN_02032ca0(DAT_02108c64, other[2])) {
                dir = FUN_02032fe0(DAT_02108c64, event[1], peer[2], other[2]);
                if (dir != -1) {
                    FUN_02071d0c(&a);
                    FUN_02090b44(&a);
                    FUN_020144f0();
                    a.h[0] = icons.h[slot];
                    if (counts[dir] == 1) {
                        FUN_0208971c(&a.xy, &one.p[dir]);
                    } else if (counts[dir] == 2) {
                        FUN_0208971c(&a.xy, &two.p[self->cursor[dir]][dir]);
                    } else {
                        FUN_0208971c(&a.xy, &three.p[self->cursor[dir]][dir]);
                    }
                    FUN_020c32b4(&a, handle);
                    FUN_02014714();
                    if (counts[dir] != self->cursor[dir]) {
                        self->cursor[dir]++;
                    }
                }
            }
        }
    } else {
        int *state;
        FUN_02090b44(&self->slots[slot]);
        self->slots[slot].active = 0;
        if (FUN_02072af0()[2] != 0) {
            return;
        }
        kind = -1;
        state = FUN_02032ca0(DAT_02108c64, peer[2]);
        if (!state) {
            return;
        }
        if (!FUN_0206d36c(state, &kind)) {
            return;
        }
        if (kind == 0 || kind == 3) {
            return;
        }
        other = FUN_020856f4(slot);
        if (!other || !((other[0] == 0) ? 1 : 0)) {
            return;
        }
        state = FUN_02032ca0(DAT_02108c64, other[2]);
        if (!state) {
            return;
        }
        otherKind = -1;
        if (!FUN_0206d36c(state, &otherKind)) {
            return;
        }
        FUN_02071d0c(&b);
        FUN_02090b44(&b);
        FUN_020144f0();
        if (otherKind == 1) {
            b.h[0] = icons.h[slot];
            FUN_0208971c(&b.xy, &bottom[self->cursor[0]]);
            FUN_020c32b4(&b, handle);
            self->cursor[0]++;
        } else if (otherKind == 2) {
            b.h[0] = icons.h[slot];
            FUN_0208971c(&b.xy, &top[self->cursor[1]]);
            FUN_020c32b4(&b, handle);
            self->cursor[1]++;
        }
        FUN_02014714();
    }
}
