// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_overlay_31__0219979c @ 0x0219979c
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0219c5c0[];
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * For mode two invoke record operation with indexed global value.
 * Field identities remain provisional.
 */
extern void FUN_02037214(void *,int,unsigned int,void *,int);
void FUN_overlay_31__0219979c(unsigned int *p,int mode) {if(mode==2)FUN_02037214(p,28,D_0219c5c0[p[54]],p+14,1);}
