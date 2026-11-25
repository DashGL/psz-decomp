// FUN_overlay_11__021215a8 @ 0x021215a8 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_11__021215a8 @ 0x021215a8 (thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_11__02121738(void *,void *),FUN_overlay_11__021217c4(void *,void *),FUN_overlay_11__02121c08(void *,int);
extern int *FUN_overlay_11__0212146c(void *,int);
extern int FUN_020bbf6c(unsigned),FUN_overlay_11__02123030(void *,int);
int FUN_overlay_11__021215a8(char *self){
    FUN_overlay_11__02121738(self,(void *)0x02156b38);
    FUN_overlay_11__021217c4(self,(void *)0x02156b38);
    if(*(unsigned *)(self+72)==4 && FUN_020bbf6c(2048)){
        int *entry=FUN_overlay_11__0212146c(self+72,4);
        int sound=FUN_overlay_11__02123030((void *)0x02156b38,*entry);
        FUN_overlay_11__02121c08(self,sound);
    }
    return 1;
}
