// FUN_overlay_22__021a0848 @ 0x021a0848 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0848 @ 0x021a0848 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * When both animations complete, hide dependent objects, set completion flag, and advance state.
 * Field identities remain provisional.
 */
extern int FUN_02040d44(void *,int);extern void FUN_overlay_22__0219a05c(void *,int);extern void FUN_02037924(void *);void FUN_overlay_22__021a0848(void *unused,unsigned char *entity,void **state) {if(FUN_02040d44(entity,0)&&FUN_02040d44(entity,1)){FUN_overlay_22__0219a05c(state[14],0);FUN_overlay_22__0219a05c(state[13],0);*(unsigned int *)(entity+148)|=65536;FUN_02037924(state);}}
