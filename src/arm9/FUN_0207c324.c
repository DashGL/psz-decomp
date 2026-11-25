// flags: -O4,s
typedef struct { int x, y, z; } Vec_0207c324;
typedef struct { int w[4]; } Name_0207c324;
typedef struct { int w[25]; } Effect_0207c324;
typedef struct { int w[13]; } Impact_0207c324;
typedef void (*Callback_0207c324)(void *);
extern const Name_0207c324 UNK_020f2c54;
extern int FUN_02047440(void *), FUN_0204771c(void *), FUN_0204dab0(int), FUN_0204dac4(int), FUN_0204e8bc(Vec_0207c324 *, int, int);
extern void FUN_0207c4b4(void *), FUN_0206e730(void *, Callback_0207c324), FUN_0206e740(void *, void *), FUN_020464d4(void *, void *, int, Name_0207c324 *, int), FUN_0207a120(int, Vec_0207c324 *, int, int, int), FUN_0203666c(Effect_0207c324 *), FUN_020472cc(Effect_0207c324 *, int), FUN_020456bc(Effect_0207c324 *, int), FUN_0207edf4(void *, int, int), FUN_0207c6f0(void *), FUN_02047ae8(Impact_0207c324 *), FUN_0204fc0c(int, Impact_0207c324 *, Vec_0207c324 *, int);
extern void *FUN_0207edbc(Effect_0207c324 *, int, void *, Vec_0207c324 *);
static inline void set_vec_0207c324(Vec_0207c324 *v, int x, int y, int z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
#define W(n) (*(int *)(s + (n)))
int FUN_0207c324(char *s) {
    int result = FUN_02047440(s);
    if (!result && FUN_0204771c(s)) {
        if (!W(280)) {
            void *model = *(void **)(s + 48);
            if (model) {
                Name_0207c324 name;
                if (model) {
                    FUN_0206e730(model, FUN_0207c4b4);
                    FUN_0206e740(model, s);
                    W(280) = 1;
                }
                name = UNK_020f2c54;
                FUN_020464d4(s + 284, s + 288, 20, &name, 0);
                if (!W(312)) FUN_0207a120(W(232), (Vec_0207c324 *)(s + 92), *(unsigned short *)(s + 106), 2, 8);
            }
        }
        if ((W(148) / W(76)) & 1) {
            Effect_0207c324 effect;
            void *spawned;
            FUN_0203666c(&effect);
            *(Vec_0207c324 *)((char *)&effect + 32) = *(Vec_0207c324 *)(s + 92);
            effect.w[21] = 34;
            effect.w[22] = W(232);
            FUN_020472cc(&effect, 34);
            FUN_020456bc(&effect, effect.w[21]);
            spawned = FUN_0207edbc(&effect, W(324), s + 260, (Vec_0207c324 *)(s + 92));
            if (spawned) FUN_0207edf4(spawned, 1, 2);
        }
        if (W(332) > W(148)) {
            FUN_0207c6f0(s);
            if (FUN_0204dab0(W(232)) || FUN_0204dac4(W(232))) {
                Vec_0207c324 position;
                Impact_0207c324 impact;
                set_vec_0207c324(&position, W(92), 0, W(100));
                if (W(336) != -1 && !FUN_0204e8bc(&position, W(336), W(340))) {
                    Vec_0207c324 fallback;
                    set_vec_0207c324(&fallback, W(92), 0, W(100));
                    position = fallback;
                }
                FUN_02047ae8(&impact);
                impact.w[0] = W(232);
                impact.w[3] = 24;
                impact.w[5] = 3;
                impact.w[6] = 9;
                impact.w[7] = 1;
                FUN_0204fc0c(0, &impact, &position, 4096);
            }
        }
    }
    return result;
}
