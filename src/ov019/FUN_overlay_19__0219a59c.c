// FUN_overlay_19__0219a59c @ 0x0219a59c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219a59c @ 0x0219a59c (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * After twenty ticks emit positional event and reset counter.
 * Field identities remain provisional.
 */
extern void FUN_02037214(void *,int,int,const void *,int);
int FUN_overlay_19__0219a59c(int *p,void *actor) {if(p[26]<20)return 0;FUN_02037214(actor,29,18,p+3,1);p[26]=0;return 1;}
