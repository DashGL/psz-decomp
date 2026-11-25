// FUN_overlay_17__021211ac @ 0x021211ac (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_17__021211ac @ 0x021211ac (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Configure feedback channel and emit requested event with fifth stack argument.
 * Field identities remain provisional.
 */
extern void FUN_020c183c(int);
extern void FUN_020c189c(int,int);
extern void FUN_020c1a78(int,int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_17__021211ac(int *p,int channel,int value,int mode,int event) {if(channel==-1)FUN_020c183c(p[17]);else FUN_020c189c(0,channel);FUN_020c1a78(value,channel);FUN_020c193c(event,mode,0,0,channel);}
