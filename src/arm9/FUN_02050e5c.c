// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_0210e248[];
extern unsigned char DAT_0210e250[];
extern unsigned char DAT_0210e254[];
extern unsigned char DAT_0210e258[];
extern unsigned char DAT_0210e25c[];
extern unsigned char DAT_0210e2fc[];
extern unsigned char DAT_0210f2fc[];
// FUN_02050e5c @ 0x02050e5c (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/02050e5c.txt.
 */
extern void FUN_020728a0(void *);
void *FUN_02050e5c(unsigned int *s){int i;s[0]=((unsigned int)DAT_0210e25c + 0u);s[1]=((unsigned int)DAT_0210e254 + 0u);s[2]=((unsigned int)DAT_0210f2fc + 0u);s[3]=((unsigned int)DAT_0210e250 + 0u);s[4]=((unsigned int)DAT_0210e2fc + 0u);s[5]=((unsigned int)DAT_0210e248 + 0u);s[6]=((unsigned int)DAT_0210e258 + 0u);s[19]=-1;s[20]=-1;s[21]=0;s[22]=0;s[23]=0;s[24]=0;s[25]=0;s[26]=0;s[27]=-1;s[28]=-1;FUN_020728a0(s+29);for(i=0;i<12;i++)s[7+i]=0;return s;}
