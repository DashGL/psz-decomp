// FUN_overlay_12__0212bd78 @ 0x0212bd78 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212bd78 @ 0x0212bd78 (thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete game UI/protocol function and concrete ABI reviewed. */
extern int FUN_0203a1fc(void *),FUN_0203a820(void *,int);extern void FUN_020a11fc(void),FUN_020a0d10(void);void FUN_overlay_12__0212bd78(char *s){int i;unsigned char *entry;for(i=0;i<7;i++){entry=(unsigned char *)s+112+20*i;if((FUN_0203a1fc(entry)?0:1)&&FUN_0203a820(entry,0)&&entry[1]==17)FUN_020a11fc();}FUN_020a0d10();}
