// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_10__02121010 @ 0x02121010, verified extent 0x3c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02122da4[];
// FUN_overlay_10__02121010 @ 0x02121010 (code 0x36, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay10 ROM reconstruction, 2026-11-05.
 * Update indexed record via 20-byte snapshot; clear its transient +16 field.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch356.md.
 */
extern char *FUN_020c1154(int);extern void FUN_overlay_10__02120fb4(void *,const void *);extern void FUN_02074504(void *,const void *);
void FUN_overlay_10__02121010(const void *source,int index) {unsigned short snapshot[10];char *target;if(source){target=FUN_020c1154(index);if(target){snapshot[0]=0;snapshot[9]=0;FUN_overlay_10__02120fb4(snapshot,source);FUN_02074504(target+16,snapshot);*(int *)((unsigned int)DAT_02122da4 + 12u)=1;}}}
