// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x88 exact_bytes=0 bad_relocs=0
// Field promotion proof: notes/sessions/matching-overlays-2026-11-12-small-diff-semantic.json
// FUN_overlay_12__02126f38 @ 0x02126f38 (code 0x88, pool extent 0x88, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reject invalid or matching subtype item selections before allowing the paired action.
 * Field identities remain provisional.
 */
extern unsigned char *FUN_02086e3c(void);extern unsigned int *FUN_020b00d0(void *,int);extern int FUN_overlay_12__02134ae8(void *);extern int FUN_02084900(void *);extern int FUN_overlay_12__02126ea8(void *,void *);
int FUN_overlay_12__02126f38(int *self){unsigned char *inventory;unsigned int *first,*second;int subtype;if(self[5]<0||self[4]<0)return 1;inventory=FUN_02086e3c()+16;first=FUN_020b00d0(inventory,self[5]);second=FUN_020b00d0(inventory,self[4]);if(!first)return 1;if(!FUN_overlay_12__02134ae8(first))return 1;if(!FUN_02084900(first))return 1;if(!second)return 1;if(!FUN_overlay_12__02126ea8(self,second))return 1;subtype=((int)second[2]&0x3e000)>>13;if(subtype==FUN_overlay_12__02134ae8(first))return 1;return 0;}
