// FUN_020aef3c @ 0x020aef3c (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020aef3c @ 0x020aef3c (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset paired text panels and display supplied descriptions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aef3c.txt.
 */
extern void FUN_020c38f0(void *,int),FUN_020c3864(void *,void *,int,int,int),FUN_020c38a0(void *,void *,int,int,int);void FUN_020aef3c(char *s,char *desc){FUN_020c38f0(s,0);FUN_020c38f0(s+60,0);if(desc){FUN_020c3864(s,desc+16,0,0,2);FUN_020c38a0(s+60,desc+36,0,0,2);}}
