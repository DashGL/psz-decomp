// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_12__02128b48 @ 0x02128b48
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0213f19c[];
extern char D_0213f1b8[];
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Game record formatting, action scheduling or actor allocation.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch363.md.
 * Field identities remain provisional; stack input/output layout preserved.
 */
extern int FUN_0203a1fc(void *);extern int FUN_0209ca8c(void *,void *,int);extern int FUN_020c3f90(char *,unsigned int,const char *,...);
char * FUN_overlay_12__02128b48(char *self,const char *format) { if(FUN_0203a1fc(self+32))return 0;if(FUN_0209ca8c(D_0213f19c,self+32,0)){FUN_020c3f90(D_0213f1b8,256,format,D_0213f19c);return D_0213f1b8;}return 0; }
