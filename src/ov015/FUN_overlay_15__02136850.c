// flags: -O4,p
typedef struct {
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
} TPData;

typedef struct {
    TPData samples[5];
    unsigned short x;
    unsigned short y;
    unsigned short prev_x;
    unsigned short prev_y;
    unsigned char pad[8];
    unsigned char down : 1;
    unsigned char trig : 1;
    unsigned char rep : 1;
    unsigned char rel : 1;
} TouchState;

typedef struct {
    unsigned char pad0;
    unsigned char counter;
    unsigned char pad2[2];
    TouchState *state;
} TouchMgr;

extern TouchMgr DAT_0213e908;
extern int FUN_0206af60(void);
extern void FUN_0206b15c(TPData *, const TPData *);
extern int FUN_0205c73c(int, int);
extern void FUN_overlay_15__0213638c(unsigned short, unsigned short, unsigned short *);

void FUN_overlay_15__02136850(void) {
    int i;
    int old = DAT_0213e908.state->down ? 1 : 0;
    unsigned char down = 0;
    int idx = FUN_0206af60();
    TouchState *st = DAT_0213e908.state;
    st->prev_x = st->x;
    st->prev_y = st->y;
    for (i = 0; i < 4; ) {
        TPData *s = &DAT_0213e908.state->samples[idx];
        if (s->touch == 1 && s->validity == 0) {
            TPData pt;
            down = 1;
            FUN_0206b15c(&pt, s);
            FUN_overlay_15__0213638c(pt.x, pt.y, &DAT_0213e908.state->x);
            break;
        }
        i++;
        idx = FUN_0205c73c(idx + 4, 5);
    }
    DAT_0213e908.state->trig = (unsigned char)((down ^ old) & down);
    DAT_0213e908.state->rel = (unsigned char)((down ^ old) & old);
    DAT_0213e908.state->down = down;
    DAT_0213e908.state->rep = DAT_0213e908.state->trig;
    if (!down) {
        DAT_0213e908.counter = 0;
        return;
    }
    DAT_0213e908.counter++;
    if (DAT_0213e908.counter == 40) {
        DAT_0213e908.state->rep = 1;
    } else if (DAT_0213e908.counter == 47) {
        DAT_0213e908.state->rep = 1;
        DAT_0213e908.counter = 40;
    }
}
