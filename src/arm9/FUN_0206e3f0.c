// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_0206e3f0 @ 0x0206e3f0
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int (*D_020f24c0[])(void *,int); unsigned int FUN_0206e3f0(void *self,int index) { if(index>=0 && index<69) return D_020f24c0[index](self,index); return 0; }
