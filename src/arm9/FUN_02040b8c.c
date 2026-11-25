//cpp
// flags: -O2,s
enum { E0 = 0, E1 = 1 };
struct Self_40b8c { int dummy; };
typedef void (Self_40b8c::*PMF_40b8c)(void *, void *);
struct Entry_40b8c {
    int pad[6];
    PMF_40b8c fn;
};
extern "C" Entry_40b8c DAT_020f8c64[];
extern "C" void FUN_02040b8c(Self_40b8c *self, char *state) {
    char *sequence = *(char **)state;
    if (sequence) {
        int count = *(int *)(sequence + 12);
        int i;
        for (i = 0; i < count; i++) {
            char *record = *(char **)(sequence + 8) + 16 * i;
            char *slot = state + 52 + 20 * i;
            if ((*(int *)slot == 1 ? E1 : E0) != E0) {
                Entry_40b8c *e = &DAT_020f8c64[*(signed char *)(record + 2)];
                PMF_40b8c fn = e->fn;
                if (fn != 0) {
                    (self->*fn)(record, slot);
                }
            }
            *(int *)slot = 2;
        }
    }
}
