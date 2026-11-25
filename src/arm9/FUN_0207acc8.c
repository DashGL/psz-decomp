// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[12]; } Matrix;
typedef struct { int w[25]; } Effect;
extern short UNK_020ed83c[];
extern int FUN_0207a5dc(void *), FUN_0204771c(void *);
#pragma thumb off
extern void FUN_0205b16c(Matrix *), FUN_0205b1c8(Matrix *, Matrix *, int, int, int), FUN_0205b68c(Matrix *, Matrix *, Matrix *);
#pragma thumb on
extern void FUN_0205b2a8(Matrix *, int, int), FUN_0205b2c8(Matrix *, int, int);
extern void FUN_02035408(Vec *, int, int, int), FUN_0203666c(Effect *), FUN_02046d94(Effect *, int, int);
extern void *FUN_0207e858(Effect *, int, int);
#define W(n) (*(int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
int FUN_0207acc8(char *s) {
    Effect trail, end;
    Matrix matrix, temp;
    Vec pos, flat;
    int result, angle, index;
    result = FUN_0207a5dc(s);
    if (!result && FUN_0204771c(s) && W(408) < W(404)) {
        angle = (unsigned short)(H(380) * W(408));
        FUN_0205b16c(&matrix);
        FUN_0205b1c8(&matrix, &matrix, 0, 0, -W(416));
        FUN_0205b16c(&temp);
        index = (angle >> 4) * 2;
        FUN_0205b2a8(&temp, UNK_020ed83c[index], UNK_020ed83c[index + 1]);
        FUN_0205b68c(&matrix, &temp, &matrix);
        matrix.w[11] += W(416);
        if (W(412) < matrix.w[11]) W(412) = matrix.w[11];
        else matrix.w[11] = W(412);
        FUN_0205b16c(&temp);
        index = (H(106) >> 4) * 2;
        FUN_0205b2c8(&temp, UNK_020ed83c[index], UNK_020ed83c[index + 1]);
        FUN_0205b68c(&matrix, &temp, &matrix);
        FUN_02035408(&pos, matrix.w[9] + W(384), matrix.w[10] + W(388), matrix.w[11] + W(392));
        *(Vec *)(s + 92) = pos;
        W(396)++;
        if (W(396) > W(400)) {
            FUN_0203666c(&trail);
            *(Vec *)&trail.w[8] = *(Vec *)(s + 92);
            trail.w[21] = 31;
            trail.w[22] = W(232);
            FUN_02046d94(&trail, W(280), 0);
            W(396) = 0;
        }
        W(408)++;
        if (W(408) >= W(404)) {
            W(228) |= 1;
            FUN_0203666c(&end);
            flat.x = W(92);
            flat.y = 0;
            flat.z = W(100);
            *(Vec *)&end.w[8] = flat;
            end.w[21] = 39;
            end.w[17] = 3;
            end.w[18] = 3;
            end.w[19] = -1;
            FUN_0207e858(&end, 1, W(280));
        }
    }
    return result;
}
