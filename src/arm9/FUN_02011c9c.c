// FUN_02011c9c @ 0x02011c9c (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node{unsigned int header,size;struct Node *prev,*next;} Node;typedef struct{Node *head,*tail;} List;Node *FUN_02011c9c(List *l,Node *n){Node *p=n->prev,*q=n->next;if(p)p->next=q;else l->head=q;if(q)q->prev=p;else l->tail=p;return p;}
