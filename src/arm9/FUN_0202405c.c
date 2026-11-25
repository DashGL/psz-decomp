// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021181a0[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_0202405c(void){char *ctx=*(char **)((unsigned int)DAT_021181a0 + 4u);unsigned int *p=*(unsigned int **)(ctx+0xa4);if(p)*p=0;}
