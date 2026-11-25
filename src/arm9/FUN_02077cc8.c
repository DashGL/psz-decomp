// FUN_02077cc8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02077cc8 @ 0x02077cc8
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM: read selected bank/slot second word; no bounds guard. */
typedef struct{unsigned int a,b;}S; typedef struct{char pad[0xd8];S s[1][3];}T;
unsigned int FUN_02077cc8(T *self,int bank,int slot) { return self->s[bank][slot].b; }
