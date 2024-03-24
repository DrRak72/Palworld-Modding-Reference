#ifndef UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_SimpleList_HPP

class UWBP_IngameMenu_Task_SimpleList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0580 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalActionInfo;                                     // 0x0588 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x0590 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0598 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x05A0 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x05A8 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x05B0 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;                           // 0x05B8 (size: 0x30)
    TArray<class UWBP_MainMenu_Pal_State_C*> conditionWidgetArray;                    // 0x05E8 (size: 0x10)

    void UpdateNickName(FString newNickName);
    void Setup(class UPalIndividualCharacterSlot* targetSlot);
    void UpdateCondition(TArray<EPalUIConditionType>& Conditions);
    void Clear();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint);
}; // Size: 0x5F8

#endif
