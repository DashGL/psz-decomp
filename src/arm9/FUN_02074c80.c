// FUN_02074c80 @ 0x02074c80 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02074c80 @ 0x02074c80 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume stop or readiness action.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074c80.txt.
 */
typedef void (*Method)(void *); extern int FUN_02074d50(void *),FUN_020bb028(void *,int); extern void FUN_02073678(void); void FUN_02074c80(char *self) { void *p; switch(FUN_02074d50(self)) { case 3:p=*(void **)(self+36); (*(Method **)p)[2](p); FUN_02073678(); *(int *)(self+32)=0; break; case 4:if(FUN_020bb028(*(void **)(self+36),0)==1) self[41]=1; break; } }
