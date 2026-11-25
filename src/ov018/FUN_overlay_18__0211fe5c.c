// FUN_overlay_18__0211fe5c @ 0x0211fe5c (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch63.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211fe5c @ 0x0211fe5c (code 0x74, pool extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Interpolate RGB555 components with signed quotient and preserve packed halfword result.
 * Caller interval guards establish a positive denominator; products wrap to
 * 32 bits before signed division and packed shifts use unsigned operands.
 * Evidence: notes/sessions/matching-low-2026-11-07-batch63.md.
 */
unsigned short FUN_overlay_18__0211fe5c(void *unused,int from,int to,int numerator,int denominator) {int r=from&31,g=(from&992)>>5,b=(from&31744)>>10;int rr=to&31,gg=(to&992)>>5,bb=(to&31744)>>10;if(r!=rr)r+=(int)((unsigned)(rr-r)*(unsigned)numerator)/denominator;if(g!=gg)g+=(int)((unsigned)(gg-g)*(unsigned)numerator)/denominator;if(b!=bb)b+=(int)((unsigned)(bb-b)*(unsigned)numerator)/denominator;return (unsigned short)((unsigned)r|((unsigned)g<<5)|((unsigned)b<<10));}
