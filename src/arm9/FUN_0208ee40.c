// FUN_0208ee40 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0208ee40 @ 0x0208ee40 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct descriptor object and publish byte for valid signed kind.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ee40.txt.
 */
extern char G_020FAB30[];
extern void FUN_0203020c(void *,void *,int);extern void *FUN_02030dd0(void *);void *FUN_0208ee40(char *self,void *arg){int kind;FUN_0203020c(self,arg,13);*(unsigned int *)self=0x020fab40;*(void **)(self+48)=**(void ***)(self+4);*(void **)(self+52)=FUN_02030dd0(self);kind=**(signed char **)(self+48);if(kind>=0 && kind<2)((unsigned int *)G_020FAB30)[kind]=(*(unsigned char **)(self+4))[22];return self;}
