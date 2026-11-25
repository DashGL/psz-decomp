// FUN_020b5fdc @ 0x020b5fdc (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020b5fdc @ 0x020b5fdc (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Combine base attributes with four descriptor-derived modifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5fdc.txt.
 */
extern int FUN_020b6a90(void *,void *),FUN_020b6a48(void *,void *,void *),FUN_020b69f4(void *,void *),FUN_020b6998(void *,void *);int FUN_020b5fdc(char *s,void *a,void *unused,void *b,void *c){int base=*(unsigned short *)(s+70)+(unsigned char)s[87];int x=FUN_020b6a90(s,b),y=FUN_020b6a48(s,a,b),z=FUN_020b69f4(s,c),w=FUN_020b6998(s,a);return x+(y+(z+(w+base)));}
