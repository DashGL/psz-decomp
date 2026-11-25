// FUN_020bab0c @ 0x020bab0c (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020bab0c @ 0x020bab0c (inventory code 0x68, thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read complete length-prefixed circular-buffer record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bab0c.txt.
 */
extern int FUN_020baa40(void *);extern void FUN_02065774(void *,void *,int);void *FUN_020bab0c(char *s){int available=FUN_020baa40(s),size,remaining,offset;char *data;if(available>0){offset=*(int *)(s+12);data=*(char **)(s+4);size=4*(unsigned char)data[offset];if(size<=available){if(size<=0){*(int *)(s+32)=1;return 0;}remaining=*(int *)(s+8)-offset;if(remaining>=size){*(int *)(s+12)=offset+size;if(*(int *)(s+12)>=*(int *)(s+8))*(int *)(s+12)=0;return data+offset;}if(remaining>0)FUN_02065774(data+offset,*(void **)(s+24),remaining);size-=remaining;if(size>0)FUN_02065774(*(void **)(s+4),*(char **)(s+24)+remaining,size);*(int *)(s+12)=size;return *(void **)(s+24);}}return 0;}
