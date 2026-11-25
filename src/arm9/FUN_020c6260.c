// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_020c6260 @ 0x020c6260
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
unsigned int FUN_020c6260(unsigned int self){unsigned int i=(*(unsigned int *)self+1)&255,a=*(unsigned char *)(self+8+i),j=(a+*(unsigned int *)(self+4))&255,b=*(unsigned char *)(self+8+j);*(unsigned int *)self=i;*(unsigned int *)(self+4)=j;*(unsigned char *)(self+8+j)=(unsigned char)a;*(unsigned char *)(self+8+i)=(unsigned char)b;return *(unsigned char *)(self+8+((a+b)&255));}
