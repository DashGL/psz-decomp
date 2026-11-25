// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02112524[];
// FUN_0205a248 @ 0x0205a248 (inventory code 0x40, arm)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 227.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b227/0205a248.txt.
 */
extern void FUN_02056990(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,void *,int);int FUN_0205a248(void *userdata,unsigned int destination,unsigned int offset,unsigned int size){FUN_02056990(*(unsigned int *)((unsigned int)DAT_02112524 + 4u),offset,destination,size,0x0205a224,userdata,1);return 6;}
