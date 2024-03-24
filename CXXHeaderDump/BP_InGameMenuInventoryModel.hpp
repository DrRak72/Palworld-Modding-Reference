#ifndef UE4SS_SDK_BP_InGameMenuInventoryModel_HPP
#define UE4SS_SDK_BP_InGameMenuInventoryModel_HPP

class UBP_InGameMenuInventoryModel_C : public UPalUIInGameMainMenuInventoryModel
{
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x0028 (size: 0x8)
    class UBP_PalLoadOutModel_C* LoadoutModel;                                        // 0x0030 (size: 0x8)

    void Dispose();
    void Setup();
}; // Size: 0x38

#endif
