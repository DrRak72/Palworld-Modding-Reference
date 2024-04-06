#ifndef UE4SS_SDK_BP_NPC_SalesPerson_Weapon_1_HPP
#define UE4SS_SDK_BP_NPC_SalesPerson_Weapon_1_HPP

class ABP_NPC_SalesPerson_Weapon_1_C : public ABP_NPC_StandardHumanDataSet_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0978 (size: 0x8)
    class UBP_PalShopVenderDataComponent_C* BP_PalShopVenderDataComponent;            // 0x0980 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NPC_SalesPerson_Weapon_1(int32 EntryPoint);
}; // Size: 0x988

#endif
