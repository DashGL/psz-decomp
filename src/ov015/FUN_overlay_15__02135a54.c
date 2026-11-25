// FUN_overlay_15__02135a54 @ 0x02135a54 (code 0x1c, pool extent 0x20, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Extract nine-bit upper field and low byte from indexed word.
 * Field identities remain provisional.
 */
void FUN_overlay_15__02135a54(void **p,unsigned int index,unsigned int *upper,unsigned int *low) {unsigned int *data=p[2];*upper=(data[index*2]&0x01ff0000)>>16;*low=(unsigned char)data[index*2];}
