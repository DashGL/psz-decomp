// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_25__02199828 @ 0x02199828 (code 0x7a, pool extent 0x84, thumb)
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize the derived entity vectors, sentinels, and kind-relative selector.
 * Field identities remain provisional.
 */
typedef struct { int x,y,z; } Vec;
extern void *FUN_020352dc(void *,int,int);

extern struct { Vec field_0; } DAT_020fc958;
void *FUN_overlay_25__02199828(unsigned char *self,int id,int kind){
 FUN_020352dc(self,id,kind);
 *(unsigned int *)self=0x0219ae34;
 *(Vec *)(self+212)=DAT_020fc958.field_0;
 *(int *)(self+228)=-1;*(int *)(self+232)=-1;
 *(Vec *)(self+236)=DAT_020fc958.field_0;
 *(Vec *)(self+248)=DAT_020fc958.field_0;
 *(Vec *)(self+260)=DAT_020fc958.field_0;
 *(Vec *)(self+272)=DAT_020fc958.field_0;
 *(int *)(self+284)=0;*(int *)(self+224)=kind-9;
 return self;
}
