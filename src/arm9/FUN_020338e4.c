// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020338e4 @ 0x020338e4
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct{char pad[8];void *h;char p2[4];unsigned int x;int p3;unsigned short f:1;}S; extern void FUN_0201ce50(void *);
void FUN_020338e4(S *self) { if(self->f) { FUN_0201ce50(self->h); } self->x=0; self->f=0; }
