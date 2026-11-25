// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04. Update bounds and compare three collision registry lists.
 * Evidence: scratch/coverage-high-game/inspect264.txt and 020be76c.txt. */
typedef struct Node{int a,b,c;char *data;int d;struct Node *next;}Node;extern void FUN_020bf320(void *),FUN_020be8cc(void *,Node *,Node *),FUN_020bea20(void *,Node *,Node *);extern int FUN_020be758(void *,Node *,Node *);
#define HEAD(n) (*(Node **)(s+(n)))
#define FILTER(a,b) ((bmask=(unsigned *)((b)->data+12)),((mask[0]&bmask[1])|(bmask[0]&mask[1])))
void FUN_020be76c(char *s){Node *a,*b;unsigned *mask, *bmask;for(a=HEAD(2428);a;a=a->next)FUN_020bf320(a->data);for(a=HEAD(2452);a;a=a->next)FUN_020bf320(a->data);for(a=HEAD(2476);a;a=a->next)FUN_020bf320(a->data);for(b=HEAD(2428);b;b=b->next){mask=(unsigned *)(b->data+12);for(a=b->next;a;a=a->next)if(FILTER(b,a)&&FUN_020be758(s,b,a))FUN_020be8cc(s,b,a);}for(a=HEAD(2452);a;a=a->next){mask=(unsigned *)(a->data+12);for(b=HEAD(2428);b;b=b->next)if(FILTER(a,b)&&FUN_020be758(s,a,b))FUN_020bea20(s,b,a);for(b=HEAD(2476);b;b=b->next)if(FILTER(a,b)&&FUN_020be758(s,a,b))FUN_020bea20(s,b,a);}for(a=HEAD(2476);a;a=a->next){mask=(unsigned *)(a->data+12);for(b=HEAD(2428);b;b=b->next)if(FILTER(a,b)&&FUN_020be758(s,a,b))FUN_020bea20(s,a,b);}}
