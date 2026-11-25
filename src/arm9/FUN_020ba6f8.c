// FUN_020ba6f8 @ 0x020ba6f8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020ba6f8 @ 0x020ba6f8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Start inactive request using override or default source; choose state 1 on positive result, else state 3.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba6f8.txt.
 */
extern int FUN_0205a140(void *,void *,unsigned int);
void FUN_020ba6f8(unsigned int *self) {
    int result;
    if(self[8]==0) {
        if(self[31]) result=FUN_0205a140(self+9,(void *)self[31],self[28]);
        else result=FUN_0205a140(self+9,(void *)self[27],self[28]);
        if(result>0) self[8]=1; else self[8]=3;
    }
}
