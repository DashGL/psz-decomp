// FUN_02031144 @ 0x02031144 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031144 @ 0x02031144 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Copy triple to +3c, store halfword +48, set word +4c to one.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02031144.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_02031144(char *self,const Triple *value,unsigned int tag) {
    *(Triple *)(self+60)=*value; *(unsigned short *)(self+72)=tag; *(unsigned int *)(self+76)=1;
}
