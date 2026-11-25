// flags: -O2,p
struct S{unsigned int f0;unsigned int a[8];};void FUN_02042790(struct S *s){unsigned int i;for(i=0;i<8;i++)s->a[i]=0;}
