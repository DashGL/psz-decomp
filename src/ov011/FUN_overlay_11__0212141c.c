// FUN_overlay_11__0212141c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_11__0212141c @ 0x0212141c (code 0x4a, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Replace a positive-length pair array, clear every entry, and update its stored value.
 * Field identities remain provisional.
 */
typedef void (*Callback)(void *);extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,Callback,Callback);extern void FUN_020ba8b4(void *);void FUN_overlay_11__0212141c(unsigned int *p,int count,unsigned int value) {int i;if(count>0){p[1]=count;if(p[2]){FUN_020ba8b4((void *)p[2]);p[2]=0;}p[2]=(unsigned int)FUN_0200c2dc(p[1],8,0,(Callback)0x021213b9,0);for(i=0;i<(int)p[1];i++){unsigned int *entry=(unsigned int *)p[2]+i*2;entry[0]=0;entry[1]=0;}p[0]=value;}}
