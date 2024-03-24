#ifndef UE4SS_SDK_WBP_Ingameconstruction_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingameconstruction_KeyGuide_HPP

class UWBP_Ingameconstruction_KeyGuide_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_46;                                           // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0280 (size: 0x8)
    TArray<class UWBP_PalKeyGuideIcon_C*> KeyGuideIcons;                              // 0x0288 (size: 0x10)

    void Setup(TArray<FName>& ActionNames, FText DisplayText);
}; // Size: 0x298

#endif
