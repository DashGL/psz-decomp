// FUN_overlay_20__0219e440 @ 0x0219e440 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219e440 @ 0x0219e440 (code 0x58, pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation five and initialize motion counters from state parameters.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219e440(unsigned char *self){unsigned char *params=*(unsigned char **)(self+8)+48;int value;float rounded;FUN_02040c0c(*(void **)(self+4),0,5,4096,10);*(unsigned short *)(self+12)=*(unsigned short *)(params+34);value=*(signed short *)(params+32);if(value>0)rounded=0.5f+(float)(value<<12);else rounded=(float)(value<<12)-0.5f;*(int *)(self+16)=(int)rounded;*(int *)(self+20)=*(int *)0x020fc988;*(int *)(self+24)=*(int *)(params+4);}
