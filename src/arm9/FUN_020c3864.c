// FUN_020c3864 @ 0x020c3864 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c3864 @ 0x020c3864
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Convert nonnull alternate text to 256-halfword global buffer, then draw with object offsets and fifth caller argument.
 * Evidence: scratch/coverage-root/batch9/020c3864.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c36e4(void *,const void *,unsigned int),FUN_020c37e0(void *,int,int,unsigned int,unsigned int,void *);
void FUN_020c3864(char *self,const void *text,int x,int y,unsigned int arg) { if(text) { FUN_020c36e4((void *)0x0211ccd0,text,256);FUN_020c37e0(self+28,x+*(int *)(self+44),y+*(int *)(self+48),arg,*(unsigned int *)(self+56),(void *)0x0211ccd0); } }
