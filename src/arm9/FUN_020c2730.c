// flags: -O4,s
#pragma opt_propagation off
extern void FUN_02003d54(void *,const void *,unsigned int),FUN_02003dd4(void *,const void *,unsigned int);
extern unsigned int FUN_020ba174(void *,void *,unsigned int,int),FUN_020ba50c(void);
void FUN_020c2730(unsigned int *self,unsigned int *resource,const void *path,unsigned int arg) {
    const void *ext = (void *)0x020fcae0;
    self[20] = 0;
    FUN_02003d54((void *)0x0211c864, path, 127);
    FUN_02003dd4((void *)0x0211c864, ext, 127);
    resource[1] = FUN_020ba174((void *)0x0211c864, (void *)0x020c2831, arg, -32);
    resource[12] = FUN_020ba50c();
}
