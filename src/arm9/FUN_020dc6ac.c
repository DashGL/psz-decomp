// flags: -O4,p
// USA encoded identity operations; helper return values retained.
extern void FUN_020dc740(unsigned int,void *);
extern int FUN_020015ac(const void *,const void *,unsigned int);
int FUN_020dc6ac(unsigned int input){unsigned char decoded[24];FUN_020dc740(input,decoded);return FUN_020015ac(decoded,(void *)0x021001c0,8)==0;}
