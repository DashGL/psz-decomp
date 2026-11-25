// FUN_020deff0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_021005c0[];
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_020deff0(char *self,int *slot){void (*fn)(const char *,int,int)=*(void (**)(const char *,int,int))(self+0x1014);if(*slot)fn(DAT_021005c0,*slot,0);FUN_020656b8(slot,0,16);}
