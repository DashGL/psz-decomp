// FUN_020b0c84 @ 0x020b0c84 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b0c84 @ 0x020b0c84 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Insert unique identifier into first free eight-slot entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0c84.txt.
 */
int FUN_020b0c84(char *s,int value){int i;for(i=0;i<8;i++)if(((int *)(s+244))[i]==value)return 0;for(i=0;i<8;i++)if(((int *)(s+244))[i]==-1){((int *)(s+244))[i]=value;return 1;}return 0;}
