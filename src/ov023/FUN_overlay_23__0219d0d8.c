// flags: -O4,p
// FUN_overlay_23__0219d0d8 @ 0x0219d0d8 (code 0x3a, pool extent 0x50, thumb)
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point constants, squared constants and vector.
 * Field identities remain provisional.
 */
extern int DAT_0219d794[];
extern int DAT_0219d798[];
extern int DAT_0219d79c[];
extern int DAT_0219d7a0[];
extern unsigned char DAT_0219d7a4[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,int *,int *);
extern void FUN_02035408(void *,int,int,int);
void FUN_overlay_23__0219d0d8(void) {FUN_02042960(DAT_0219d794,32768);FUN_020bc5cc(DAT_0219d7a0,DAT_0219d794,DAT_0219d794);FUN_02042960(DAT_0219d79c,12288);FUN_020bc5cc(DAT_0219d798,DAT_0219d79c,DAT_0219d79c);FUN_02035408((void *)DAT_0219d7a4,12288,0,0);}
