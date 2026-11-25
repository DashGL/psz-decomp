// FUN_overlay_11__021214dc @ 0x021214dc (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__021214dc @ 0x021214dc (thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Options input callback: row navigation and bounded value changes. */
extern void FUN_overlay_11__021214b0(void *),FUN_overlay_11__02121484(void *);extern void *FUN_overlay_11__0212146c(void *,int);extern unsigned FUN_overlay_11__021213e4(void *),FUN_overlay_11__021213d0(void *);
int FUN_overlay_11__021214dc(int *self,void *unused,unsigned action){int changed=0;switch(action){case 0:FUN_overlay_11__021214b0(self+18);changed=1;break;case 1:FUN_overlay_11__02121484(self+18);changed=1;break;case 2:FUN_overlay_11__021213e4(FUN_overlay_11__0212146c(self+18,self[18]));self[21]=-2;if(self[18]!=6){if(self[18]==4)*(int *)0x02124b0c=0;changed=1;self[22]=1;}break;case 3:FUN_overlay_11__021213d0(FUN_overlay_11__0212146c(self+18,self[18]));self[21]=2;if(self[18]!=6){if(self[18]==4)*(int *)0x02124b0c=0;changed=1;self[22]=1;}break;}return changed;}
