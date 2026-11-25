// FUN_overlay_10__02120b7c @ 0x02120b7c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120b7c @ 0x02120b7c (code 0x40, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Convert twelve digit bytes to text, preserve parsed 64-bit result and return validation status.
 * Field identities remain provisional.
 */
extern unsigned long long FUN_020dd47c(char *);
extern int FUN_020c0cc0(char *,int);
int FUN_overlay_10__02120b7c(char *p,unsigned long long *out) {char text[13];int i;if(*(int *)(p+76)==12){text[12]=0;for(i=0;i<12;i++)text[i]=(signed char)p[88+i]+48;*out=FUN_020dd47c(text);return FUN_020c0cc0(text,0);}return -3;}
