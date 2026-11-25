// FUN_0206be90 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
typedef struct Node{void (*callback)(void *);void *arg;struct Node *next;} Node;
void FUN_0206be90(Node *node){while(node){node->callback(node->arg);node=node->next;}}
