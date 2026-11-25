// flags: -O4,p
// FUN_overlay_31__021995ec @ 0x021995ec (code 0x32, pool extent 0x48, thumb)
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Return singleton, initializing static storage and raw exit callback once.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0219a769[];
extern void * DAT_0219d0a0[];
extern unsigned int DAT_0219d0a4[];
extern unsigned char DAT_0219d0b4[];
extern unsigned char DAT_0219d118[];
extern void *FUN_overlay_31__0219a750(void *);
extern void FUN_0200c594(void *,void *,void *);
void *FUN_overlay_31__021995ec(void) {void *p=*DAT_0219d0a0;if(!p){if(!(*DAT_0219d0a4&1)){FUN_overlay_31__0219a750((void *)DAT_0219d0b4);FUN_0200c594((void *)DAT_0219d0b4,(void *)DAT_0219a769,(void *)DAT_0219d118);*DAT_0219d0a4|=1;}p=(void *)DAT_0219d0b4;}return p;}
