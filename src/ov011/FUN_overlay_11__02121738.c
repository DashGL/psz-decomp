// FUN_overlay_11__02121738 @ 0x02121738 (0x8a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__02121738 @ 0x02121738 (thumb)
// check: 2.0/sp2p3 target=0x8a candidate=0x8a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_11__02122fc8(void *);
extern unsigned *FUN_overlay_11__0212146c(void *,int);
extern unsigned FUN_overlay_11__02123008(void *,int);
void FUN_overlay_11__02121738(char *self,unsigned char *appearance){
    FUN_overlay_11__02122fc8(appearance);
    appearance[37]=(unsigned char)*FUN_overlay_11__0212146c(self+72,0);
    appearance[38]=(unsigned char)*FUN_overlay_11__0212146c(self+72,1);
    appearance[40]=(unsigned char)*FUN_overlay_11__0212146c(self+72,2);
    appearance[39]=(unsigned char)*FUN_overlay_11__0212146c(self+72,3);
    appearance[42]=(unsigned char)*FUN_overlay_11__0212146c(self+72,4);
    appearance[41]=(unsigned char)FUN_overlay_11__02123008(appearance,appearance[42]);
    appearance[44]=(unsigned char)*FUN_overlay_11__0212146c(self+72,5);
}
