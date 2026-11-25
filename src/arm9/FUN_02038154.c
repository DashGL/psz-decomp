// FUN_02038154 @ 0x02038154 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038154 @ 0x02038154 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * If manager and child exist, release identifier, clear child setting, release child and clear slot.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02038154.txt.
 */
extern void FUN_02033fcc(void *,unsigned int),FUN_02042358(void *,int),FUN_02033db0(void *,void *);
void FUN_02038154(char *self) {
    void *manager=*(void **)0x02108c84;
    if(manager && *(void **)(self+0x8c)) {
        FUN_02033fcc(manager,*(unsigned short *)(self+0x94));
        FUN_02042358(*(void **)(self+0x8c),0);
        FUN_02033db0(manager,*(void **)(self+0x8c)); *(void **)(self+0x8c)=0;
    }
}
