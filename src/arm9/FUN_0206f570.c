// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern int FUN_02085880(int);
extern void FUN_0203666c(void *), FUN_020345f0(void *, const void *), FUN_0203647c(void *, const void *, const void *);
extern void *FUN_02046d94(void *, unsigned int, unsigned int);
void FUN_0206f570(unsigned char *self) {
    unsigned int effect[25]; Vec pos, sum, unit;
    if (self && FUN_02085880(*(int *)(self + 0xfc)) == 1) {
        FUN_0203666c(effect);
        FUN_020345f0(&pos, self + 0xb4);
        unit.x = 0; unit.y = 4096; unit.z = 0;
        FUN_0203647c(&sum, &pos, &unit);
        *(Vec *)(effect + 8) = sum;
        effect[21] = 36;
        effect[22] = *(unsigned int *)(self + 0xfc);
        effect[7] |= 0x08000000;
        effect[17] = 1;
        effect[18] = 16;
        effect[19] = ~0u;
        FUN_02046d94(effect, 0, 0);
    }
}
