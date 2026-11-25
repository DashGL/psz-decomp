// flags: -O4,s
// Destroy the owned buffer array and twenty actor components in ROM order.
typedef struct Object Object;
struct Object {void (**vtable)(Object *);};
typedef struct {void *pointer;int other;} Buffer;
extern char DAT_0219f99c[];
extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *),FUN_02037848(void *);
#define P(o) (*(Object **)((char *)self+(o)))
#define B (*(Buffer **)((char *)self+0x11c))
static inline void destroy(Object *p){if(p)p->vtable[4](p);}
void *FUN_overlay_20__021999a0(void *self)
{
 int i;
 *(void **)self=DAT_0219f99c;
 if(B){
  for(i=0;i<*(int *)((char *)self+0x120);i++)if(B[i].pointer){FUN_020ba8b4(B[i].pointer);B[i].pointer=0;}
  if(B){FUN_020ba8b4(B);B=0;}
 }
 if(P(0xcc)){destroy(P(0xcc));P(0xcc)=0;}
 if(P(0xd0)){destroy(P(0xd0));P(0xd0)=0;}
 if(P(0xd4)){destroy(P(0xd4));P(0xd4)=0;}
 if(P(0xd8)){destroy(P(0xd8));P(0xd8)=0;}
 if(P(0xdc)){destroy(P(0xdc));P(0xdc)=0;}
 if(P(0xe0)){destroy(P(0xe0));P(0xe0)=0;}
 if(P(0xe4)){destroy(P(0xe4));P(0xe4)=0;}
 if(P(0xe8)){destroy(P(0xe8));P(0xe8)=0;}
 if(P(0xec)){destroy(P(0xec));P(0xec)=0;}
 if(P(0xf0)){destroy(P(0xf0));P(0xf0)=0;}
 if(P(0xf4)){destroy(P(0xf4));P(0xf4)=0;}
 if(P(0xf8)){destroy(P(0xf8));P(0xf8)=0;}
 if(P(0xfc)){destroy(P(0xfc));P(0xfc)=0;}
 if(P(0x100)){destroy(P(0x100));P(0x100)=0;}
 if(P(0x104)){destroy(P(0x104));P(0x104)=0;}
 if(P(0x108)){destroy(P(0x108));P(0x108)=0;}
 if(P(0x10c)){destroy(P(0x10c));P(0x10c)=0;}
 if(P(0x110)){destroy(P(0x110));P(0x110)=0;}
 if(P(0x114)){destroy(P(0x114));P(0x114)=0;}
 if(P(0x118)){destroy(P(0x118));P(0x118)=0;}
 FUN_02037848(self);
 FUN_020ba8ac(self);
 return self;
}
