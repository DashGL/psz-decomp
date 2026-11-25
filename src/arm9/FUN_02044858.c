// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets; argument/return contract corrected.
// flags: -O4,s
// Constructor adapter: passes incoming position and option to44b80, returns original receiver.
// Evidence: notes/reference/one-call-low-20261113/FUN_02044858-proof.json
typedef struct { unsigned int x,y,z; } Triple_02044858;
extern void *FUN_02044b80(char *,const Triple_02044858 *,unsigned int);
char *FUN_02044858(char *self,const Triple_02044858 *value,unsigned int option)
{
    FUN_02044b80(self,value,option);
    return self;
}
