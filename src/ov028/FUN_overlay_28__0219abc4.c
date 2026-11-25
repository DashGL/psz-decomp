// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern int DAT_0219c308[];
extern void *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);

void FUN_overlay_28__0219abc4(int *self)
{
    Vec position;
    int *child = (int *)FUN_02075040(self, self[53]);
    void *other = FUN_02075040(self, self[54]);

    if (child && !other) {
        enum { E0 = 0, E1 = 1 };
        int velocity;

        position = *(Vec *)(child + 23);
        position.x += self[56];
        position.y += self[57];
        position.z += self[58];
        *(Vec *)(child + 23) = position;
        velocity = self[57] + DAT_0219c308[1];
        if (((velocity < DAT_0219c308[3]) ? E1 : E0) != 0) {
            velocity = *(volatile int *)&DAT_0219c308[3];
        }
        self[57] = velocity;
        ((unsigned short *)child)[53] += 2304;
        FUN_0204bf88(child);
        ((unsigned short *)child)[52] += 4096;
        FUN_0204bf88(child);
    }
}
