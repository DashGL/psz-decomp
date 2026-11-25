// flags: -O4,s
/* ABI review: resident getters read globals/hardware and take no arguments.
 * USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear palette RAM and two buffers using lengths captured from owner words +50/+54.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_0206557c(unsigned int,void *,unsigned int);
extern void *FUN_0205e1dc(void), *FUN_0205e40c(void);
void FUN_overlay_12__021358b4(void **self) {
    unsigned int size; void *owner; void *buffer;
    FUN_0206557c(0,(void *)0x05000000,512);
    owner=self[0]; size=((unsigned int *)owner)[20]; buffer=FUN_0205e1dc(); FUN_0206557c(0,buffer,size);
    owner=self[0]; size=((unsigned int *)owner)[21]; buffer=FUN_0205e40c(); FUN_0206557c(0,buffer,size);
}
