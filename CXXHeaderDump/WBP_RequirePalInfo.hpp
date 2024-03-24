#ifndef UE4SS_SDK_WBP_RequirePalInfo_HPP
#define UE4SS_SDK_WBP_RequirePalInfo_HPP

class UWBP_RequirePalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Electric_EnableToDisable;                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Set;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_None;                                                 // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Detail;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Simple;                                               // 0x02A0 (size: 0x8)
    class UImage* Base;                                                               // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_RequirePal;                                            // 0x02B0 (size: 0x8)
    class UCanvasPanel* ElectricPower;                                                // 0x02B8 (size: 0x8)
    class UImage* Line;                                                               // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Electric;                                          // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireGenus;                                      // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireType;                                       // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability;                            // 0x02E0 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x02E8 (size: 0x8)
    FDataTableRowHandle RequireGenusMSGID;                                            // 0x02F0 (size: 0x10)
    FDataTableRowHandle RequireTypeMSGID;                                             // 0x0300 (size: 0x10)
    FDataTableRowHandle PowerOnlineMSGID;                                             // 0x0310 (size: 0x10)
    FDataTableRowHandle PowerOfflineMSGID;                                            // 0x0320 (size: 0x10)

    void SetupPowerSuffcient(class UPalMapObjectEnergyModule* Module);
    void UpdatePowerSuffcient(class UPalMapObjectEnergyModule* Module);
    void Update Display(class UPalWorkBase* Work, EPalWorkSuitability WorkSuitability);
    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void SetWarning_Genus_Type(FText genusNames, FText typeNames);
    void AnmEvent_ToDetail();
    void AnmEvent_ToSimpleDetail();
    void AnmEvent_NoRecipe();
    void AnmEvent_ForceSimple();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_RequirePalInfo(int32 EntryPoint);
}; // Size: 0x330

#endif
