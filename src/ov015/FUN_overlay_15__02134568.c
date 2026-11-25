// flags: -O4,s
typedef struct { int pad; char *ptr; } Holder_02134568;
extern Holder_02134568 DAT_0213e8e0;
extern int FUN_overlay_15__021345c8(void);
int FUN_overlay_15__02134568(void) {
    *(int *)(DAT_0213e8e0.ptr + 4772) = 0;
    *(int *)(DAT_0213e8e0.ptr + 4768) = 0;
    *(int *)(DAT_0213e8e0.ptr + 72) = 0;
    *(short *)(DAT_0213e8e0.ptr + 80) = 0;
    *(short *)(DAT_0213e8e0.ptr + 82) = 1;
    *(int *)(DAT_0213e8e0.ptr + 84) = 0;
    *(int *)DAT_0213e8e0.ptr = 0;
    *(short *)(DAT_0213e8e0.ptr + 4) = 0;
    *(int *)(DAT_0213e8e0.ptr + 76) = 0;
    switch (FUN_overlay_15__021345c8()) { case 0: return 0; default: return 1; }
}
