#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_Radial_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_Radial_HPP

class UWBP_IngameMenuConstruction_Radial_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Demolish;                                             // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Construction;                                         // 0x0418 (size: 0x8)
    class UWidgetAnimation* Anm_ConstructionToDemolish;                               // 0x0420 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0428 (size: 0x8)
    class UWBP_CommonRadialMenuBase_C* WBP_CommonRadialMenuBase;                      // 0x0430 (size: 0x8)
    class UWBP_IngameMenuConstruction_info_C* WBP_IngameMenuConstruction_info;        // 0x0438 (size: 0x8)
    class UWBP_IngameMenuConstruction_LR_C* WBP_IngameMenuConstruction_LR_L;          // 0x0440 (size: 0x8)
    class UWBP_IngameMenuConstruction_LR_C* WBP_IngameMenuConstruction_LR_R;          // 0x0448 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab;          // 0x0450 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_1;        // 0x0458 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_2;        // 0x0460 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_3;        // 0x0468 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_4;        // 0x0470 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_5;        // 0x0478 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_6;        // 0x0480 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_7;        // 0x0488 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_8;        // 0x0490 (size: 0x8)
    class UWBP_IngameMenuConstruction_Tab_C* WBP_IngameMenuConstruction_Tab_9;        // 0x0498 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction DecideMenuAction;                              // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabActionName;                             // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabActionName_Mouse;                       // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabActionName;                             // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabActionName_Mouse;                       // 0x04C8 (size: 0x8)
    TMap<class EPalBuildObjectTypeA, class bool> BuildObjectDataListMap;              // 0x04D0 (size: 0x50)
    class UBP_InGameMenuBuildModel_C* Model;                                          // 0x0520 (size: 0x8)
    TMap<class EPalBuildObjectTypeA, class UWBP_IngameMenuConstruction_Tab_C*> Tabs;  // 0x0528 (size: 0x50)
    int32 CurrentPageIndex;                                                           // 0x0578 (size: 0x4)
    EPalBuildObjectTypeA CurrentCategory;                                             // 0x057C (size: 0x1)
    int32 SelectedIndex;                                                              // 0x0580 (size: 0x4)
    TArray<FPalBuildObjectData> CurrentPageObjects;                                   // 0x0588 (size: 0x10)
    FWBP_IngameMenuConstruction_Radial_COnBuildModeStart OnBuildModeStart;            // 0x0598 (size: 0x10)
    void OnBuildModeStart();
    FPalDataTableRowName_UIInputAction OpenDismantling;                               // 0x05A8 (size: 0x8)
    TArray<FPalUIActionBindData> ActionBindList;                                      // 0x05B0 (size: 0x10)
    FPalDataTableRowName_UIInputAction PrevCategoryAction;                            // 0x05C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextCategoryAction;                            // 0x05C8 (size: 0x8)
    FName Flag Name;                                                                  // 0x05D0 (size: 0x8)
    TMap<class EPalBuildObjectTypeA, class FPalRadialCatalog> Catalogs;               // 0x05D8 (size: 0x50)
    TMap<EPalBuildObjectTypeA, int32> CatagoryIndex;                                  // 0x0628 (size: 0x50)
    TArray<FPalBuildObjectData> CurrentNewObjects;                                    // 0x0678 (size: 0x10)

    void CreateTab_Internal(EPalBuildObjectTypeA TypeA);
    void SelectTab(EPalBuildObjectTypeA TypeA);
    void UpdateTabNewFlag(EPalBuildObjectTypeA TypeA);
    void Update New Flag();
    void OnPrevCategoryAction();
    void OnNextCategoryAction();
    void On Update Inventory();
    void SetDisablePlayerAction(bool Disable);
    void Select Page and Index(int32 Page, int32 Index);
    void Select Page by Map Object(FName MapObjectId);
    void Select Map Object(FName MapObjectId);
    void Find Selected Index By Map Object Name(FName SelectMapObjectName, int32& Page, int32& Index);
    void Start Dismantle Mode();
    void CanConstructiBuildObject(FPalBuildObjectData BuildObjectData, bool& CanConstruct);
    bool IsExistsMaterialForBuildObject(FPalBuildObjectData BuildObjectData);
    bool Get Build Object Data(int32 Index, FPalBuildObjectData& Output);
    bool Get Selected Build Object Data(FPalBuildObjectData& Output);
    void Update Radial Menu Icon();
    void Update Radial Menu Center();
    void UpdateConstructionInfo();
    void GetPageCount(int32& PageCount);
    void Set Current Page Index(int32 Page);
    void Close(class UPalUserWidget* ParentWidget);
    void SetupUIInputAction(class UPalUserWidget* ParentWidget);
    void Setup Page Num();
    void Setup Tab();
    void SetupLR();
    void CreateModel();
    void Terminate UIInput Action(class UPalUserWidget* ParentWidget);
    void Open(class UPalUserWidget* ParentWidget);
    void On Dicide Radial Menu(int32 Index);
    void On Current Page Changed(EPalBuildObjectTypeA BuildObjectTypeA, int32 Tab);
    void OnSelectedIndexChanged(int32 newIndex, int32 prevIndex);
    void OnPrevTabAction();
    void OnNextTabAction();
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenuConstruction_Radial(int32 EntryPoint);
    void OnBuildModeStart__DelegateSignature();
}; // Size: 0x688

#endif
