// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
extern char G_02118508[]; extern char G_0211850C[];
void FUN_0206859c(void){int i;*(unsigned int *)G_02118508=0;for(i=0;i<9;i++)((unsigned short *)G_0211850C)[i]=0;}
