// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int UNK_020f2a6c[];
extern void *UNK_02108cf4;
extern int FUN_0200a3a0(int, int);
extern char *FUN_020352a4(void *, int);
extern char *FUN_020352c0(void *);
extern int FUN_0204e88c(void *, void *, int);
extern void FUN_02036348(void *, void *, void *);
extern void FUN_0203647c(void *, void *, void *);
extern void FUN_02036384(void *, void *);

void FUN_0207d67c(char *s) {
    int radius = 4096;
    int index = *(int *)(s + 280);
    int i;
    if (index >= 0 && index < 3) {
        radius = UNK_020f2a6c[index] << 12;
    }
    for (i = 4; i <= 515; i++) {
        char *raw = FUN_020352a4(UNK_02108cf4, i);
        char *actor;
        if (!raw) continue;
        actor = FUN_020352c0(raw);
        if (!actor) continue;
        {
            Vec delta, step, copy, out;
            Vec *other = (Vec *)(actor + 56);
            if (!other) continue;
            copy = *other;
            if (!FUN_0204e88c(s + 92, &copy, radius)) continue;
            {
                int x, z, ax, az, mx, mz, dx, dz;
                FUN_02036348(&delta, s + 92, other);
                x = delta.x;
                ax = x;
                if (x < 0) ax = -x;
                z = delta.z;
                az = z;
                if (z < 0) az = -z;
                mx = FUN_0200a3a0(ax * 409, ax + az);
                mz = FUN_0200a3a0(az * 409, ax + az);
                dx = FUN_0200a3a0(ax, x) * mx;
                dz = FUN_0200a3a0(az, z) * mz;
                step.x = dx;
                step.y = 0;
                step.z = dz;
                FUN_0203647c(&out, actor + 56, &step);
                FUN_02036384(actor, &out);
            }
        }
    }
}
