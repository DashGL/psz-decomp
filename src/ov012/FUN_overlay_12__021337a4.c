// FUN_overlay_12__021337a4 @ 0x021337a4 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021337a4 @ 0x021337a4 (code 0x72, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Copy two text records and the trailing descriptor fields into a new owned record.
 * Field identities remain provisional.
 */
typedef struct{unsigned char bytes[8];}Bytes8;typedef struct{unsigned int words[14];}Words14;
extern void *FUN_020c4450(void *,const void *);
void *FUN_overlay_12__021337a4(unsigned char *self,unsigned char *source,int owner){*(unsigned int *)self=0x020fc770;FUN_020c4450(self+4,source);FUN_020c4450(self+20,source+16);self[36]=*(signed char *)(source+32);self[37]=*(signed char *)(source+33);self[38]=*(signed char *)(source+34);self[39]=*(signed char *)(source+35);*(Bytes8 *)(self+40)=*(Bytes8 *)(source+36);*(Words14 *)(self+48)=*(Words14 *)(source+44);*(int *)(self+104)=owner;return self;}
