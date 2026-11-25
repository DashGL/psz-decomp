// FUN_020afc64 @ 0x020afc64 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020afc64 @ 0x020afc64 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Scan linked candidates and retain closest accepted entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afc64.txt.
 */
extern void FUN_020afb88(void *),FUN_020afb70(void *,void *);extern int FUN_020afd94(void *,void *);int FUN_020afc64(char *self,char *p){FUN_020afb88(self);while(p){int value=FUN_020afd94(self,p);if(value!=0x0ffff000){FUN_020afb70(self,p);if(value<*(int *)(self+68)){*(int *)(self+68)=value;*(void **)(self+64)=p;}}p=*(char **)(p+96);}return *(int *)(self+56);}
