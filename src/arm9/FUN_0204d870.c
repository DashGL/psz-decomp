// flags: -O4,s
typedef struct { unsigned char b[4]; } ID;
typedef struct { int x, y, z; } V;
typedef struct { int m[12]; } M43;
typedef struct { int m[9]; } M33;
typedef struct { int f0; char *owner; char *effects[2]; } Self;
extern int FUN_0204ca4c(ID *, int);
extern char *FUN_0204daa8(int);
extern int FUN_0204260c(void *, unsigned int, M43 *, M33 *);
extern void FUN_0204a8fc(V *, M43 *, M33 *, V *);
extern void *FUN_0203666c(void *);
extern char *FUN_02046d94(void *, int, int);
extern void FUN_0204da3c(void *, unsigned int);

void FUN_0204d870(Self *self, ID *item)
{
    int count, i, flag;
    unsigned int descriptor[25];
    V positions[2];
    M43 matrix;
    M33 rotation;
    V temp, delta1, delta2, zero, scale;
    ID a, b, c, d;

    if (!self->owner) return;
    count = 1;
    flag = 1;
    a = *item;
    if (!FUN_0204ca4c(&a, 10)) {
        b = *item;
        if (!FUN_0204ca4c(&b, 17)) flag = 0;
    }
    if (flag) {
        char *attachment;
        count = 2;
        attachment = FUN_0204daa8(*(int *)(self->owner + 232));
        if (attachment) {
            char *att2 = *(char **)(attachment + 140);
            if (att2) {
                int y = 0, x = 0, z = 0;
                c = *item;
                if (FUN_0204ca4c(&c, 10)) {
                    y = 2048;
                    x = -2048;
                    z = 1536;
                } else {
                    d = *item;
                    if (FUN_0204ca4c(&d, 17)) {
                        y = 2816;
                        x = -1024;
                        z = 0;
                    }
                }
                FUN_0204260c(att2, 2, &matrix, &rotation);
                delta1.x = x;
                delta1.y = y;
                delta1.z = z;
                FUN_0204a8fc(&temp, &matrix, &rotation, &delta1);
                positions[0] = temp;
                delta2.x = x;
                delta2.y = -y;
                delta2.z = z;
                FUN_0204a8fc(&temp, &matrix, &rotation, &delta2);
                positions[1] = temp;
            }
        }
    }
    if (count == 1) {
        positions[0] = *(V *)(self->owner + 92);
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        positions[1] = zero;
    }
    for (i = 0; i < count; i++) {
        FUN_0203666c(descriptor);
        *(V *)((char *)descriptor + 32) = positions[i];
        descriptor[21] = 0;
        scale.x = 2048;
        scale.y = 2048;
        scale.z = 2048;
        *(V *)((char *)descriptor + 44) = scale;
        descriptor[17] = 0;
        descriptor[18] = 22;
        descriptor[19] = -1;
        self->effects[i] = FUN_02046d94(descriptor, 0, 0);
        if (self->effects[i]) {
            char *effect = self->effects[i];
            *(void (**)(void *, unsigned int))(effect + 240) = FUN_0204da3c;
            *(Self **)(effect + 244) = self;
            *(int *)(effect + 248) = i;
        }
    }
}
