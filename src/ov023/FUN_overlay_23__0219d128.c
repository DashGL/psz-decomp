// flags: -O4,p
// FUN_overlay_23__0219d128 @ 0x0219d128 (code 0x2c, pool extent 0x3c, thumb)
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their rounded squares.
 * Field identities remain provisional.
 */
extern int DAT_0219d804[];
extern int DAT_0219d808[];
extern int DAT_0219d80c[];
extern int DAT_0219d810[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_23__0219d128(void) {FUN_02042960(DAT_0219d810,32768);FUN_020bc5cc(DAT_0219d80c,DAT_0219d810,DAT_0219d810);FUN_02042960(DAT_0219d808,12288);FUN_020bc5cc(DAT_0219d804,DAT_0219d808,DAT_0219d808);}
