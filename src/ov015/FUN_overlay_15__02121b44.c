// FUN_overlay_15__02121b44 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02121b44 @ 0x02121b44 (code 0x26, full extent 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *data_0213d250[];
extern void FUN_0206719c(void *),FUN_02067220(void *);
void *FUN_overlay_15__02121b44(int name,int size){
    if(size>0){
        void *ptr;
        FUN_0206719c((void *)0x0213d2e4);
        ptr=((void *(*)(int))data_0213d250[1])(size);
        FUN_02067220((void *)0x0213d2e4);
        return ptr;
    }
    return 0;
}
