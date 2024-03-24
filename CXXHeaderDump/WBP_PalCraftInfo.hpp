#ifndef UE4SS_SDK_WBP_PalCraftInfo_HPP
#define UE4SS_SDK_WBP_PalCraftInfo_HPP

class UWBP_PalCraftInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Set;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_None;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Detail;                                               // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Simple;                                               // 0x0298 (size: 0x8)
    class UWBP_CommonCircularGauge_C* CircularGauge_Progress;                         // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x02B8 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x02C0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x02C8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x02D0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x02D8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x02E0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x02E8 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x02F0 (size: 0x8)
    TArray<class UWBP_PalCraftInfo_Pal_C*> workerPalWidgetArray;                      // 0x02F8 (size: 0x10)
    FDataTableRowHandle InfinityNumMsgId;                                             // 0x0308 (size: 0x10)
    FDataTableRowHandle RequireGenusMSGID;                                            // 0x0318 (size: 0x10)
    FDataTableRowHandle RequireTypeMSGID;                                             // 0x0328 (size: 0x10)

    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void UpdateRequireInfo(class UPalWorkBase* Work, EPalWorkSuitability WorkSuitability);
    bool IsCharacterAssignedFixedToTargetWork(class UPalCharacterParameterComponent* TargetCharacter, FGuid WorkId);
    void SetInvalidRecipeDetail();
    void SetProductItemID(FName ItemId);
    void SetWorkProgressRate(double Rate);
    void SetIcon(FName ItemId);
    void SetInfinityProductMode();
    void SetProductNum(int32 nowProductNum, int32 maxProductNum);
    void SetWorkerPalSlots(TArray<class UPalIndividualCharacterSlot*>& Slots, FGuid WorkId);
    void AnmEvent_ToDetail();
    void AnmEvent_ToSimpleDetail();
    void AnmEvent_NoRecipe();
    void AnmEvent_ForceSimple();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_PalCraftInfo(int32 EntryPoint);
}; // Size: 0x338

#endif
