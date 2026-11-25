// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021116a0[];
// FUN_02055bcc @ 0x02055bcc (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 209.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b209/02055bcc.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int);extern void FUN_02066bb8(void *,unsigned int);unsigned int FUN_02055bcc(unsigned int value){char *s=(char *)((unsigned int)DAT_021116a0 + 0u);unsigned int saved=FUN_020683d4(),old=*(unsigned int *)(s+264);*(unsigned int *)(s+264)=value;FUN_02066bb8(s+68,value);FUN_020683e8(saved);return old;}
