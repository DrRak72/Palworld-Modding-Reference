#ifndef UE4SS_SDK_BP_PalUIBuildingModel_HPP
#define UE4SS_SDK_BP_PalUIBuildingModel_HPP

class UBP_PalUIBuildingModel_C : public UPalUIBuildingModel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)
    FBP_PalUIBuildingModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;      // 0x0038 (size: 0x10)
    void OnUpdateInventoryDelegate();

    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_PalUIBuildingModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
}; // Size: 0x48

#endif
