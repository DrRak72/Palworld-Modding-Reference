#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_LR_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_LR_HPP

class UWBP_IngameMenuConstruction_LR_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_PushArrowR;                                           // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_PushArrowL;                                           // 0x0288 (size: 0x8)
    class UImage* ArrowImage;                                                         // 0x0290 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0298 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x02A0 (size: 0x8)
    TArray<class UWBP_PalKeyGuideIcon_C*> Icons;                                      // 0x02A8 (size: 0x10)

    void SetInputAction(int32 Index, FName ActionName);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenuConstruction_LR(int32 EntryPoint);
}; // Size: 0x2B8

#endif
