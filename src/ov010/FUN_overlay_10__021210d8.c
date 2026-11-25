// FUN_overlay_10__021210d8 @ 0x021210d8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__021210d8 @ 0x021210d8 (inventory code 0x38, true extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay10 ROM reconstruction, 2026-11-05.
 * Game controller reset, cleanup or complete state dispatcher.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch358.md.
 * Full CFG extent used even where inventory truncates a switch.
 */
extern void FUN_020c0c78(void *);extern void FUN_overlay_10__02121110(void *);
void FUN_overlay_10__021210d8(int *self) { self[0]=0;self[1]=0;self[2]=-1;self[3]=0;self[4]=0;self[5]=0;self[6]=-1;*(char *)(self+7)=0;self[11]=0;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;FUN_020c0c78(self+7);FUN_overlay_10__02121110(self+18); }
