// flags: -O3,p
typedef unsigned int u32;
struct Record { unsigned char data[12]; };
struct State {
    u32 active;
    u32 *connection;
    u32 ticks;
    u32 timer[2];
    int count;
    struct Record *records;
    unsigned char completed, flag, phase, rounds;
    unsigned char pad[60];
    u32 *ids;
};
struct Global { u32 deferred, running, unused; struct State *state; };
extern struct Global DAT_0211de50;
extern int FUN_020e0558(void), FUN_020e2b84(void), FUN_020e33c0(void), FUN_020d1ff8(void);
extern int FUN_020d2010(void);
extern void FUN_020d1fb0(void), FUN_020e2d90(void);
extern void FUN_020e2bfc(struct Record *, int);
extern int FUN_020dd2c8(struct Record *);
extern void *FUN_020e05ac(int, u32);
extern void FUN_020e2940(int, int);
extern u32 FUN_020e1ea8(void), FUN_020dd83c(u32, struct Record *);
extern void FUN_020e33e4(void *, void *, u32);
extern int FUN_020c9190(u32 *, u32 *, int, int, void (*)(void *, void *, u32), u32);
extern int FUN_020e2f9c(int);

void FUN_020e2740(void)
{
    struct State *s;
    int matches, i, appended;
    if (!DAT_0211de50.state || FUN_020e0558()) return;
    s = DAT_0211de50.state;
    if (!s->records) {
        if (s->connection && *s->connection) FUN_020e2b84();
        return;
    }
    if (FUN_020e33c0() || FUN_020d1ff8()) {
        DAT_0211de50.running = 1;
        DAT_0211de50.deferred = 0;
        FUN_020d2010();
        DAT_0211de50.running = 0;
        if (DAT_0211de50.deferred == 1) {
            DAT_0211de50.deferred = 0;
            FUN_020d1fb0();
        }
    }
    s = DAT_0211de50.state;
    if (s->connection && *s->connection) {
        if (FUN_020e2b84()) return;
        s = DAT_0211de50.state;
        if (!s->active) return;
        if (s->records && s->phase != 3 && s->ticks > 7) {
            if (s->phase <= 1) FUN_020e2bfc(s->records, s->count);
            s = DAT_0211de50.state;
            if ((int)s->completed >= s->count) {
                s->phase = 3;
                DAT_0211de50.state->rounds++;
            }
        }
    }
    s = DAT_0211de50.state;
    if (s->rounds < 2) return;
    if (s->connection && *s->connection) {
        appended = 0;
        matches = 0;
        for (i = 0; i < DAT_0211de50.state->count; i++) {
            if (FUN_020dd2c8(&DAT_0211de50.state->records[i]) == 3) {
                matches++;
            }
        }
        if (!matches) {
            DAT_0211de50.state->rounds = 0;
            FUN_020e2d90();
            return;
        }
        DAT_0211de50.state->ids = FUN_020e05ac(4, (u32)matches * 4);
        if (!DAT_0211de50.state->ids) {
            FUN_020e2940(9, -70001);
            return;
        }
        for (i = 0; i < DAT_0211de50.state->count; i++) {
            if (FUN_020dd2c8(&DAT_0211de50.state->records[i]) == 3) {
                DAT_0211de50.state->ids[appended] = FUN_020dd83c(FUN_020e1ea8(), &DAT_0211de50.state->records[i]);
                appended++;
            }
        }
        if (FUN_020e2f9c(FUN_020c9190(DAT_0211de50.state->connection, DAT_0211de50.state->ids, matches, 0, FUN_020e33e4, 0))) return;
    }
    DAT_0211de50.state->rounds = 0;
}
