// FUN_02040544 @ 0x02040544 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040544 @ 0x02040544 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Select one of four 20-byte records; copy triple and halfword only when active word is nonzero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02040544.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
int FUN_02040544(char *self,Triple *value,unsigned short *tag,unsigned int index) {
    char *record=self+20+20*(index&3);
    if(!*(unsigned int *)(record+16)) return 0;
    *value=*(Triple *)record; *tag=*(unsigned short *)(record+12); return 1;
}
