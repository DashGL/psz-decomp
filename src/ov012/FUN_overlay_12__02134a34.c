// FUN_overlay_12__02134a34 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__02134a34 @ 0x02134a34 (code 0x1e, pool extent 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load one of two resource pointers with fixed five-argument parameters.
 * Field identities remain provisional.
 */
extern char G_0213E9F0[];
extern void FUN_020c2b84(void *,const void *,unsigned int,unsigned int,unsigned int);
void FUN_overlay_12__02134a34(void *p,int index) {if(index>=0 && index<2)FUN_020c2b84(p,((const void **)G_0213E9F0)[index],3,1,4);}
