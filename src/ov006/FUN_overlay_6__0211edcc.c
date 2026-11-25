// FUN_overlay_6__0211edcc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_6__0211edcc @ 0x0211edcc
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Find matching name among table indices one through eighteen.
 * Field identities remain provisional.
 */
extern const char * data_02120458[];
extern int FUN_02003e24(const char *,const char *);
int FUN_overlay_6__0211edcc(void *unused,const char *name) {if(name){int i;for(i=1;i<19;i++)if(!FUN_02003e24(name,data_02120458[i]))break;if(i==19)return 0;return i;}return 0;}
