// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020c6e10 @ 0x020c6e10
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
void *FUN_020c6e10(char *p,int index){if(index<0 || index>=*(int *)p)return 0;return (void *)(*(unsigned int *)(p+20)+*(unsigned int *)(p+8)*(unsigned int)index);}
