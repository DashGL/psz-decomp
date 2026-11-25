// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211817c[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_020662e8(void){unsigned int *p=(unsigned int *)((unsigned int)DAT_0211817c + 32u);unsigned int n=*p+1;*p=n;return n;}
