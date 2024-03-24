#ifndef UE4SS_SDK_BP_PalUIDismantlingModel_HPP
#define UE4SS_SDK_BP_PalUIDismantlingModel_HPP

class UBP_PalUIDismantlingModel_C : public UPalUIDismantlingModel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)
    FBP_PalUIDismantlingModel_COnUpdateInventoryDelegate OnUpdateInventoryDelegate;   // 0x0038 (size: 0x10)
    void OnUpdateInventoryDelegate();

    void OnUpdateInventory(class UPalItemContainer* Container);
    void ExecuteUbergraph_BP_PalUIDismantlingModel(int32 EntryPoint);
    void OnUpdateInventoryDelegate__DelegateSignature();
}; // Size: 0x48

#endif
