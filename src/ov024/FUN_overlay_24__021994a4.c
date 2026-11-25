// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int target, min, max; Vec3 position; unsigned short yaw, span; unsigned flags; } Query;
enum { E0 = 0, E1 = 1 };
extern int DAT_0219c448[];
extern void FUN_overlay_24__02199810(void *), FUN_02037910(void *, void *);
extern int FUN_02036c34(void *), FUN_020865fc(Query *);
extern void FUN_overlay_24__02199670(Query *), FUN_overlay_24__0219969c(Query *, int), FUN_overlay_24__021996c8(Query *, int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_24__021994a4(void *self)
{
    void *current, *special, *idle, *actor;
    Vec3 *position;
    unsigned short yaw;
    Query query;
    FUN_overlay_24__02199810(self);
    current = P(self, 8); special = P(self, 0x6c); actor = P(self, 4);
    if (((special == current) ? E1 : E0) != 0) {
        if (--I(self, 0x30) < 0) FUN_02037910(self, P(self, 0x5c));
    } else if ((((idle = P(self, 0x5c)) == current) ? E1 : E0) != 0) {
        yaw = H(actor, 0x44); position = &V(actor, 0x38); FUN_02036c34(actor);
        if (((I(self, 0xc) == 0) ? E1 : E0) != 0 && I(self, 0x4c) != -1) {
            FUN_02037910(self, P(self, DAT_0219c448[I(self, 0x4c)]));
            I(self, 0x4c) = -1;
        }
        if (((I(self, 0xc) == 0) ? E1 : E0) != 0) {
            FUN_overlay_24__02199670(&query); query.position = *position; query.yaw = yaw; query.span = 0x71c; query.flags |= 4;
            FUN_overlay_24__0219969c(&query, 0x7000); FUN_overlay_24__021996c8(&query, 0x9000); query.target = I(self, 0x38);
            if (FUN_020865fc(&query) || I(self, 0x40) > 5) { FUN_02037910(self, P(self, 0x68)); I(self, 0x40) = 0; }
        }
        if (((I(self, 0xc) == 0) ? E1 : E0) != 0) {
            FUN_overlay_24__02199670(&query); query.position = *position; query.yaw = yaw; query.span = 0x1000; query.flags |= 4;
            FUN_overlay_24__021996c8(&query, 0x4800); query.target = I(self, 0x38);
            if (FUN_020865fc(&query)) FUN_02037910(self, P(self, 0x64));
        }
        if (((I(self, 0xc) == 0) ? E1 : E0) != 0) {
            FUN_overlay_24__02199670(&query); query.position = *position; query.yaw = yaw; query.span = 0x1000; query.flags |= 4;
            FUN_overlay_24__0219969c(&query, 0x9000); FUN_overlay_24__021996c8(&query, 0xf000); query.target = I(self, 0x38);
            if (FUN_020865fc(&query)) FUN_02037910(self, P(self, 0x60));
        }
    } else if (((current == P(self, 0x10)) ? E1 : E0) != 0) {
        if (I(self, 0x30) > 0) FUN_02037910(self, special);
        else FUN_02037910(self, idle);
    }
}
