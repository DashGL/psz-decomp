// flags: -O4,s -noThumb
extern const unsigned int DAT_020f19b0[];
unsigned int FUN_02061e18(unsigned int selector,unsigned int address,unsigned int size){
    switch(DAT_020f19b0[selector]){
    case 2:
        if(address>=0x027ffe00 && address+size<=0x027fff60)return 1;
        break;
    case 0:
        if(address>=0x02000000 && address+size<=0x022c0000)return 1;
        break;
    case 1:
        if(address>=0x022c0000 && address+size<=0x02300000)return 1;
        if(address>=0x02000000 && address+size<=0x02300000)return 1;
        break;
    default:
        return 0;
    }
    return 0;
}
