// FUN_0209ca50 @ 0x0209ca50 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0209ca50 @ 0x0209ca50 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve description category and request global text entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ca50.txt.
 */
extern int FUN_0209c9fc(void *),FUN_0209e238(void *,void *,int,int,int);int FUN_0209ca50(void *out,unsigned char *desc){void *p=*(void **)0x0211a620;if(p){int kind=FUN_0209c9fc(desc);if(kind>=0){int index=kind==87?desc[3]:desc[2];return FUN_0209e238(*(void **)0x0211a620,out,21,kind,index);}}return 0;}
