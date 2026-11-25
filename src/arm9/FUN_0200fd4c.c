// FUN_0200fd4c @ 0x0200fd4c (0xc0, arm) - ported from FUN_0202a3dc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
struct Pair { u32 a, b; };
extern struct Pair FUN_0206a4d0(void);
extern int FUN_0206a4f0(void *, void *, struct Pair *);
extern int FUN_0200fc84(void *, u16, void *, void *);

struct Entry {
    u8 type;
    u8 pad;
    u16 id;
    u16 tag;
    u16 pad2;
    u32 f8;
};

int FUN_0200fd4c(void *s, void *iter, int tag, void *a3, void *a4) {
    struct Pair p1 = FUN_0206a4d0();
    struct Entry ent;
    if (iter == 0) {
        return 0;
    }
    int ok = FUN_0206a4f0(iter, &ent, &p1);
    while (ok != 0) {
        if (ent.type == 1 && tag == ent.tag) {
            if (FUN_0200fc84(s, ent.id, a3, a4) == 0) {
                return 0;
            }
        }
        ok = FUN_0206a4f0(iter, &ent, &p1);
    }
    return 1;
}
