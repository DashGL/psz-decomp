// FUN_overlay_15__0212d134 @ 0x0212d134 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212d134 @ 0x0212d134 (thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and concrete incoming/callee ABI reviewed. */
extern void *FUN_overlay_15__021318ac(void);extern int FUN_overlay_15__0212dcf0(void),FUN_overlay_15__0212d964(int);extern void FUN_overlay_15__02132190(int),FUN_overlay_15__0212e0d8(int),FUN_overlay_15__0212e314(void),FUN_overlay_15__0212d190(int);int FUN_overlay_15__0212d134(void){int action;FUN_overlay_15__021318ac();action=FUN_overlay_15__0212dcf0();if(action==14)return 0;if(!FUN_overlay_15__0212d964(action)){FUN_overlay_15__02132190(9);return 1;}FUN_overlay_15__0212e0d8(action);switch(action){case 2:case 3:case 7:case 8:FUN_overlay_15__0212e314();break;}FUN_overlay_15__0212d190(action);return 1;}
