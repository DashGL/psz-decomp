// flags: -O4,s -lang c++
typedef struct { int off, ty; } Entry;
typedef struct {
    char pad0[0xc];
    char *f0c;
    int f10[2];
    char pad1[0xa4 - 0x18];
    char *fa4;
} S_9aa0c;

extern "C" {
extern char *DAT_02108c64;
extern void *DAT_0210e24c;
extern int FUN_02051b3c(void *, int, int, Entry *);
extern int FUN_0209aba8(void *, void *, int, void *);
extern void FUN_020ba8b4(void *);
extern void FUN_0209ab6c(void *);
#pragma thumb off
extern char *FUN_0200c2dc(int, int, int, void (*)(void *), void *);
#pragma thumb on
extern void *FUN_0209ab74(void *, int, int);
void FUN_0209aa0c(S_9aa0c *s);
}

void FUN_0209aa0c(S_9aa0c *s) {
    Entry entries[2][32];
    int counts[2];
    int sum = 0;
    for (int i = 0; i < 2; ++i) {
        counts[i] = FUN_02051b3c(DAT_0210e24c, (signed char)DAT_02108c64[22], i, entries[i]);
        sum += counts[i];
        s->f10[i] = 0;
    }
    if (s->f0c) {
        FUN_020ba8b4(s->f0c);
        s->f0c = 0;
    }
    if (sum <= 0) return;
    int total = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            total += (unsigned char)s->fa4[entries[i][j].off + 12];
        }
    }
    s->f0c = FUN_0200c2dc(total, 6, 0, FUN_0209ab6c, 0);
    if (!s->f0c) return;
    int used = 0;
    int type, n, k;
    for (int i = 0; i < 2; ++i) {
        Entry *ent = entries[i];
        int cnt = counts[i];
        for (int j = 0; j < cnt; ++j) {
            int offset = ent[j].off;
            type = ent[j].ty;
            n = (unsigned char)s->fa4[offset + 12];
            for (k = 0; k < n; ++k) {
                if (used < total) {
                    if (FUN_0209aba8(s, FUN_0209ab74(s->fa4, offset, k), type, s->f0c + 6 * used + 2)) {
                        s->f0c[6 * used] = (signed char)type;
                        ++used;
                        ++s->f10[i];
                    }
                }
            }
        }
    }
}
