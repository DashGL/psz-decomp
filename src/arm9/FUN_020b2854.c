// FUN_020b2854 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b2854 @ 0x020b2854
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM: set byte mask for valid signed slot. */
typedef struct{char pad[20];unsigned char m[4];}T; void FUN_020b2854(T *self,int index,unsigned int mask) { if(index>=0 && index<4) self->m[index]|=mask; }
