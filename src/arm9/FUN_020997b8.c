//cpp
// flags: -O4,s
#pragma always_inline on
struct Stats {
    unsigned short h[8];
    unsigned char b;
    unsigned char pad[3];
    int w;

    inline void operator=(const Stats &o) {
        h[0] = o.h[0];
        h[1] = o.h[1];
        h[2] = o.h[2];
        h[3] = o.h[3];
        h[4] = o.h[4];
        h[5] = o.h[5];
        h[6] = o.h[6];
        h[7] = o.h[7];
        b = o.b;
        w = o.w;
    }
};

struct Traits {
    signed char b[8];

    inline void operator=(const Traits &o) {
        b[0] = o.b[0];
        b[1] = o.b[1];
        b[2] = o.b[2];
        b[3] = o.b[3];
        b[4] = o.b[4];
        b[5] = o.b[5];
        b[6] = o.b[6];
        b[7] = o.b[7];
    }
};

struct Description {
    char a[16];
    char b[16];
    char tail[4];
};

struct Archive {
    virtual ~Archive();
};

struct Manager {
    void *heap;
    char pad04[0x38];
    Stats *stats;
    Traits *traits;
};

extern "C" {
extern char UNK_020f4640[];
extern void FUN_02099498(void *, void *);
extern void FUN_020c4434(void *);
extern void FUN_020ba8b4(void *);
extern void *FUN_020c13c8(void *, int, int);
extern void *FUN_020ba894(int);
extern void *FUN_020ba8a0(int);
extern Archive *FUN_020c3ca0(void *, void *);
extern void *FUN_020ba440(void *);
extern int FUN_0209999c(void *, Description *, int);
extern int FUN_0209e350(Description *);
extern int FUN_020c3d34(void *, int);
extern int FUN_020c3d58(void *, int, void *);

void FUN_020997b8(Manager *s, int level) {
    int i;
    Archive *archive;
    if (level < 1 || level > 100) {
        return;
    }
    FUN_02099498(s, s->stats);
    FUN_02099498(s, s->traits);
    s->stats = (Stats *)FUN_020c13c8(s->heap, 120, 16);
    s->traits = (Traits *)FUN_020c13c8(s->heap, 40, 16);
    archive = (Archive *)FUN_020ba894(88);
    if (archive) {
        archive = FUN_020c3ca0(archive, *(void **)(UNK_020f4640 + 12));
    }
    for (i = 0; i < 5; i++) {
        Description desc;
        int id;
        int size;
        FUN_020c4434(desc.a);
        FUN_020c4434(desc.b);
        FUN_0209999c(s, &desc, i);
        id = FUN_0209e350(&desc);
        size = FUN_020c3d34(archive, id);
        if (size > 0) {
            void *buf1 = FUN_020ba8a0(size);
            FUN_020c3d58(archive, id, buf1);
            Stats *base = (Stats *)FUN_020ba440(buf1);
            s->stats[i] = base[level - 1];
            if (buf1) {
                FUN_020ba8b4(buf1);
            }
        }
        size = FUN_020c3d34(archive, 14);
        if (size > 0) {
            void *buf2 = FUN_020ba8a0(size);
            FUN_020c3d58(archive, 14, buf2);
            Traits *tbase = (Traits *)FUN_020ba440(buf2);
            s->traits[i] = tbase[id];
            if (buf2) {
                FUN_020ba8b4(buf2);
            }
        }
    }
    if (archive) {
        delete archive;
    }
}
}
