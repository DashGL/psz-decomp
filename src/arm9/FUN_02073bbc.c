// FUN_02073bbc @ 0x02073bbc (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073bbc @ 0x02073bbc (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and literal-pool extent checked.
 * Evidence: scratch/coverage-high-game/inspect306.txt. */
extern int UNK_0211a210[];
void FUN_02073bbc(int value,unsigned int mode){int enabled;switch(mode){case 0:case 1:enabled=0;break;case 2:case 3:case 4:case 5:case 6:case 7:enabled=1;break;default:enabled=1;break;}if(enabled==1 && value<0){UNK_0211a210[2]=-value;UNK_0211a210[3]=mode;}}
