//cpp
// flags: -O4,p
struct C{unsigned char p[0xe4];unsigned int f;};struct S{unsigned int f0,f4;C *c;};extern "C" int FUN_020485b0(S *s){return (s->c!=0 && !(s->c->f&1));}
