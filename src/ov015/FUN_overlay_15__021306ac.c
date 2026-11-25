// FUN_overlay_15__021306ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__021306ac @ 0x021306ac (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned entries[3];} Messages;
extern int FUN_overlay_15__02135c44(unsigned);
extern void FUN_overlay_15__02127e24(unsigned *,unsigned *);
extern void FUN_overlay_15__02132e00(unsigned,unsigned,unsigned,int,unsigned);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern void FUN_overlay_15__02130700(void);
void FUN_overlay_15__021306ac(void){
    Messages messages=*(Messages *)0x0213a648;
    unsigned mode;
    if(FUN_overlay_15__02135c44(1))return;
    if(FUN_overlay_15__02135c44(0))return;
    FUN_overlay_15__02127e24(0,&mode);
    FUN_overlay_15__02132e00(messages.entries[mode],1,1,-1,0);
    FUN_overlay_15__02127de4(FUN_overlay_15__02130700);
}
