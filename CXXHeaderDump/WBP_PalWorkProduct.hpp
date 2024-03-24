#ifndef UE4SS_SDK_WBP_PalWorkProduct_HPP
#define UE4SS_SDK_WBP_PalWorkProduct_HPP

class UWBP_PalWorkProduct_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x0430 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0438 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0440 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x0448 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x0450 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x0458 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x0460 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0468 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x0470 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x04C0 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04D0 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x04D8 (size: 0x1)
    bool HideNextState;                                                               // 0x04D9 (size: 0x1)
    class UPalMapObjectProductItemModel* Product Item Model;                          // 0x04E0 (size: 0x8)

    void OnUpdateContainer(class UPalItemContainer* Container);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalWorkProgress* Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkProduct(int32 EntryPoint);
}; // Size: 0x4E8

#endif
