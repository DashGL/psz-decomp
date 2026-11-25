// FUN_overlay_12__02134ae8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__02134ae8 @ 0x02134ae8 (code 0x44, pool extent 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Map a matching three-byte item category key to its subtype table index.
 * Field identities remain provisional.
 */
extern char G_0213BD2C[];
extern int FUN_overlay_12__02134b30(unsigned char *,int);
int FUN_overlay_12__02134ae8(unsigned char *item){unsigned char key[4];int i;FUN_overlay_12__02134b30(key,1);if(key[0]==item[0]&&key[1]==item[1]&&key[3]==item[3]){int value=item[2];for(i=0;i<21;i++)if(value==((int *)G_0213BD2C)[i])return i;}return 0;}
