// FUN_020afd38 @ 0x020afd38 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020afd38 @ 0x020afd38 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reverse movement vector when outside planar bounds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afd38.txt.
 */
extern void FUN_02083a70(void *,int);void FUN_020afd38(int *s){int lowX=s[9]-8192,highX=s[9]+8192,highZ=s[11]+8192,lowZ=s[11]-8192,x=s[3],z=s[5];if(highX<x)FUN_02083a70(s+6,-4096);else if(x<lowX)FUN_02083a70(s+6,-4096);else if(highZ<z)FUN_02083a70(s+6,-4096);else if(z<lowZ)FUN_02083a70(s+6,-4096);}
