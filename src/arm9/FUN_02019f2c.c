// FUN_02019f2c @ 0x02019f2c (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA sequence interpreter callbacks; ABI/table evidence in root batch256.
typedef struct State{unsigned char *cursor;void *owner;unsigned flags;void (*first)(struct State *);void (*second)(struct State *);} State;extern void (*DAT_020f6894[])(State *,unsigned);void FUN_02019f2c(State *p){unsigned op;do{p->flags&=~64u;op=*p->cursor;DAT_020f6894[op&31](p,op&224);}while(!(p->flags&32));}
