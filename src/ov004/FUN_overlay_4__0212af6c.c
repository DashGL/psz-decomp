// FUN_overlay_4__0212af6c @ 0x0212af6c (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212af6c @ 0x0212af6c (0x54, Thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// Initialize fields and16-byte subrecord, allocate60-byte child, run setup and clear subrecord again.
extern void *FUN_020c4434(void *),*FUN_020ba894(unsigned int),*FUN_020c3564(void *);extern void FUN_overlay_4__0212b030(void *),FUN_020c4560(void *);
void *FUN_overlay_4__0212af6c(char *self){void *p;*(int *)self=0;*(int *)(self+4)=0;*(int *)(self+8)=-1;*(int *)(self+12)=0;*(int *)(self+16)=0;*(short *)(self+20)=-1;*(short *)(self+22)=-1;*(int *)(self+24)=0;*(short *)(self+28)=0;*(short *)(self+46)=0;FUN_020c4434(self+48);*(int *)(self+64)=0;*(int *)(self+68)=0;*(int *)(self+72)=0;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)self=p;FUN_overlay_4__0212b030(self);*(short *)(self+28)=0;*(short *)(self+46)=0;FUN_020c4560(self+48);return self;}
