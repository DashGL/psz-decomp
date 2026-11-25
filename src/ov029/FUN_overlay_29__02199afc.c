// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_29__02199afc @ 0x02199afc (code 0x16, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Update module mode from incoming value only when owner enabled and global mode is not five.
 * Field identities remain provisional.
 */
extern unsigned int D_0219c020;
void FUN_overlay_29__02199afc(void **p,unsigned int value) { char *owner=p[1]; if(*(unsigned int *)(owner+0xd4) && D_0219c020!=5) D_0219c020=value; }
