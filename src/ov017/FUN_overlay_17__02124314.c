// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_17__02124314 @ 0x02124314 (code 0x38, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay17 ROM reconstruction, 2026-11-05.
 * Game controller construction, message dispatch or script command.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch361.md.
 */
extern int FUN_overlay_17__02123eec(void *);extern void *FUN_overlay_17__02120980(void);extern void FUN_overlay_17__02120d48(void *,int,int,unsigned int);
void FUN_overlay_17__02124314(void *reader) { int enabled=FUN_overlay_17__02123eec(reader);int second=FUN_overlay_17__02123eec(reader);int third=FUN_overlay_17__02123eec(reader);unsigned int flags=0;flags|=!enabled?0:16;FUN_overlay_17__02120d48(FUN_overlay_17__02120980(),third,second,flags); }
