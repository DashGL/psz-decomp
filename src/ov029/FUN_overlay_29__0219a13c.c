// FUN_overlay_29__0219a13c @ 0x0219a13c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a13c @ 0x0219a13c (code 0x46, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Advance and clear a valid inactive target, otherwise start fallback animation three.
 * Field identities remain provisional.
 */
extern int FUN_overlay_29__02199b94(void *);extern void *FUN_020352a4(void *,int);extern void *FUN_02039200(void *);extern int FUN_0203bf48(void *);extern void FUN_overlay_29__02199ba8(void *);extern void FUN_02037924(void *);extern void FUN_02040c0c(void *,int,int,int,int);void FUN_overlay_29__0219a13c(void **p) {void *owner=p[2];void *entity=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,FUN_overlay_29__02199b94(owner)));if(entity&&!FUN_0203bf48(entity)){FUN_overlay_29__02199ba8(owner);FUN_02037924(owner);}else FUN_02040c0c(p[1],0,3,4096,0);}
