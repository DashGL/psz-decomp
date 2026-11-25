// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_02096b18 @ 0x02096b18 (inventory code 0x58, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Rotate selected offset and add base position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096b18.txt.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_0209680c(void *,int);extern void *FUN_02099444(void);extern Vec *FUN_02099d8c(void *,int);extern void FUN_020bbfbc(void *,unsigned short);void FUN_02096b18(void *s,Vec *out,int index,Vec *base,unsigned short angle){int selected=FUN_0209680c(s,index);Vec result,v;v=*FUN_02099d8c(FUN_02099444(),selected);FUN_020bbfbc(&v,angle);result.x=base->x+v.x;result.y=base->y+v.y;result.z=base->z+v.z;*out=result;}
