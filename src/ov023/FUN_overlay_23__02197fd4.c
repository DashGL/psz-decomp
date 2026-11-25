// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
//cpp
struct Player_ov23_02197fd4 {
 virtual void slot00();
 virtual void slot01();
 virtual void slot02();
 virtual void slot03();
 virtual void slot04();
 virtual void slot05();
 virtual void slot06();
 virtual void slot07();
 virtual void slot08();
 virtual void slot09();
 virtual void slot10();
 virtual void slot11();
 virtual void slot12();
 virtual void slot13();
 virtual void slot14();
 virtual void slot15();
 virtual void slot16();
 virtual void slot17();
 virtual void slot18();
 virtual void slot19();
 virtual void slot20();
 virtual void slot21();
 virtual void slot22();
 virtual void slot23();
 virtual void slot24();
 virtual void slot25();
 virtual void slot26();
 virtual void slot27();
 virtual void slot28();
 virtual void slot29();
 virtual void slot30();
 virtual void slot31();
 virtual void slot32();
 virtual void slot33();
 virtual void slot34();
 virtual void slot35();
 virtual void slot36();
 virtual unsigned reward(unsigned);
};
extern "C" {
// FUN_overlay_23__02197fd4 @ 0x02197fd4 (full extent 0x94, thumb)
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=18 exact_bytes=24 bad_relocs=0
// flags: -O4,s
/* Complete three-input reward/event dispatch. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch606.md. */
typedef int (*Reward)(void *,int);extern char *DAT_02108d04;extern char DAT_0211a51c[];extern void FUN_020369c8(void *,int,int,int);extern int FUN_02084cc0(void *);extern void FUN_020368b0(void *,int,int,int,int);
void FUN_overlay_23__02197fd4(char *self,const signed char *packet,const int *id){char *player;int type,action,active;if(!*(int *)(self+0xd4))return;player=DAT_02108d04;if(!player)return;if((unsigned char)player[0x7a]<100){int value=(short)*(int *)(self+0xd8);((Player_ov23_02197fd4 *)player)->reward(value);FUN_020369c8(self,value,8,0);}else FUN_020369c8(self,0,6,0);*(int *)(self+0xd8)=*(int *)(self+0xd8)/2;type=packet[19];action=packet[20];active=FUN_02084cc0(DAT_0211a51c);FUN_020368b0(self,0,type,action,*id==active);}

}
