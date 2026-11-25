// FUN_020d79ec @ 0x020d79ec (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void *FUN_020d79ec(unsigned int *list){char *node=(char *)list[0];if(node){list[0]=*(unsigned int *)(node+36);if(!list[0])list[1]=0;list[2]--;}return node;}
