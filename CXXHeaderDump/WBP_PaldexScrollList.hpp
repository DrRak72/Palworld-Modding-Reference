#ifndef UE4SS_SDK_WBP_PaldexScrollList_HPP
#define UE4SS_SDK_WBP_PaldexScrollList_HPP

class UWBP_PaldexScrollList_C : public UWBP_PalCommonScrollList_C
{
    FWBP_PaldexScrollList_COnHoveredAnyPanel OnHoveredAnyPanel;                       // 0x0440 (size: 0x10)
    void OnHoveredAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* selfWidget);
    FWBP_PaldexScrollList_COnClickedAnyPanel OnClickedAnyPanel;                       // 0x0450 (size: 0x10)
    void OnClickedAnyPanel(FName CharacterID, class UWBP_Paldex_List_C* Widget);

    void ClickByCharacterID(FName CharacterID);
    void GetWidgetByIndex(int32 Index, class UWBP_Paldex_List_C*& Widget);
    void ClickByIndex(int32 Index);
    void OnClickedPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void GetFocusTargetByCharacterID(FName CharacterID, class UWidget*& Widget);
    void GetFocusTargetByIndex(int32 Index, class UWidget*& Target);
    void FocusByCharatcerID(FName CharacterID);
    void FocusByIndex(int32 Index);
    void CreateChild(FPalUIPaldex_DisplayInfo DisplayInfo);
    void OnHoveredPanel_Internal(FName CharacterID, class UWBP_Paldex_List_C* selfWidget);
    void AddDisplayInfo(TArray<FPalUIPaldex_DisplayInfo>& infoArray);
    void OnClickedAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHoveredAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* selfWidget);
}; // Size: 0x460

#endif
