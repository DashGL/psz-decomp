// FUN_overlay_4__0212d30c @ 0x0212d30c (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212d30c @ 0x0212d30c (code 0x7c, pool extent 0x7c, thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Render the confirmation prompt and its two labels once the text resource is available.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void),*FUN_02077930(void);extern int FUN_02077d98(void *);extern const char *FUN_0208efa8(void *,int,int,int);extern void FUN_020c3788(void *,const char *,int,int,int);void FUN_overlay_4__0212d30c(int *self){void *manager;int handle;const char *text;if(self[16]!=0)return;manager=FUN_0208f068();if(!manager)return;handle=FUN_02077d98(FUN_02077930());text=FUN_0208efa8(manager,handle,7,0);if(!text)return;FUN_020c3788(self+1,text,23,0,2);text=FUN_0208efa8(manager,handle,0,14);FUN_020c3788(self+1,text,91,48,2);text=FUN_0208efa8(manager,handle,0,15);FUN_020c3788(self+1,text,91,60,2);self[16]=1;}
