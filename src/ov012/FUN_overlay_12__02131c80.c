// FUN_overlay_12__02131c80 @ 0x02131c80 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131c80 @ 0x02131c80 (code 0x74, pool extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Apply each resource patch record to the attribute halfwords of its OAM cells.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02131ad0(int);extern void *FUN_020c1fc8(void);extern int FUN_020c2608(void *,int);extern unsigned char *FUN_020c2680(void *,int);extern unsigned char *FUN_02012914(void *,unsigned int);extern unsigned short FUN_overlay_12__02131d68(const void *,unsigned short);
void FUN_overlay_12__02131c80(const unsigned char *records,int count){int i,j,handle;unsigned char *resource,*cells;if(!records)return;for(i=0;i<count;i++,records+=8){handle=FUN_overlay_12__02131ad0(*(const int *)records);if(FUN_020c2608(FUN_020c1fc8(),handle)){resource=FUN_020c2680(FUN_020c1fc8(),handle);if(resource){cells=FUN_02012914(*(void **)(resource+20),*(const unsigned short *)(records+4));if(cells)for(j=0;j<*(unsigned short *)cells;j++){unsigned char *data=*(unsigned char **)(cells+4);unsigned short value=FUN_overlay_12__02131d68(records,*(unsigned short *)(data+6*j+4));data=*(unsigned char **)(cells+4);*(unsigned short *)(data+6*j+4)=value;}}}}}
