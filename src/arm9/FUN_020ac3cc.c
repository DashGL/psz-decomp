// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x22, exact bytes and relocation targets.
// FUN_020ac3cc @ 0x020ac3cc
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char *FUN_020ac3b4(void *,int); extern void *FUN_02052630(void *,unsigned int); void *FUN_020ac3cc(void *self) { unsigned char *p=FUN_020ac3b4(self,3); if(p && p[272]) return FUN_02052630(p,0); return 0; }
