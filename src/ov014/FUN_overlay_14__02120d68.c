// FUN_overlay_14__02120d68 @ 0x02120d68 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120d68 @ 0x02120d68 (thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Fieldwise record update and text refresh. */
typedef struct {unsigned short v[18];} Wide;typedef struct {unsigned char v[8];} Bytes;
extern void FUN_overlay_14__02120908(void *);
void FUN_overlay_14__02120d68(unsigned char *s,const unsigned char *r){s[4]=r[0];s[5]=r[1];s[6]=r[2];s[7]=r[3];s[8]=r[4];s[9]=r[5];s[10]=r[6];s[11]=r[7];*(Wide *)(s+12)=*(const Wide *)(r+8);*(Bytes *)(s+48)=*(const Bytes *)(r+44);*(unsigned *)(s+56)=*(const unsigned *)(r+52);*(unsigned *)(s+60)=*(const unsigned *)(r+56);FUN_overlay_14__02120908(s);}
