// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020b5ab8 @ 0x020b5ab8
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
void FUN_020b5ab8(void *unused,unsigned int id,char *object) { if(object && id==*(unsigned int *)(object+232)) *(unsigned int *)(object+228)|=0x01000000; }
