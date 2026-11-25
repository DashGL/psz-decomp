// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { Vec delta, target; } Frame;
extern void FUN_02037910(void *, int);
extern int FUN_020866b4(int, void *);
#pragma thumb off
extern void FUN_0205c8cc(void *, void *);
extern unsigned short FUN_0205cc08(int);
extern int FUN_02000ec4(int);
#pragma thumb on

void FUN_overlay_24__021996f4(int *self, short *amount, int *targetId, int kind)
{
    Frame f;
    int *owner;
    unsigned short angle, current, difference;
    if (kind != -1) FUN_02037910(self, self[21]);
    owner = (int *)self[1];
    if (*targetId != owner[3] && FUN_020866b4(*targetId, &f.target)) {
        Vec *pos = (Vec *)(owner + 14);
        int dz, dy, dx;
        current = ((unsigned short *)owner)[34];
        dz = f.target.z - pos->z;
        dy = f.target.y - pos->y;
        dx = f.target.x - owner[14];
        f.delta.y = dy;
        f.delta.x = dx;
        f.delta.z = dz;
        if (dx || dy || dz) FUN_0205c8cc(&f.delta, &f.delta);
        angle = FUN_0205cc08(f.delta.z);
        if (f.delta.x < 0) angle = (unsigned short)(65536 - angle);
        difference = (unsigned short)(angle - current);
        if (difference >= 32768) difference = (unsigned short)(65536 - difference);
        if (difference >= 14563) self[16]++;
    }
    self[17] += FUN_02000ec4(*amount);
    if (self[17] > ((short *)owner)[12] / 3) {
        self[17] = 0;
        self[19] = 2;
    }
    self[12] = 0;
}
