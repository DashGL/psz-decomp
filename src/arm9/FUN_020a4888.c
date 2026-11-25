// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
// FUN_020a4888 @ 0x020a4888
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Refresh four UI entries using selected description set.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4888.txt.
 */
extern void FUN_020a4840(void *,int,void *,void *);void FUN_020a4888(char *s,int mode){int i=0;char *first=s+124,*second=s+44;for(;i<4;i++){char *p=((char **)(s+28))[i];if(p){if(mode)FUN_020a4840(s,i,p+36,second+20*i);else FUN_020a4840(s,i,p+36,first+12*i);}}}
