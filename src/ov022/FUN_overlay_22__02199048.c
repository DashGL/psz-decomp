// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_22__02199048 @ 0x02199048 (code 0x84, full extent 0x8c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch447.md.
 */
typedef struct {int x,y,z;} Vec;extern unsigned FUN_overlay_22__021a0570(void *,void *,void *,void *);extern void FUN_overlay_22__0219aa30(void *,void *,unsigned short,unsigned short,unsigned short);extern void FUN_overlay_22__0219a05c(void *,int);extern void FUN_overlay_22__021989ec(void *,int,int);extern void FUN_overlay_22__0219a0f4(void *,int);

extern struct { Vec field_0; } DAT_020fc958;
void FUN_overlay_22__02199048(int *self) { self[80]=0;*(Vec *)(self+7)=DAT_020fc958.field_0;*(Vec *)(self+4)=DAT_020fc958.field_0;((unsigned short *)self)[20]=0;((unsigned short *)self)[21]=0;((unsigned short *)self)[22]=0;FUN_overlay_22__021a0570((void *)self[2],self+4,self+6,(char *)self+0x2a);FUN_overlay_22__0219aa30(self,self+4,((unsigned short *)self)[20],((unsigned short *)self)[21],((unsigned short *)self)[22]);FUN_overlay_22__0219a05c(self,1);FUN_overlay_22__021989ec(self,1,1);if(((signed char *)self)[0x136]==0)FUN_overlay_22__0219a0f4(self,16);else FUN_overlay_22__0219a0f4(self,19); }
