#ifndef UE4SS_SDK_WBP_PalWorkFarm_HPP
#define UE4SS_SDK_WBP_PalWorkFarm_HPP

class UWBP_PalWorkFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Progress_Pre_Loop;                                    // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0418 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0420 (size: 0x8)
    class UImage* ProgressArrow0;                                                     // 0x0428 (size: 0x8)
    class UImage* ProgressArrow0_1;                                                   // 0x0430 (size: 0x8)
    class UImage* ProgressArrow0_2;                                                   // 0x0438 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0440 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Progress_Aft;                                      // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Progress_Pre;                                      // 0x0450 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0458 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0460 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x0468 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x0470 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x0478 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x0480 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0488 (size: 0x8)
    class UPalMapObjectFarmBlockV2Model* Model;                                       // 0x0490 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x0498 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x04E8 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04F8 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0500 (size: 0x1)
    bool HideNextState;                                                               // 0x0501 (size: 0x1)

    void CREATEDELEGATE_PROXYFUNCTION_0(float NewValue);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double Progress);
    void OnUpdateState(EPalFarmCropState LastState, EPalFarmCropState NextState);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWorkFarm(int32 EntryPoint);
}; // Size: 0x502

#endif
