// FUN_02035900 @ 0x02035900 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02035900 @ 0x02035900 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02035900.txt.
 */
extern int FUN_02042358(void *,int);
void FUN_02035900(char *s,int record,int slot) { char *p=*(char **)(s+0x98)+112*record; char *entry; FUN_02042358(*(void **)p,slot); entry=p+8*slot; *(unsigned short *)(entry+0x48)=0xffff; *(unsigned short *)(entry+0x4a)=0; *(unsigned int *)(entry+0x4c)=4096; }
