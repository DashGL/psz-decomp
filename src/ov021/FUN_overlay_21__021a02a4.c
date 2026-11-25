// flags: -O4,p
extern void FUN_02042960(void *, int);
extern void FUN_020bc5cc(void *, const void *, const void *);
extern int DAT_021a12d4, DAT_021a12d8, DAT_021a12dc, DAT_021a12e0, DAT_021a12e4, DAT_021a12e8, DAT_021a12ec, DAT_021a12f0;
void FUN_overlay_21__021a02a4(void) {
    FUN_02042960(&DAT_021a12d4, 28672);
    FUN_02042960(&DAT_021a12f0, 122880);
    FUN_02042960(&DAT_021a12ec, 28672);
    FUN_02042960(&DAT_021a12e8, 69632);
    FUN_02042960(&DAT_021a12e4, 2048);
    FUN_02042960(&DAT_021a12e0, 102400);
    FUN_02042960(&DAT_021a12dc, 69632);
    FUN_020bc5cc(&DAT_021a12d8, &DAT_021a12dc, &DAT_021a12dc);
}
