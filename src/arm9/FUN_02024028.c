// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021181a0[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_02024028(void){char *ctx=*(char **)((unsigned int)DAT_021181a0 + 4u);char *p=*(char **)(ctx+0xa4);if(p){*(char **)p=ctx;p[8]=0;*(unsigned int *)(p+0x44)=0;*(unsigned int *)(p+0x60)=0;*(unsigned int *)(p+0x38)=0;}}
