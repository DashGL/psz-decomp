// FUN_020dab88 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA resident callback/state routines; full ABI and extents in root batch244.
extern unsigned char *FUN_020dac74(unsigned int);extern void *DAT_0211dbb4[];void FUN_020dab88(unsigned int mask,void *allocation,unsigned int size){unsigned char *s=FUN_020dac74(1);if(s&&(s[8]&mask)){s[8]&=~mask;(*(void (**)(unsigned int,void *,unsigned int))(s+4))(mask,allocation,size);if(mask==1)DAT_0211dbb4[3]=0;}}
