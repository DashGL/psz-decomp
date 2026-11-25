// FUN_overlay_4__0212a9bc @ 0x0212a9bc (0xaa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212a9bc @ 0x0212a9bc (code 0xaa, pool extent 0xaa, thumb)
// check: vers=2.0/sp2p3 target=0xaa candidate=0xaa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Reset descriptor groups except selected mode and always reset trailing descriptor.
 * Field identities remain provisional.
 */
extern void FUN_02090b44(void *);
void FUN_overlay_4__0212a9bc(char *p,int mode) {int i;if(mode!=1&&mode!=2){for(i=0;i<4;i++){FUN_02090b44(p+24+i*20);*(int *)(p+40+i*20)=0;p[792+i]=0;}}if(mode!=0&&mode!=2){for(i=0;i<8;i++){FUN_02090b44(p+104+i*20);*(int *)(p+120+i*20)=0;}}if(mode!=0&&mode!=1){for(i=0;i<25;i++){FUN_02090b44(p+264+i*20);*(int *)(p+280+i*20)=0;}}FUN_02090b44(p+764);*(int *)(p+780)=0;}
