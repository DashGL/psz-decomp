// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
char **FUN_02027f48(char **slot,char *wanted){char *n=*slot;while(n){if(n==wanted)return slot;slot=(char **)(n+0x7c);n=*slot;}return 0;}
