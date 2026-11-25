// FUN_overlay_12__0213369c @ 0x0213369c (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__02131f88(void *),FUN_020c193c(int,int,int,int,int);
int FUN_overlay_12__0213369c(int *self)
{
    int result=1;
    if(self[21])result=((int (*)(int))self[21])(self[23]);
    if(result){
        if(self[22]){self[15]=1;FUN_020c193c(5,3,0,0,-1);}
        FUN_overlay_12__02131f88(self);
    }else FUN_020c193c(0,5,0,0,-1);
    return result;
}
