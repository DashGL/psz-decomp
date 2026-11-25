// flags: -O4,s
typedef struct { int v[3]; } Vec;
extern char *FUN_0208555c(int);
extern int FUN_02098574(void *, void *, void *);
extern void FUN_020345f0(void *, void *), FUN_02036348(void *, void *, void *), FUN_02035408(void *, int, int, int), FUN_02083d30(void *, void *, void *);
int FUN_0209875c(int *s, Vec *out, int *distance, void *origin, void *direction) {
    char *actor = FUN_0208555c(*s);
    Vec delta, position, result, negative, scaled;
    int count;
    if (actor) {
        FUN_020345f0(&position, actor + 156);
        FUN_02036348(&delta, origin, &position);
        *distance = FUN_02098574(s, origin, direction);
        count = *distance << 12;
        FUN_02035408(&negative, -delta.v[0], -delta.v[1], -delta.v[2]);
        FUN_02083d30(&scaled, &count, direction);
        FUN_02036348(&result, &negative, &scaled);
        *out = result;
        return 1;
    }
    return 0;
}
