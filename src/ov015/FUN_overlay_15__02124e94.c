// flags: -O4,p
extern char *DAT_0213e788;
extern void FUN_overlay_15__021250ec(void *, unsigned);
extern void FUN_overlay_15__0213743c(void *, void (*)(void *, unsigned));
void FUN_overlay_15__02124e94(void) {
    DAT_0213e788[25] = 1;
    FUN_overlay_15__0213743c(*(void **)(DAT_0213e788 + 12), FUN_overlay_15__021250ec);
}
