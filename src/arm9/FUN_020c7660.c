// FUN_020c7660 @ 0x020c7660 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern int FUN_02028404(void *,unsigned int,unsigned int);
int FUN_020c7660(void *object,int enabled){unsigned int bits=FUN_02028404(object,3,0);if(enabled)bits&=~4u;else bits|=4;return FUN_02028404(object,4,bits)==0;}
