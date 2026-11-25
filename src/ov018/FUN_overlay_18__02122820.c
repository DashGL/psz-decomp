// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_18__02122820 @ 0x02122820
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay18 ROM reconstruction, 2026-11-05.
 * Game state transition, singleton construction or cleanup.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch360.md.
 * Field identities remain provisional; all stack inputs are explicit.
 */
extern int data_020f4b10[];
extern int * data_021243b8[];
extern void FUN_overlay_18__0211ef90(void *);
int FUN_overlay_18__02122820(int *self,short *output) { if(!self[9]){self[9]=self[1]+1;self[2]=(data_020f4b10)[(*(data_021243b8+1))[self[1]]];self[1]=0;}else{output[0]=5;output[1]=1;FUN_overlay_18__0211ef90((void *)0x02124544);}return 1; }
