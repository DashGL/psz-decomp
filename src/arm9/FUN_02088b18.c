// FUN_02088b18 @ 0x02088b18 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02088b18 @ 0x02088b18 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Emit positional event and reset angles for zero mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088b18.txt.
 */
typedef struct {int x,y,z;} V;extern int FUN_02033704(void);extern void FUN_02033658(int,int,V *);void FUN_02088b18(char *self,int mode){if(mode==0){if(!FUN_02033704()){V v=*(V *)(self+28);FUN_02033658(4,2,&v);}*(unsigned short *)(self+64)=0;*(unsigned short *)(self+66)=0;}}
