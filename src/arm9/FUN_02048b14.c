// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int w[9]; } M;
typedef struct { unsigned int x, y, z; } V;
typedef struct { short a, b; } Pair16;

extern const Pair16 DAT_020f083c[];
extern const Pair16 DAT_020f10fc[];

extern int FUN_02047440(void *);
extern int FUN_0204771c(void *);
extern int FUN_0204260c(void *, unsigned int, void *, void *);
extern unsigned int FUN_0204daa8(int);
extern void FUN_02048c68(void *);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
#pragma thumb off
extern void FUN_0205b16c(void *);
extern void FUN_0205aa80(void *);
extern void FUN_0205aed0(void *, void *, void *);
#pragma thumb on
extern void FUN_0204a8fc(void *, void *, void *, void *);
extern void FUN_0205abac(void *, int, int);
extern void FUN_02048c80(void *);

int FUN_02048b14(char *self) {
    int result = FUN_02047440(self);
    char *model, *actor;
    unsigned int matrix[12];
    M rotation;
    V position;
    M a, b;

    if (!result) {
        model = *(char **)(self + 48);
        if (model && !*(int *)(self + 292)) {
            if (*(unsigned short *)(self + 300)) {
                FUN_0206e728(model, FUN_02048c68);
                FUN_0206e738(*(void **)(self + 48), self);
            }
            *(int *)(self + 292) = 1;
        }
        if (!*(int *)(self + 276)) {
            actor = (char *)FUN_0204daa8(*(int *)(self + 232));
            if (actor) {
                model = *(char **)(actor + 140);
                if (model) {
                    FUN_0205b16c(matrix);
                    FUN_0205aa80(&rotation);
                    FUN_0204260c(model, *(unsigned int *)(self + 260), matrix, &rotation);
                    FUN_0204a8fc(&position, matrix, &rotation, self + 264);
                    *(V *)(self + 92) = position;
                    if (*(int *)(self + 284) == 13) {
                        FUN_0205aa80(&a);
                        FUN_0205abac(&a, DAT_020f083c[0].a, DAT_020f083c[0].b);
                        FUN_0205aed0(&a, &rotation, &rotation);
                    }
                    if (*(int *)(self + 284) == 10) {
                        FUN_0205aa80(&b);
                        FUN_0205abac(&b, DAT_020f10fc[8].a, DAT_020f10fc[8].b);
                        FUN_0205aed0(&b, &rotation, &rotation);
                    }
                    *(M *)(self + 112) = rotation;
                }
            }
        }
        if (FUN_0204771c(self) && !*(int *)(self + 276)) {
            if (!*(int *)(self + 280)) {
                int v = *(int *)(self + 284);
                if ((v >= 8 && v <= 13) ? E1 : E0) {
                    FUN_02048c80(self);
                }
            }
            *(int *)(self + 276) = 1;
        }
    }
    return result;
}
