// flags: -O4,s
typedef struct {
    int a;
    signed char idx;
} S;
typedef struct {
    int x;
    int enabled;
} Slot;
extern Slot DAT_0213ecb4[];
void FUN_overlay_12__021224cc(S *p, int limit) {
    while (!DAT_0213ecb4[p->idx].enabled || p->idx > limit) {
        if (p->idx > limit) p->idx = 0;
        if (p->idx != 4 && !DAT_0213ecb4[p->idx].enabled) {
            p->idx++;
        }
        if (p->idx >= limit) break;
    }
}
