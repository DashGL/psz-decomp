// flags: -O4,s
typedef struct { int a, b, c, d; } Four;
typedef struct { int first; Four a, b; } Snapshot;
extern char *DAT_02108d04;
extern int FUN_0207f770(void *);

int FUN_020a9440(void) {
    char *p = DAT_02108d04;
    int result = 0;
    if (p) {
        Snapshot *src = (Snapshot *)(p + 0x158);
        Snapshot snap;
        snap.first = src->first;
        snap.a = src->a;
        snap.b = src->b;
        if (FUN_0207f770(&snap) != -1) {
            result = 1;
        }
    }
    return result;
}
