// FUN_overlay_12__02134b30 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__02134b30 @ 0x02134b30 (code 0x32, pool extent 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize item key from bounded lookup entry, rejecting sentinel entries.
 * Field identities remain provisional.
 */
extern char G_0213BD2C[];
extern void FUN_02045848(void *);
int FUN_overlay_12__02134b30(unsigned char *p,int index) {if(index>=0 && index<21){int v=((int *)G_0213BD2C)[index];if(v!=-1){FUN_02045848(p);p[0]=3;p[1]=3;p[2]=v;p[3]=0;return 1;}}return 0;}
