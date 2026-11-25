// FUN_overlay_4__02124a2c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_4__02124a2c @ 0x02124a2c (code 0x32, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Change mode after saving prior mode and associated table value.
 * Field identities remain provisional.
 */
extern unsigned int D_0212e894[];
int FUN_overlay_4__02124a2c(unsigned int *p,int mode) {if(mode!=0 && mode<7){p[54]=D_0212e894[p[52]];p[53]=p[52];p[52]=mode;return 1;}return 0;}
