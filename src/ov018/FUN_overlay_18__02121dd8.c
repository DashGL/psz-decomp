// FUN_overlay_18__02121dd8 @ 0x02121dd8 (0xd6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_18__02121dd8 @ 0x02121dd8 (full extent 0xd6, thumb)
// check: vers=2.0/sp2p3 target=0xd6 candidate=0xd6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete three-input menu transition. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch620.md. */
extern char *FUN_overlay_18__02121808(char *);
extern void FUN_overlay_18__02121c18(char *,int);
extern void FUN_overlay_18__02121c28(char *,int);
int FUN_overlay_18__02121dd8(char *self,int column,int row){int handled=0,selected;switch(*(int *)(self+0x94)){case 0:if(row==4){if(column>=0&&column<5){*(int *)(self+0x94)=1;FUN_overlay_18__02121c18(FUN_overlay_18__02121808(self),0);FUN_overlay_18__02121c28(FUN_overlay_18__02121808(self),0);handled=1;}else if(column>=5&&column<10){*(int *)(self+0x94)=1;FUN_overlay_18__02121c18(FUN_overlay_18__02121808(self),1);FUN_overlay_18__02121c28(FUN_overlay_18__02121808(self),0);handled=1;}}break;case 1:if(column==0){*(int *)(self+0x94)=0;FUN_overlay_18__02121c28(FUN_overlay_18__02121808(self),0);selected=*(int *)(FUN_overlay_18__02121808(self)+12);if(selected>=5&&selected<10)FUN_overlay_18__02121c18(FUN_overlay_18__02121808(self),0);handled=1;}else{*(int *)(self+0x94)=0;FUN_overlay_18__02121c28(FUN_overlay_18__02121808(self),0);selected=*(int *)(FUN_overlay_18__02121808(self)+12);if(selected>=0&&selected<5)FUN_overlay_18__02121c18(FUN_overlay_18__02121808(self),5);handled=1;}break;}return handled;}
