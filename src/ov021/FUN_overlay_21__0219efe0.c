// FUN_overlay_21__0219efe0 @ 0x0219efe0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219efe0 @ 0x0219efe0 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Turn toward a valid target by a bounded heading step and advance when complete or target is unavailable.
 * Field identities remain provisional.
 */
extern int FUN_overlay_21__0219a7c4(void *,int *);extern int FUN_overlay_21__02199360(void *,const int *,unsigned int,int);extern void FUN_02037924(void *);void FUN_overlay_21__0219efe0(unsigned char *p) {unsigned char *state=*(unsigned char **)(p+8);void *actor=*(void **)(p+4);int pos[3],done;if(FUN_overlay_21__0219a7c4(state,pos))done=FUN_overlay_21__02199360(actor,pos,1280,0);else done=1;if(done){*(int *)(state+128)=4;FUN_02037924(*(void **)(p+8));}}
