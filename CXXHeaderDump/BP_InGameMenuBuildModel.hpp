#ifndef UE4SS_SDK_BP_InGameMenuBuildModel_HPP
#define UE4SS_SDK_BP_InGameMenuBuildModel_HPP

class UBP_InGameMenuBuildModel_C : public UPalUIInGameMainMenuBuildModel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    class UBP_PalUIBuildModel_C* BuildModel;                                          // 0x0030 (size: 0x8)
    EPalBuildObjectTypeA InitialTypeA;                                                // 0x0038 (size: 0x1)
    FBP_InGameMenuBuildModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;    // 0x0040 (size: 0x10)
    void OnUpdateInventoryDelegate();

    void Setup();
    void SetInitialTypeA(EPalBuildObjectTypeA TypeA);
    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_InGameMenuBuildModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
}; // Size: 0x50

#endif
