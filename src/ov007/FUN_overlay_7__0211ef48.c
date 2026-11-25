// FUN_overlay_7__0211ef48 @ 0x0211ef48 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211ef48 @ 0x0211ef48 (0x62, Thumb)
// check: vers=2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// Process input toggles, synchronize selection and propagate selected ID; preserve base-handler return.
extern int FUN_020bbf6c(int),FUN_020af1ec(void *,void *);extern void FUN_overlay_7__0211e658(void),FUN_overlay_7__0211e664(void),FUN_overlay_7__0211f040(void *,int),FUN_overlay_7__0211e640(int);extern void *FUN_overlay_7__0211efe4(void);
int FUN_overlay_7__0211ef48(int *self,void *arg){int changed=0,result,id;void *p;if(FUN_020bbf6c(2048)){FUN_overlay_7__0211e658();changed=1;}if(FUN_020bbf6c(1024))FUN_overlay_7__0211e664();result=FUN_020af1ec(self,arg);id=self[1];if(self[30]!=id){self[30]=id;p=FUN_overlay_7__0211efe4();if(p)FUN_overlay_7__0211f040(p,id);}if(changed)self[25]|=1;FUN_overlay_7__0211e640(id);return result;}
