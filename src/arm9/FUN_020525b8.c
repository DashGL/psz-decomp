// flags: -O4,s
typedef struct { unsigned int w[9]; } Block;
typedef struct { unsigned int x, y; } Pair;
typedef struct { unsigned char b[4]; Pair ac; Block block; unsigned int d, e, f; Pair gh; } Record;
int FUN_020525b8(char *s, unsigned int id, Record *out) {
    int i;
    int count = *(unsigned char *)(s + 272);
    if (id < (unsigned int)count) {
        for (i = 0; i < count; i++)
            if (id == *(unsigned char *)(s + 264 + i)) {
                Record *p = *(Record **)(s + 152 + 4 * i);
                if (p) {
                    out->b[0] = p->b[0]; out->b[1] = p->b[1]; out->b[2] = p->b[2]; out->b[3] = p->b[3];
                    out->ac = p->ac;
                    out->block = p->block;
                    out->d = p->d; out->e = p->e; out->f = p->f;
                    out->gh = p->gh;
                    return 1;
                }
            }
    }
    return 0;
}