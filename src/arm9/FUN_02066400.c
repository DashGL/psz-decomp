// FUN_02066400 @ 0x02066400 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node {unsigned int pad[4];struct Node *next,*prev;} Node;typedef struct{Node *head,*tail;} List;Node *FUN_02066400(List *l){Node *n=l->head;if(n){Node *next=n->next;l->head=next;if(next)next->prev=0;else l->tail=0;}return n;}
