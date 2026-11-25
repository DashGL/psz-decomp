// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_4__0212b904 @ 0x0212b904 (code 0x2a, pool extent 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=4 exact_bytes=8 bad_relocs=0
// Actual caller stores initializer returned r0; see ABI11 consumed-return proof.
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily allocate singleton and update its selected value.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern int *FUN_overlay_4__0212b8f4(void *);
void FUN_overlay_4__0212b904(int value) {int **slot=(int **)0x02197f40;if(!*slot) {int *p=FUN_020ba894(16);if(p)p=FUN_overlay_4__0212b8f4(p);*slot=p;}if(*slot)(*slot)[0]=value;}
