// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_020b9cb0 @ 0x020b9cb0
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0211b27c[];
/* USA ROM reconstruction, 2026-11-04.
 * Construct numbered intrusive node and attach to parent list.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b9cb0.txt.
 */
void *FUN_020b9cb0(char *self,char *parent){char *p;*(unsigned int *)self=0x020fc88c;*(int *)(self+4)=0;*(int *)(self+12)=0;*(int *)(self+20)=0;*(void **)(self+24)=parent;*(int *)(self+28)=0;*(unsigned int *)(self+8)=*D_0211b27c;(*D_0211b27c)++;if(!parent){*(void **)(self+16)=self;return self;}p=*(char **)(parent+28);if(p){*(void **)(self+16)=*(void **)(p+16);*(void **)(*(char **)(p+16)+20)=self;*(void **)(p+16)=self;return self;}*(void **)(self+16)=self;*(void **)(parent+28)=self;return self;}
