// flags: -O4,p -noThumb
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
typedef struct Node{struct Node *next;void (*destroy)(void *,int);void *object;} Node;extern Node *DAT_02101dd0;void FUN_0200c23c(void){Node *p;while((p=DAT_02101dd0)!=0){DAT_02101dd0=p->next;p->destroy(p->object,-1);}}
