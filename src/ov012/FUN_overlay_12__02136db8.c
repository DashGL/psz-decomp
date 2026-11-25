// FUN_overlay_12__02136db8 @ 0x02136db8 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136db8 @ 0x02136db8 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full page dispatch/input logic and concrete receiver-only helpers reviewed. */
extern void FUN_overlay_12__0213738c(void *),FUN_overlay_12__02136c84(void *),FUN_overlay_12__02136e04(void *),FUN_overlay_12__021370e0(void *),FUN_overlay_12__02137178(void *);int FUN_overlay_12__02136db8(unsigned char *s){if(s[317]==17)return 0;FUN_overlay_12__0213738c(s);FUN_overlay_12__02136c84(s);switch(*(int *)(s+356)){case 0:FUN_overlay_12__02136e04(s);break;case 1:FUN_overlay_12__021370e0(s);break;case 2:FUN_overlay_12__02137178(s);break;}return 1;}
