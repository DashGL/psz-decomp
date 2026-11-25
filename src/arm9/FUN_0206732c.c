// FUN_0206732c @ 0x0206732c (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node{unsigned int pad[4];struct Node *next,*prev;} Node;void FUN_0206732c(char *owner,Node *n){Node *tail=*(Node **)(owner+0x8c);if(!tail)*(Node **)(owner+0x88)=n;else tail->next=n;n->prev=tail;n->next=0;*(Node **)(owner+0x8c)=n;}
