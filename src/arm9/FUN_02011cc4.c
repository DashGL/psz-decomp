// FUN_02011cc4 @ 0x02011cc4 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
typedef struct Node{unsigned int header,size;struct Node *prev,*next;} Node;typedef struct{Node *head,*tail;} List;Node *FUN_02011cc4(List *l,Node *n,Node *p){Node *q;n->prev=p;if(p){q=p->next;p->next=n;}else{q=l->head;l->head=n;}n->next=q;if(q)q->prev=n;else l->tail=n;return n;}
