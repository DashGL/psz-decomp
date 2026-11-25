// FUN_020d6a10 @ 0x020d6a10 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void FUN_020d6a10(unsigned char *dest,unsigned int kind,const unsigned char *source){dest[0]=kind;dest[1]=source[0];dest[2]=source[1];dest[3]=source[2];dest[4]=source[3];*(unsigned int *)(dest+0x578)=5;}
