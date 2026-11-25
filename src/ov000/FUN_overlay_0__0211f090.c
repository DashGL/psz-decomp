// FUN_overlay_0__0211f090 @ 0x0211f090 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch56.json; original draft retained for referenced provenance.
// FUN_overlay_0__0211f090 @ 0x0211f090 (code 0x30, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 0 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy two fixed-size element arrays and the two embedded resource holders.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c4d4(void *,int,int,Lifecycle);
void *FUN_overlay_0__0211f090(unsigned char *self){FUN_0200c4d4(self+1100,22,32,(Lifecycle)0x0211e6c1);FUN_0200c4d4(self+108,31,32,(Lifecycle)0x0211e6c1);FUN_0200c4d4(self+4,2,4,(Lifecycle)0x020c2b69);return self;}
