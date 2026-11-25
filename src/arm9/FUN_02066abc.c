// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211817c[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
char *FUN_02066abc(void){char *p=*(char **)((unsigned int)DAT_0211817c + 44u);while(p && *(unsigned int *)(p+0x64)!=1)p=*(char **)(p+0x68);return p;}
