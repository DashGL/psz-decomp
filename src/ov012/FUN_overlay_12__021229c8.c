// FUN_overlay_12__021229c8 @ 0x021229c8 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__021229c8 @ 0x021229c8 (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete scene setup/update, concrete callee inputs. */
extern void FUN_020a45a4(int),FUN_overlay_12__02134a90(void *,int),FUN_overlay_12__0212c824(int),FUN_overlay_12__02135140(void),FUN_overlay_12__02135430(void),FUN_overlay_12__02134bdc(void *,void *,int);extern void *FUN_overlay_12__02135454(void);
void FUN_overlay_12__021229c8(char *s){FUN_020a45a4(2);*(volatile unsigned short *)0x0400000a=(*(volatile unsigned short *)0x0400000a&0x43)|4;FUN_020a45a4(8);*(volatile unsigned short *)0x0400000e=(*(volatile unsigned short *)0x0400000e&0x43)|0x190;FUN_overlay_12__02134a90(s+4,3);FUN_overlay_12__0212c824(0);FUN_overlay_12__02135140();FUN_overlay_12__02135430();FUN_overlay_12__02134bdc(FUN_overlay_12__02135454(),*(void **)0x0213f2fc,4);}
