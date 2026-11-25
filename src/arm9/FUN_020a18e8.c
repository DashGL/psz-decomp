// FUN_020a18e8 @ 0x020a18e8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a18e8 @ 0x020a18e8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append node to doubly linked chain; initialize links only when first node.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a18e8.txt.
 */
void FUN_020a18e8(void **self,void **node) { void **p=self[14]; if(!p) { self[14]=node; node[24]=0; node[25]=0; } else { while(p[24]) p=p[24]; p[24]=node; node[25]=p; } }
