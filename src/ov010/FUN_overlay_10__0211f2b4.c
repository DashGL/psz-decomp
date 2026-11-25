// FUN_overlay_10__0211f2b4 @ 0x0211f2b4 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211f2b4 @ 0x0211f2b4 (thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_overlay_10__0211f43c(void *),FUN_overlay_10__0211f328(void *,unsigned);
extern unsigned FUN_overlay_10__0211f02c(void *);
extern void FUN_overlay_10__0211f824(void *,int,int);
int FUN_overlay_10__0211f2b4(char *self,int forward){
    int old,current;
    if(*(unsigned *)self==3)return 0;
    old=FUN_overlay_10__0211f43c(self);
    *(int *)(self+152)=(int)(*(unsigned *)(self+152)+1)%2;
    current=FUN_overlay_10__0211f43c(self);FUN_overlay_10__0211f824(self,old,current);
    if(FUN_overlay_10__0211f02c(self)==65535)FUN_overlay_10__0211f328(self,0);
    *(short *)(self+252)=forward?2:-2;*(unsigned *)(self+164)=0;return 1;
}
