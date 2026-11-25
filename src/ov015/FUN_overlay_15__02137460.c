// flags: -O4,s
extern void **DAT_0213e964;
extern void FUN_overlay_15__021366dc(void **);
extern void FUN_overlay_15__02136d24(void *);
extern void FUN_overlay_15__02135b98(void *, void *);
void FUN_overlay_15__02137460(int bank, unsigned char *task) {
    if (task[17]) FUN_overlay_15__021366dc((void **)(task + 12));
    FUN_overlay_15__02136d24(task);
    FUN_overlay_15__02135b98(DAT_0213e964[bank * 16], task);
}
