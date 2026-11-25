// FUN_020cb1a0 @ 0x020cb1a0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// Decimal append adapter; incoming r2 is the signed integer consumed by the fixed percent-d format.
extern const char DAT_020fd3c4[];
extern int FUN_02066274(char *,const char *,...);
extern int FUN_020cb184(void *,void *,const char *);
int FUN_020cb1a0(void *self,void *buffer,int value){char text[16];FUN_02066274(text,DAT_020fd3c4,value);return FUN_020cb184(self,buffer,text);}
