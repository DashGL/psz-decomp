// flags: -O4,s
typedef struct { int x, y, z; } V332;
typedef struct { int w[4]; } K332;
typedef union { int align; char b[100]; } D332;
extern const K332 DAT_020f2c34, DAT_020f2c44;
extern int FUN_02047440(void *), FUN_0204771c(void *), FUN_0204e8bc(void *, int, int), FUN_0204dab0(int), FUN_0204dac4(int);
extern void FUN_0206e730(void *, void (*)(void *)), FUN_0206e740(void *, void *), FUN_0207bb18(void *), FUN_020464d4(void *, void *, int, void *, int), FUN_0204a8c4(int, int, void *, int), FUN_0203666c(void *), FUN_020472cc(void *, int), FUN_020456bc(void *, int), FUN_02035408(void *, int, int, int), FUN_0207edbc(void *, int, void *, void *), FUN_02046d94(void *, int, int), FUN_02047ae8(void *), FUN_0204fc0c(int, void *, void *, int);
int FUN_0207b898(char *s) {
    int result = FUN_02047440(s);
    void *child;
    D332 beam, burst;
    K332 a, b;
    V332 target, point;
    int attack[13];
    V332 adjusted, top, bottom, ground, scale, fallback;
    if (!result && FUN_0204771c(s)) {
        if (*(int *)(s + 268) == 0 && (child = *(void **)(s + 48)) != 0) {
            if (child) {
                FUN_0206e730(child, FUN_0207bb18);
                FUN_0206e740(child, s);
                *(int *)(s + 268) = 1;
            }
            if (*(int *)(s + 416)) {
                a = DAT_020f2c34;
                FUN_020464d4(s + 272, s + 276, 140, &a, 0);
            } else {
                b = DAT_020f2c44;
                FUN_020464d4(s + 272, s + 276, 20, &b, 0);
            }
            if (*(int *)(s + 420) != -1 && FUN_0204e8bc(&target, *(int *)(s + 420), *(int *)(s + 424))) {
                adjusted.x = target.x;
                adjusted.y = *(short *)(s + 280) * *(int *)(s + 284);
                adjusted.z = target.z;
                *(V332 *)(s + 92) = adjusted;
            }
            FUN_0204a8c4(3, 7, s + 92, -1);
        }
        if ((*(int *)(s + 148) / *(int *)(s + 76)) & 1) {
            FUN_0203666c(beam.b);
            *(V332 *)(beam.b + 32) = *(V332 *)(s + 92);
            if (*(int *)(s + 416)) *(int *)(beam.b + 84) = 142;
            else *(int *)(beam.b + 84) = 34;
            *(int *)(beam.b + 88) = *(int *)(s + 232);
            FUN_020472cc(beam.b, *(int *)(beam.b + 84));
            FUN_020456bc(beam.b, *(int *)(beam.b + 84));
            {
                int z = *(int *)(s + 100);
                int x = *(int *)(s + 92);
                bottom.x = x;
                bottom.y = 0;
                bottom.z = z;
            }
            FUN_02035408(&top, *(int *)(s + 92), *(int *)(s + 288), *(int *)(s + 100));
            FUN_0207edbc(beam.b, *(int *)(s + 264), &top, &bottom);
        }
        if (*(int *)(s + 412) == 0 && *(int *)(s + 292) > *(int *)(s + 284)) {
            FUN_0203666c(burst.b);
            ground.x = *(int *)(s + 92);
            ground.y = 0;
            ground.z = *(int *)(s + 100);
            *(V332 *)(burst.b + 32) = ground;
            FUN_02035408(&scale, *(int *)(s + 408), *(int *)(s + 408), *(int *)(s + 408));
            *(V332 *)(burst.b + 44) = scale;
            if (*(int *)(s + 416)) *(int *)(burst.b + 84) = 141;
            else *(int *)(burst.b + 84) = 101;
            *(int *)(burst.b + 88) = *(int *)(s + 232);
            FUN_02046d94(burst.b, 0, 0);
            *(int *)(s + 412) = 1;
            if ((FUN_0204dab0(*(int *)(s + 232)) || FUN_0204dac4(*(int *)(s + 232))) && !*(int *)(s + 416)) {
                {
                    int z = *(int *)(s + 100);
                    int x = *(int *)(s + 92);
                    point.x = x;
                    point.y = 0;
                    point.z = z;
                }
                if (*(int *)(s + 420) != -1 && !FUN_0204e8bc(&point, *(int *)(s + 420), *(int *)(s + 424))) {
                    fallback.x = *(int *)(s + 92);
                    fallback.y = 0;
                    fallback.z = *(int *)(s + 100);
                    point = fallback;
                }
                FUN_02047ae8(attack);
                attack[0] = *(int *)(s + 232);
                attack[3] = 23;
                attack[5] = 3;
                attack[6] = 9;
                attack[7] = 1;
                FUN_0204fc0c(0, attack, &point, 4096);
            }
        }
    }
    return result;
}
