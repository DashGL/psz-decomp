// FUN_overlay_19__0219933c @ 0x0219933c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219933c @ 0x0219933c (code 0x32, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize derived receiver and copy supplied embedded descriptor.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_19__02198c5c(void *);
extern void *FUN_overlay_19__021992f4(void *);
extern void *FUN_overlay_19__02199378(void *,const void *);
int *FUN_overlay_19__0219933c(int *p,const void *d) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d2f4;p[12]=-1;p[13]=-1;p[14]=*(int *)0x020ed0a0;FUN_overlay_19__021992f4(p+15);FUN_overlay_19__02199378(p+15,d);return p;}
