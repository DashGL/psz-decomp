// FUN_020a9cf4 @ 0x020a9cf4 (0xaa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xaa candidate=0xaa words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Dispatch actor effect parameters by mode.
 * Inventory truncates the 41-entry switch: full CFG ends at 020a9d9e (170 bytes),
 * before alignment halfword. Evidence: scratch/coverage-high-game/inspect298.txt. */
extern void FUN_020a9da0(void *,void *,int),FUN_020aa594(void *,void *,int),FUN_020aa83c(void *,void *,int),FUN_020aa9e4(void *,void *),FUN_020aa4e4(void *,void *),FUN_020aa520(void *,void *),FUN_020aa558(void *,void *);
void FUN_020a9cf4(void *s,char *out,int mode){if(!out)return;switch(mode){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:FUN_020a9da0(s,out,mode);break;case 19:case 20:case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:case 31:case 32:FUN_020aa594(s,out,mode);break;case 35:case 36:case 37:FUN_020aa83c(s,out,mode);break;case 38:FUN_020aa9e4(s,out);break;case 33:FUN_020aa4e4(s,out);break;case 34:FUN_020aa520(s,out);break;case 39:FUN_020aa558(s,out);break;case 40:*(int *)out=1;*(int *)(out+176)|=1;break;default:FUN_020a9da0(s,out,mode);break;}}
