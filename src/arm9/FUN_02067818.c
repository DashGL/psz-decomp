// FUN_02067818 @ 0x02067818 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node{struct Node *next,*prev;} Node;Node *FUN_02067818(Node *p,Node *n){n->prev=p;n->next=0;if(p)p->next=n;return n;}
