// FUN_02092920 @ 0x02092920 (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_02092920 @ 0x02092920 (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset attachment state or apply saved transform.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02092920.txt.
 */
extern void FUN_02099f1c(void *),FUN_02030658(void *,void *),FUN_020304c8(void *,void *,unsigned short),FUN_02044c34(void *,void *,unsigned short);void FUN_02092920(char *s,int mode){if(mode==0){*(int *)(s+304)&=~2;*(int *)(s+304)&=~1;*(int *)(s+308)=0;FUN_02099f1c(s+72);}else if(mode==1){FUN_02030658(s,s+312);FUN_020304c8(s,s+312,*(unsigned short *)(s+44));FUN_02044c34(s+72,s+312,*(unsigned short *)(s+44));}}
