// flags: -O4,s
typedef struct { int x, y, z; } Vec_9bcc;
extern int FUN_020866b4(int, Vec_9bcc *);
extern void FUN_02036348(Vec_9bcc *, const Vec_9bcc *, const Vec_9bcc *);
extern const Vec_9bcc DAT_020fc958;
enum { E0 = 0, E1 = 1 };

unsigned short FUN_overlay_31__02199bcc(unsigned char *self) {
    unsigned short heading = *(unsigned short *)(self + 68);
    unsigned char *state = *(unsigned char **)(self + 16);
    Vec_9bcc target = DAT_020fc958, origin, delta;
    if (!FUN_020866b4(*(int *)(state + 88), &target)) return heading;
    origin = *(Vec_9bcc *)(self + 56);
    FUN_02036348(&delta, &target, &origin);
    if (((delta.x < delta.z) ? E1 : E0) != 0) {
        if (((-delta.x < delta.z) ? E1 : E0) != 0) return 0;
        return 49152;
    }
    if (((-delta.x < delta.z) ? E1 : E0) != 0) return 16384;
    return 32768;
}
