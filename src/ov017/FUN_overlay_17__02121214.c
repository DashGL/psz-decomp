// FUN_overlay_17__02121214 @ 0x02121214 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121214 @ 0x02121214 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Configure channel and store parameters before five-argument feedback call.
 * Field identities remain provisional.
 */
extern void FUN_020c183c(int);
extern void FUN_020c189c(int,int);
extern void FUN_020c1a78(int,int);
extern void FUN_020c1d7c(int,int,int,int,int);
void FUN_overlay_17__02121214(int *p,int channel,int value,int b,int a) {if(channel==-1)FUN_020c183c(p[17]);else FUN_020c189c(0,channel);FUN_020c1a78(value,channel);p[18]=1;p[19]=channel;p[20]=a;p[21]=b;FUN_020c1d7c(p[20],p[21],0,0,p[19]);}
