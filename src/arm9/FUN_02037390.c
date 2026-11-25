// FUN_02037390 @ 0x02037390 (0x72, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037390 @ 0x02037390 (inventory code 0x72, thumb)
// check: 2.0/sp2p3 target=0x72 candidate=0x72 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 46.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b46/02037390.txt.
 */
void FUN_02037390(unsigned int *out,int *p){int y=p[1],x=p[0],z=p[2];long long zz=(long long)z*z,xx=(long long)x*x,yy=(long long)y*y;*out=(unsigned int)((zz+2048)>>12)+((unsigned int)((xx+2048)>>12)+(unsigned int)((yy+2048)>>12));}
