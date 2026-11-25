// FUN_02050f8c @ 0x02050f8c (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_02050f8c @ 0x02050f8c (inventory code 0x70, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 45.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b45/02050f8c.txt.
 */
extern int FUN_02032bd4(void *);extern void FUN_020656b8(void *,int,unsigned int);extern void FUN_0206d60c(void *,void *);
void FUN_02050f8c(void **s,unsigned int arg){unsigned int record[8];*(int *)s[1]=FUN_02032bd4(*(void **)0x02108c64);*(int *)s[3]=0;*(int *)s[5]=0;FUN_020656b8(s[0],0,160);FUN_020656b8(s[2],0,6144);FUN_020656b8(s[4],0,4096);*(unsigned int *)s[6]=arg;record[0]=(unsigned int)s[0];record[1]=*(unsigned int *)s[1];record[2]=(unsigned int)s[2];record[3]=512;record[4]=(unsigned int)s[3];record[5]=(unsigned int)s[4];record[6]=512;record[7]=(unsigned int)s[5];FUN_0206d60c(s,record);}
