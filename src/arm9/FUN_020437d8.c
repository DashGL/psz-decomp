//cpp
// flags: -O4,s
struct Damage { short h[5]; signed char b[14]; };
struct Context { int attacker, defender; unsigned char attackIndex, defenseIndex, side, kind; };
struct ICombat {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void FillAttack(void *, int) = 0;
    virtual void FillDefense(void *, int) = 0;
    virtual void Apply(Damage *, Context *) = 0;
};
extern "C" {
extern void *DAT_02108cf4;
extern int FUN_02078188(int),FUN_02078198(int),FUN_020781b0(int),FUN_020867a4(int *,int,int),FUN_02042964(void *,void *,int),FUN_02000ec4(int);
extern void *FUN_020352a4(void *,int);
extern ICombat *FUN_0206e748(void *);
extern void FUN_020360cc(void *),FUN_02043680(void *),FUN_02043780(void *),FUN_020428d0(void *),FUN_0203354c(int),FUN_020a10c8(int,int,int);
extern void FUN_02042a4c(void *,int *,void *,void *,int *,void *,int),FUN_02043584(void *,int *,void *,void *,int *,void *);
static inline int is_bit0(int v) { return (v & 1) ? 1 : 0; }
void FUN_020437d8(int attacker,int attackIndex,int defender,int defenseIndex,int *damageOut){
 int defense[29];
 int attack[59];
 Damage attackerDamage;
 Damage defenderDamage;
 Context context;
 int attackChanged;
 int defenseChanged;
 int distance;
 ICombat *attackerInterface,*defenderInterface;
 int kind,level;
 if(damageOut)*damageOut=0;
 if(FUN_02078188(defender)||FUN_02078198(defender)){
  FUN_020360cc(&attackerDamage);FUN_020360cc(&defenderDamage);
  attackerInterface=FUN_0206e748(FUN_020352a4(DAT_02108cf4,attacker));
  defenderInterface=FUN_0206e748(FUN_020352a4(DAT_02108cf4,defender));
  if(!attackerInterface||!defenderInterface)return;
  distance=0;FUN_020867a4(&distance,attacker,defender);
  attackChanged=0;defenseChanged=0;kind=-1;
  level=distance;
  FUN_020360cc(&attackerDamage);FUN_020360cc(&defenderDamage);
  FUN_02043680(attack);FUN_02043780(defense);
  attackerInterface->FillAttack(attack,attackIndex);
  if(is_bit0(attack[10])){defenseChanged=1;defenderDamage.h[4]|=256;}
  else{
   if(attack[35]&&(attack[36]<=0||attack[36]>5))attack[36]=1;
   FUN_020428d0(attack);
   if(attack[0]==1)defense[0]=0;
   else defense[0]=attack[1];
   defenderInterface->FillDefense(defense,defenseIndex);
   if(!FUN_02042964(attack,defense,level)){defenseChanged=1;defenderDamage.h[4]|=4;}
   else{
    if(attack[0]==0)FUN_02042a4c(&attackerDamage,&attackChanged,attack,&defenderDamage,&defenseChanged,defense,level);
    else if(attack[0]==1)FUN_02043584(&attackerDamage,&attackChanged,attack,&defenderDamage,&defenseChanged,defense);
    kind=attack[1];
   }
  }
  context.attacker=attacker;context.defender=defender;context.attackIndex=attackIndex;context.defenseIndex=defenseIndex;context.kind=kind;
  if(attackChanged){context.side=0;attackerInterface->Apply(&attackerDamage,&context);}
  if(defenseChanged){
   context.side=1;defenderInterface->Apply(&defenderDamage,&context);
   if(damageOut&&defenderDamage.h[0]<0)*damageOut=FUN_02000ec4(defenderDamage.h[0]);
   FUN_020a10c8(attacker,defenderDamage.h[0],0);
  }
 }else if(FUN_020781b0(defender))FUN_0203354c(defender);
}
}
