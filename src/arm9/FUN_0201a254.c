// FUN_0201a254 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA sequence interpreter callbacks; ABI/table evidence in root batch256.
typedef struct State{unsigned char *cursor;void *owner;unsigned flags;void (*first)(struct State *);void (*second)(struct State *);} State;void FUN_0201a254(State *p){if(p->first)p->first(p);p->cursor++;}
