// FUN_overlay_22__0219d440 @ 0x0219d440 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219d440 @ 0x0219d440 (code 0x3e, full extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Consume game registry transition
 * or send fully initialized four/eight-byte command with original guards.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch390.md.
 */
extern int FUN_overlay_22__021a0428(void);extern void FUN_overlay_22__0219c900(void *);extern int FUN_overlay_22__0219a7e8(void);extern void FUN_overlay_22__0219f190(void *,void *);
void FUN_overlay_22__0219d440(int *self) { signed char command[4];int target;if(FUN_overlay_22__021a0428()==1){FUN_overlay_22__0219c900(command);target=FUN_overlay_22__0219a7e8();if(target!=-1){command[0]=14;command[1]=target;}else{command[0]=10;command[1]=-1;}FUN_overlay_22__0219f190((void *)self[1],command);} }
