#ifndef UE4SS_SDK_WBP_MainMenu_Technology_00_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_00_HPP

class UWBP_MainMenu_Technology_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point;            // 0x0280 (size: 0x8)
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point_Boss;       // 0x0288 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x0290 (size: 0x8)
    TMap<int32, FF_PalUITechnologyDataMapContent> TechnologyMap;                      // 0x0298 (size: 0x50)
    TArray<class UWBP_MainMenu_Technology_List_C*> TechnologyListWidgetArray;         // 0x02E8 (size: 0x10)
    FWBP_MainMenu_Technology_00_COnClickedTchnology OnClickedTchnology;               // 0x02F8 (size: 0x10)
    void OnClickedTchnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnHoveredTechnology OnHoveredTechnology;             // 0x0308 (size: 0x10)
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnUnhoveredTechnology OnUnhoveredTechnology;         // 0x0318 (size: 0x10)
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    int32 MaxTechnologyLevel;                                                         // 0x0328 (size: 0x4)
    int32 MinTechnologyLevel;                                                         // 0x032C (size: 0x4)
    class UWBP_MainMenu_Technology_List_C* LastHoveredListWidget;                     // 0x0330 (size: 0x8)
    class UWBP_MainMenu_Technology_Content_C* LastHoveredButtonWidget;                // 0x0338 (size: 0x8)

    void UpdateAllTechnologyButton();
    void GetTopUnlockableFocusTarget(class UWidget*& Target);
    class UWidget* CustomNavi_Up(EUINavigation Navigation);
    void GetCustomNavigationTarget(int32 TargetListOffset, int32 NowListIndex, class UWidget*& Widget);
    class UWidget* CustomNavi_Down(EUINavigation Navigation);
    void OnHoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    void OnUnhoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void GetTopFocusTarget(class UWidget*& Target);
    void SetupTechnologyList();
    void CreateTechnologyMap();
    void Setup();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Technology_00(int32 EntryPoint);
    void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
}; // Size: 0x340

#endif
