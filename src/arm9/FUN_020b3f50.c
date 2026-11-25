// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { unsigned char b[4]; } Key;
typedef struct {
    void * volatile created;
    Key b4;
    unsigned char pad8[12];
    Vec pos;
    unsigned char key[4];
    unsigned char id;
    volatile unsigned char flag;
    unsigned char pad26[2];
} Entry;
typedef struct {
    volatile unsigned char next_id;
    unsigned char pad[15];
    int count;
} Mgr;

extern Mgr DAT_0211aa74;
extern Entry DAT_0211aaa4[];
extern char UNK_0211aac4[];
extern int FUN_0203a820(void *, int);
extern void FUN_020b41a0(void *, int);
extern void FUN_02039534(void *, void *);
extern void FUN_02032838(void *, void *);
extern void *FUN_020b4414(void *, void *, int);

int FUN_020b3f50(void *s, void *item, Vec *position, void *key, int flag, int requested) {
    int i, id;
    Key copy;
    void *created;
    while (DAT_0211aa74.count >= 50) {
        id = *(unsigned char *)(UNK_0211aac4 + 4);
        for (i = 0; i < 30; i++) {
            copy = DAT_0211aaa4[i].b4;
            if (FUN_0203a820(&copy, 4)) {
                id = DAT_0211aaa4[i].id;
                break;
            }
        }
        FUN_020b41a0(s, id);
    }
    if (requested == -1) {
        id = DAT_0211aa74.next_id;
    } else {
        id = (unsigned char)requested;
    }
    created = FUN_020b4414(item, position, id);
    DAT_0211aaa4[DAT_0211aa74.count].id = id;
    FUN_02039534(&DAT_0211aaa4[DAT_0211aa74.count].b4, item);
    {
        Entry *e = &DAT_0211aaa4[DAT_0211aa74.count];
        e->pos = *position;
        FUN_02032838(e->key, key);
    }
    DAT_0211aaa4[DAT_0211aa74.count].flag = flag;
    DAT_0211aaa4[DAT_0211aa74.count].created = created;
    DAT_0211aa74.count++;
    DAT_0211aa74.next_id++;
    return id;
}
