// FUN_02061294 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
extern void FUN_020600fc(int,int,void *);
void FUN_02061294(int a,int value){unsigned short message=value;FUN_020600fc(a,13,&message);}
