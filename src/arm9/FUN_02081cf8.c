// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct S81cf8 {
    unsigned char pad0[0x48];
    unsigned char *flags;
    unsigned char pad1[0x54 - 0x4c];
    unsigned char base_idx;
    unsigned char pad2[0x5c - 0x55];
    int count;
    unsigned char *data;
    unsigned short cur[20];
    unsigned short step[20];
} S81cf8;
extern char *UNK_02108c64;
extern void FUN_020316e8(void *, void *), FUN_0204bf88(void *);
extern void *FUN_0204f3b8(void);
extern char *FUN_0204f4c0(void *, void *, int);

void FUN_02081cf8(S81cf8 *s) {
    int key, i, sum;
    unsigned short old, increment, res;
    char *entry, *actor;
    unsigned char *data;
    if (!((*s->flags & 8) ? E1 : E0)) return;
    FUN_020316e8(&key, UNK_02108c64 + 20);
    for (i = 0; i < 20; i++) {
        entry = FUN_0204f4c0(FUN_0204f3b8(), &key, s->base_idx - i);
        if (!entry || !*(void **)(entry + 20) || (unsigned char)entry[4] == 4) continue;
        data = s->data;
        if (data && i < s->count && *(unsigned short *)(data + i * 20 + 16) == 5) {
            if (s->cur[i] - s->step[i] > 0)
                s->cur[i] -= s->step[i];
            else
                s->cur[i] = 0;
        }
        actor = *(char **)(entry + 20);
        old = *(volatile unsigned short *)(actor + 106);
        increment = s->cur[i];
        sum = old + increment;
        if (sum > 65536)
            res = (unsigned short)(old + (increment - 65536));
        else
            res = (unsigned short)sum;
        *(unsigned short *)(actor + 106) = res;
        FUN_0204bf88(actor);
    }
}
