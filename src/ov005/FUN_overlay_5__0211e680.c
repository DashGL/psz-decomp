// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// FUN_overlay_5__0211e680 @ 0x0211e680, verified extent 0x68.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020c2b51[];
extern unsigned char DAT_020c2b69[];
// FUN_overlay_5__0211e680 @ 0x0211e680 (code 0x5e, pool extent 0x68, thumb)
// flags: -O4,s
/* USA overlay 5 reconstruction from extracted module bytes, 2026-11-04.
 * Construct two resource holders and clear the paired UI state arrays.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);extern void FUN_0200c938(void *,int);
void *FUN_overlay_5__0211e680(int *self){int i;FUN_0200c394(self,2,4,(Lifecycle)((unsigned int)DAT_020c2b51 + 0u),(Lifecycle)((unsigned int)DAT_020c2b69 + 0u));FUN_0200c938(self+2,8);FUN_0200c938(self+4,16);FUN_0200c938(self+8,8);FUN_0200c938(self+10,8);for(i=0;i<2;i++){self[4+2*i]=0;self[5+2*i]=0;self[8+i]=0;self[2+i]=0;self[10+i]=0;}return self;}
