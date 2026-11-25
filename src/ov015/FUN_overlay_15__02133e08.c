// flags: -O4,s
typedef void (*Callback)(void *);
extern struct { void *log; char *state; } data_0213e8e0;
extern void FUN_overlay_15__02133d2c(int);
extern void FUN_overlay_15__02133d7c(int);
extern void FUN_overlay_15__02133e50(void *);
extern int FUN_020555a0(Callback, int, void *);
int FUN_overlay_15__02133e08(void) {
    int result;
    FUN_overlay_15__02133d2c(3);
    result = (*(int (**)(void *, void *))(data_0213e8e0.state + 0x13ac))(data_0213e8e0.state + 0x13c0, data_0213e8e0.state);
    result = FUN_020555a0(FUN_overlay_15__02133e50, result, data_0213e8e0.state + 0x13c0);
    if (result != 2) {
        FUN_overlay_15__02133d7c(result);
        FUN_overlay_15__02133d2c(9);
        return 0;
    }
    return 1;
}
