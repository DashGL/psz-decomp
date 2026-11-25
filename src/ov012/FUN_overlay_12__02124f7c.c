// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_overlay_12__02124f7c @ 0x02124f7c, verified extent 0x48.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020c2b51[];
extern unsigned char DAT_020c2b69[];
extern unsigned char DAT_0213dd08[];
// FUN_overlay_12__02124f7c @ 0x02124f7c (code 0x3c, pool extent 0x48, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize a resource-owning receiver and its two indexed selection sentinels.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);
void *FUN_overlay_12__02124f7c(int *self){int i;self[0]=((unsigned int)DAT_0213dd08 + 0u);self[1]=-1;self[4]=0;FUN_0200c394(self+5,2,4,(Lifecycle)((unsigned int)DAT_020c2b51 + 0u),(Lifecycle)((unsigned int)DAT_020c2b69 + 0u));for(i=0;i<2;i++)self[2+i]=-1;return self;}
