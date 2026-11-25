// FUN_overlay_22__021a0698 @ 0x021a0698 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0698 @ 0x021a0698 (code 0x4e, full extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch403.md.
 */
extern void FUN_overlay_22__0219b354(void *,void *);extern void FUN_overlay_22__0219cc48(void *,void *);extern int FUN_overlay_22__021a0438(void *);
void FUN_overlay_22__021a0698(int *self,signed char *position,void *first,void *second) { if(self[2]==self[28]){self[21]=position[0]*4096;self[22]=position[1]*4096;*(unsigned short *)(self+23)=(unsigned char)position[2]<<8;if(self[13])FUN_overlay_22__0219b354((void *)self[13],first);if(self[14])FUN_overlay_22__0219cc48((void *)self[14],second);}else if(self[2]==self[27])FUN_overlay_22__021a0438(self); }
