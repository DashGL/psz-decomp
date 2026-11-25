// FUN_0206a11c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA ARM routine reconstructed from full control flow and literal extent.
typedef struct{void (*callback)(void *);void *arg;unsigned char generation;unsigned char pad[3];} Slot;
extern Slot DAT_0211a0e0[];
void FUN_0206a11c(int token){Slot *s=&DAT_0211a0e0[token&255];if(((token>>8)&255)!=s->generation)return;if(s->callback)s->callback(s->arg);}
