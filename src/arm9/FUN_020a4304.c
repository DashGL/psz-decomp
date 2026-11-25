// FUN_020a4304 @ 0x020a4304 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020a4304 @ 0x020a4304 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build positional command and submit to current resource handle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4304.txt.
 */
extern int FUN_020b8118(void *,void *,void *),FUN_020780b0(void *);extern void *FUN_02077f3c(void);extern void FUN_02071d0c(void *),FUN_020c324c(void *,int);int FUN_020a4304(void *s){int x=0,y=0;int packet[4];if(!FUN_020b8118(s,&x,&y)){int handle;FUN_02071d0c(packet);*(short *)packet=66;packet[2]=x<<12;packet[3]=y<<12;handle=FUN_020780b0(FUN_02077f3c());if(handle!=-1){FUN_020c324c(packet,handle);return 1;}}return 0;}
