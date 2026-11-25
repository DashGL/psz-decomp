// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_0208e684 @ 0x0208e684
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct{unsigned short v[4];unsigned char c[4];}S; void FUN_0208e684(S *self,int index,unsigned int amount) { if(index>=0 && index<=3) { self->v[index]+=amount; self->c[index]++; } }
