// FUN_02077bcc @ 0x02077bcc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077bcc @ 0x02077bcc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Remember nonzero current word +dc at +108, then invoke state setter with three zeros.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077bcc.txt.
 */
extern void FUN_02077cd8(void *,int,int,int);
void FUN_02077bcc(char *self) { unsigned int value=*(unsigned int *)(self+0xdc); if(value) *(unsigned int *)(self+0x108)=value; FUN_02077cd8(self,0,0,0); }
