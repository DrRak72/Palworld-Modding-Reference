#ifndef UE4SS_SDK_WBP_PalWork_BreedFarm_HPP
#define UE4SS_SDK_WBP_PalWork_BreedFarm_HPP

class UWBP_PalWork_BreedFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Mate;                                   // 0x0418 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0420 (size: 0x8)
    class UImage* Image_Egg;                                                          // 0x0428 (size: 0x8)
    class UImage* Image_Mate;                                                         // 0x0430 (size: 0x8)
    class UOverlay* Overlay_Condition_NoCake;                                         // 0x0438 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FemaleNum;                                         // 0x0440 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaleNum;                                           // 0x0450 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0458 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0460 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0468 (size: 0x1)
    class UPalMapObjectBreedFarmModel* Breed Farm Model;                              // 0x0470 (size: 0x8)
    FDataTableRowHandle CanBreedMsgId;                                                // 0x0478 (size: 0x10)
    FDataTableRowHandle CantBreedMsgId;                                               // 0x0488 (size: 0x10)
    FDataTableRowHandle BreedEggMsgId;                                                // 0x0498 (size: 0x10)
    FDataTableRowHandle NoMateMsgI;                                                   // 0x04A8 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_0(float CurrentProgress, float MaxProgress);
    void OnUpdateContainer(class UPalMapObjectItemContainerModule* Container);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(double NowProgress, double MaxProgress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_BreedFarm(int32 EntryPoint);
}; // Size: 0x4B8

#endif
