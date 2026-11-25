// FUN_02044b80 @ 0x02044b80 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044b80 @ 0x02044b80 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Invalidate handle, initialize embedded +4, copy triple to +10, store halfword option, clear flags.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02044b80.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
extern void FUN_02044bac(void *);
void *FUN_02044b80(char *self,const Triple *value,unsigned int option) {
    *(unsigned int *)self=~0u; FUN_02044bac(self+4);
    *(Triple *)(self+16)=*value;
    *(unsigned short *)(self+28)=option; *(unsigned short *)(self+30)=0;
    return self;
}
