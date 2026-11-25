// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_15__02135b60 @ 0x02135b60 (code 0x24, pool extent 0x24, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate queue and populate it with equally spaced record pointers.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_overlay_15__02135b44(int);
void *FUN_overlay_15__02135b60(int count,char *start,int stride) {unsigned int *p=FUN_overlay_15__02135b44(count);int i;for(i=0;i<count;i++){p[i+1]=(unsigned int)start;start+=stride;}((unsigned char *)p)[3]=(unsigned char)count;return p;}
