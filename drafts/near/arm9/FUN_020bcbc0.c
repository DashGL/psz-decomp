// flags: -O4,s
// check: 2.0/sp2p3 target=0x192 candidate=0x192 words=7 exact_bytes=17 bad_relocs=0
// near: ndiff=7/101 size=0x192 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Traverse spatial tree with bounded pending-node stack.
 * Evidence: scratch/coverage-high-game/inspect296.txt and 020bcbc0.txt. */
typedef struct{unsigned short type,index;}State;typedef struct{unsigned char types[4];unsigned short indices[4];int x0,z0,x1,z1;}Node;typedef struct{int unused[2];Node *nodes;State *leaves;}Tree;typedef struct{int unused;Tree *tree;}Context;typedef int (*Callback)(void *,int *,void *);
extern int FUN_020bcb60(Context *,int,int,void *,void *,Callback,void *),FUN_020bcd54(int *,int *,int *,int *,void *);extern void FUN_020bcda0(State *,State *);
int FUN_020bcbc0(Context *self,void *model,void *point,Callback callback,void *arg){State stack[65],current;int count=0,found,x0,z0,x1,z1,xmid,zmid;Node *node;State *leaf;stack[0].type=0;stack[0].index=0;current.type=self->tree->nodes!=0;current.index=0;while(count>=0){if(!current.type){leaf=&self->tree->leaves[current.index];if(!FUN_020bcb60(self,leaf->type,leaf->index,point,model,callback,arg))return 1;FUN_020bcda0(&current,&stack[count]);count--;}else{node=&self->tree->nodes[current.index];found=0;x0=node->x0;z0=node->z0;x1=node->x1;z1=node->z1;zmid=(z0+z1)>>1;xmid=(x0+x1)>>1;
if(FUN_020bcd54(&x0,&z0,&xmid,&zmid,point)){{current.type=node->types[0];current.index=node->indices[0];}found++;}
if(FUN_020bcd54(&xmid,&z0,&x1,&zmid,point)){if(found){count++;if(count>=65)return 0;stack[count].type=node->types[1];stack[count].index=node->indices[1];}else{current.type=node->types[1];current.index=node->indices[1];}found++;}
if(FUN_020bcd54(&x0,&zmid,&xmid,&z1,point)){if(found){count++;if(count>=65)return 0;stack[count].type=node->types[2];stack[count].index=node->indices[2];}else{current.type=node->types[2];current.index=node->indices[2];}found++;}
if(FUN_020bcd54(&xmid,&zmid,&x1,&z1,point)){if(found){count++;if(count>=65)return 0;stack[count].type=node->types[3];stack[count].index=node->indices[3];}else{current.type=node->types[3];current.index=node->indices[3];}found++;}
if(!found){FUN_020bcda0(&current,&stack[count]);count--;}}}return 1;}
