// FUN_020c3f00 @ 0x020c3f00 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c3f00 @ 0x020c3f00
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy/pad limit bytes. Zero or control byte 1 leaves source fixed and pads remaining destination.
 * Evidence: scratch/coverage-root/batch10/020c3f00.txt.
 */
unsigned int FUN_020c3f00(signed char *dst,const signed char *src,unsigned int limit) {
 unsigned int copied=0,i; if(dst && src)for(i=0;i<limit;++i) {signed char c=*src;if(c && c!=1){*dst=c;++src;++copied;}else *dst=0;++dst;}return copied;
}
