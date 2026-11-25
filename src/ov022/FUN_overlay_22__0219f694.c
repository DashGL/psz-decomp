// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x22, exact bytes and relocation targets.
// FUN_overlay_22__0219f694 @ 0x0219f694 (code 0x22, pool extent 0x22, thumb)
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Validate low-halfword slot and full handle before returning child.
 * Field identities remain provisional.
 */
void *FUN_overlay_22__0219f694(unsigned int *p,unsigned int handle) { unsigned int *child; int index=(unsigned short)handle; if(index>=20)return 0; child=(unsigned int *)p[index]; if(!child)return 0; if(handle!=child[5])return 0; return child; }
