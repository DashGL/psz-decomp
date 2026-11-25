// FUN_02045e90 @ 0x02045e90 (0xf4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02045e90 @ 0x02045e90 (inventory code 0xea, thumb)
// check: 2.0/sp2p3 target=0xf4 candidate=0xf4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 77.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b77/02045e90.txt.
 */
extern void *DAT_02108c84;
extern unsigned int FUN_02037adc(void *,unsigned int,int);extern unsigned int FUN_02037bd0(void *,unsigned int);extern void FUN_02033f30(void *,unsigned int,unsigned int);extern unsigned int FUN_02037c88(void *,unsigned int,int,int);
void FUN_02045e90(unsigned short *ids,unsigned int *entries,int mode){void *m=DAT_02108c84;if(m){if(ids[0]==65535&&entries[0])ids[0]=FUN_02037adc(m,entries[0],0);if(ids[1]==65535&&entries[1]){ids[1]=FUN_02037bd0(m,entries[1]);FUN_02033f30(m,ids[0],ids[1]);}if(ids[2]==65535&&entries[2])ids[2]=FUN_02037c88(m,entries[2],0,0);if(ids[3]==65535&&entries[3]&&!mode)ids[3]=FUN_02037c88(m,entries[3],1,0);if(ids[4]==65535&&entries[4]){if(mode)ids[4]=FUN_02037c88(m,entries[4],0,0);else ids[4]=FUN_02037c88(m,entries[4],2,0);}if(ids[5]==65535&&entries[5]&&!mode)ids[5]=FUN_02037c88(m,entries[5],3,0);if(ids[6]==65535&&entries[6]&&!mode)ids[6]=FUN_02037c88(m,entries[6],4,0);}}
