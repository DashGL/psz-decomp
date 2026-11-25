// FUN_020a0c28 @ 0x020a0c28 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020a0c28 @ 0x020a0c28 (inventory code 0x76, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve sequential or explicit resource entry from manager.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0c28.txt.
 */
extern int UNK_020f4bcc[];extern void *FUN_0208f068(void),*FUN_0208efa8(void *,int,int,int);void *FUN_020a0c28(int *s,int index,int *out){void *manager=FUN_0208f068();int chosen;int *mapping;if(!manager)return 0;if(index<0){if(s[4]>=UNK_020f4bcc[s[3]])s[4]=0;chosen=s[4]++;mapping=(int *)s[5];if(mapping)chosen=mapping[chosen];*out=chosen;return FUN_0208efa8(manager,s[1],1,chosen);}if(index>=1000){if(s[2]<0)return 0;return FUN_0208efa8(manager,s[2],0,index-1000);}if(s[1]<0)return 0;return FUN_0208efa8(manager,s[1],0,index);}
