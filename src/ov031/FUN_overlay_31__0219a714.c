// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// FUN_overlay_31__0219a714 @ 0x0219a714 (code 0x2a, pool extent 0x2a, thumb)
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Apply fixed-point operation to child signed halfword and store scaled result.
 * Field identities remain provisional.
 */
extern void FUN_020bc5cc(int *,const int *,const void *);
void FUN_overlay_31__0219a714(char *p,const void *value) {short *field=(short *)(*(char **)(p+4)+24);if(field) {int result;int source=*field<<12;FUN_020bc5cc(&result,&source,value);*(short *)(p+96)=result>>12;}}
