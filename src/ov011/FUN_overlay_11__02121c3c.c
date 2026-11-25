// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_11__02121c3c @ 0x02121c3c, verified extent 0x44.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020f4b10[];
extern unsigned char DAT_0212464c[];
extern unsigned char DAT_02156b38[];
// FUN_overlay_11__02121c3c @ 0x02121c3c (code 0x38, pool extent 0x44, thumb)
// flags: -O4,s
/* USA overlay11 ROM reconstruction, 2026-11-05.
 * Game state transition, singleton construction or cleanup.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch357.md.
 * Field identities remain provisional; all stack inputs are explicit.
 */
extern void FUN_overlay_11__02123058(void *);
int FUN_overlay_11__02121c3c(int *self,short *output) { if(!self[9]){self[9]=self[1]+1;self[2]=((int *)((unsigned int)DAT_020f4b10 + 0u))[(*(int **)((unsigned int)DAT_0212464c + 4u))[self[1]]];self[1]=0;}else{output[0]=5;output[1]=1;FUN_overlay_11__02123058((void *)((unsigned int)DAT_02156b38 + 0u));}return 1; }
