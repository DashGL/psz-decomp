// FUN_02067834 @ 0x02067834 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node{struct Node *next,*prev;} Node;Node *FUN_02067834(Node *head,Node *n){Node *p=n->prev;if(p)p->next=n->next;if(!n->next)head=n->prev;else n->next->prev=n->prev;return head;}
