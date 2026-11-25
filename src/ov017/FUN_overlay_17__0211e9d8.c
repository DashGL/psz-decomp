// FUN_overlay_17__0211e9d8 @ 0x0211e9d8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e9d8 @ 0x0211e9d8 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Find depth-first tree node at countdown index, traversing sibling list.
 * Field identities remain provisional.
 */
typedef struct Node {struct Node *child,*next;} Node;
Node *FUN_overlay_17__0211e9d8(void *context,Node *p,int *count) {do{Node *r;--*count;if(*count<0)return p;if(p->child){r=FUN_overlay_17__0211e9d8(context,p->child,count);if(r)return r;}p=p->next;}while(p);return 0;}
