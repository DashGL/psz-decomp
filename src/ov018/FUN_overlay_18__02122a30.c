// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_18__02122a30 @ 0x02122a30, verified extent 0x40.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020f4b04[];
extern unsigned char DAT_0211ef15[];
extern unsigned char DAT_021243b8[];
// FUN_overlay_18__02122a30 @ 0x02122a30 (code 0x32, full extent 0x40, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete selector-to-descriptor mapping.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch550.md.
 */
typedef void (*Finish)(void *);
void FUN_overlay_18__02122a30(int *self,unsigned char *descriptor) { int index=self[1];if(self[9]==0){descriptor[32]=((int **)((unsigned int)DAT_021243b8 + 0u))[1][index];index=255;}else{index+=((int *)((unsigned int)DAT_020f4b04 + 0u))[(signed char)descriptor[32]];}descriptor[36]=index;((Finish)((unsigned int)DAT_0211ef15 + 0u))(descriptor); }
