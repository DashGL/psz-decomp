// FUN_overlay_4__0212052c @ 0x0212052c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212052c @ 0x0212052c (code 0x56, pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Draw the shared item marker for category zero or the matching active entity.
 * Field identities remain provisional.
 */
extern int FUN_02084be8(const void *),FUN_02084cc8(const void *),FUN_02077fec(void *);extern void *FUN_02077f3c(void);extern void FUN_020c331c(int,int,int,int);void FUN_overlay_4__0212052c(void){unsigned char *manager;int owner;if(FUN_02084be8((const void *)0x0211a51c)){FUN_020c331c(106,0x1d000,0xc8000,FUN_02077fec(FUN_02077f3c()));return;}manager=*(unsigned char **)0x02108d04;if(manager){owner=*(int *)(manager+252);if(owner==FUN_02084cc8((const void *)0x0211a51c))FUN_020c331c(106,0x1d000,0xc8000,FUN_02077fec(FUN_02077f3c()));}}
