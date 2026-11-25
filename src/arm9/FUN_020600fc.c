// FUN_020600fc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
extern char *DAT_021180ac;
void FUN_020600fc(int a,int b,void *c){void (*callback)(int,int,void *)=*(void (**)(int,int,void *))(DAT_021180ac+0x14e4);if(callback)callback(a,b,c);}
