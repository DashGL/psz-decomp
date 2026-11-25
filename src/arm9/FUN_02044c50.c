// FUN_02044c50 @ 0x02044c50 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044c50 @ 0x02044c50 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Build 36-byte temporary from embedded values and submit it for a valid handle.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02044c50.txt.
 */
extern int FUN_02044c84(void *,void *,void *,unsigned int);
extern void *FUN_020be450(void);
extern void FUN_020be5d4(void *,unsigned int,int,void *);
void FUN_02044c50(char *self) {
    unsigned int temp[9];
    if(*(unsigned int *)self!=~0u && FUN_02044c84(temp,self+4,self+16,*(unsigned short *)(self+28)))
        FUN_020be5d4(FUN_020be450(),*(unsigned int *)self,0,temp);
}
