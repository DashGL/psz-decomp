//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct C_020b2e04 {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual void v3();
 virtual void v4();
 virtual void v5();
 virtual unsigned int v6();
};
extern "C" {
extern void FUN_020302e8(void *,void *),FUN_020b800c(int,int,int,void *,unsigned int),FUN_0203041c(void *);
void FUN_020b2e04(char *self){unsigned int pos[3];int inactive=((C_020b2e04 *)self)->v6()?E0:E1;FUN_020302e8(pos,self);FUN_020b800c(0,inactive,(*(signed char **)(self+52))[3],pos,*(unsigned short *)(*(char **)(self+4)+16));FUN_0203041c(self);}
}
