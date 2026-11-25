// FUN_overlay_12__02131f94 @ 0x02131f94 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131f94 @ 0x02131f94 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Check that all matching descendants have completed before reporting readiness.
 * Field identities remain provisional.
 */
extern int FUN_020ba028(void *,int);
int FUN_overlay_12__02131f94(int *p) {int *root,*node;if(!p[8]){root=(int *)p[7];while(root){node=root;while(node){if(FUN_020ba028(node,p[3])&&!node[8])return 0;node=(int *)node[5];}root=(int *)root[7];}return 1;}return 0;}
