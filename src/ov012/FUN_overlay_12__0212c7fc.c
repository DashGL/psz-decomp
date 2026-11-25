// FUN_overlay_12__0212c7fc @ 0x0212c7fc (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c7fc @ 0x0212c7fc (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct holder and preserve four configuration words; clear nonempty child.
 * Field identities remain provisional.
 */
extern void *FUN_020c2b50(void *);
extern void FUN_020c2cd0(void *);
void *FUN_overlay_12__0212c7fc(unsigned int *p,unsigned int a,unsigned int b,unsigned int c,unsigned int d) {FUN_020c2b50(p);p[1]=a;p[2]=b;p[3]=c;p[4]=d;if(p[0])FUN_020c2cd0((void *)p[0]);return p;}
