// FUN_020bcdb4 @ 0x020bcdb4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020bcdb4 @ 0x020bcdb4 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Base session object initialization.
 * Receiver-only; exact pointer identity and both explicit zero service inputs. */
extern char UNK_020fc9bc[];extern void *UNK_0211b3b8;
extern void FUN_020c5b1c(int),FUN_020c5cec(int);
void *FUN_020bcdb4(char *s){int i;*(void **)s=UNK_020fc9bc;*(int *)(s+4)=31;*(int *)(s+8)=0;*(int *)(s+16)=163;*(int *)(s+20)=0;*(int *)(s+24)=0;UNK_0211b3b8=s;FUN_020c5b1c(0);for(i=0;i<4;i++)s[12+i]=0;FUN_020c5cec(0);return s;}
