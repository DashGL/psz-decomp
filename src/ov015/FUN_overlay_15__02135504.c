// flags: -O4,s
extern void FUN_02056990(int, unsigned int, void *, unsigned int, void *, void *, int);
extern void FUN_overlay_15__0213552c(void);
int FUN_overlay_15__02135504(unsigned int *p, void *data, unsigned int offset, unsigned int size) {
    FUN_02056990(-1, offset + p[10], data, size, (void *)FUN_overlay_15__0213552c, p, 1);
    return 6;
}
