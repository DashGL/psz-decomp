// FUN_overlay_11__02120df0 @ 0x02120df0 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__02120df0 @ 0x02120df0 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Recursively relocate child and sibling offsets relative to each node.
 * Field identities remain provisional.
 */
void FUN_overlay_11__02120df0(void *context,unsigned int *node) {do{node[0]=node[0]?(unsigned int)node+node[0]:0;node[1]=node[1]?(unsigned int)node+node[1]:0;if(node[0])FUN_overlay_11__02120df0(context,(unsigned int *)node[0]);node=(unsigned int *)node[1];}while(node);}
