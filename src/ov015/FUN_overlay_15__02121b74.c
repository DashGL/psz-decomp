// FUN_overlay_15__02121b74 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02121b74 @ 0x02121b74 (code 0x20, full extent 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *data_0213d250[];
extern void FUN_0206719c(void *),FUN_02067220(void *);
void FUN_overlay_15__02121b74(int name,void *ptr,int size){
    if(ptr&&size>0){
        FUN_0206719c((void *)0x0213d2e4);
        ((void (*)(void *))data_0213d250[3])(ptr);
        FUN_02067220((void *)0x0213d2e4);
    }
}
