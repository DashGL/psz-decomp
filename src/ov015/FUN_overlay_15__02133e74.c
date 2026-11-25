// FUN_overlay_15__02133e74 @ 0x02133e74 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02133e74 @ 0x02133e74 (code 0x38, full extent 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char * volatile data_0213e8e0[];
extern int FUN_02053f84(void *);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__02133e74(void){
    unsigned state=*(unsigned *)(data_0213e8e0[1]+0x40);
    if(state-4<=2)return 1;
    state=FUN_02053f84((void *)0x02133eb5);
    if(state!=2){
        FUN_overlay_15__02133d7c(state);
        return 0;
    }
    *(unsigned short *)(data_0213e8e0[1]+0x50)=0;
    *(unsigned short *)(data_0213e8e0[1]+0x52)=1;
    return 1;
}
