// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_12__0212796c @ 0x0212796c, verified extent 0x3c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020c2b51[];
extern unsigned char DAT_020c2b69[];
extern unsigned char DAT_0213dea0[];
// FUN_overlay_12__0212796c @ 0x0212796c (code 0x30, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize the menu receiver sentinels and construct two resource holders.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);
void *FUN_overlay_12__0212796c(int *self){self[0]=((unsigned int)DAT_0213dea0 + 0u);self[1]=-1;self[2]=-1;self[3]=-1;self[4]=0;FUN_0200c394(self+5,2,4,(Lifecycle)((unsigned int)DAT_020c2b51 + 0u),(Lifecycle)((unsigned int)DAT_020c2b69 + 0u));return self;}
