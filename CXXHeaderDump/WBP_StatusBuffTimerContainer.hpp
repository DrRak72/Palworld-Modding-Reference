#ifndef UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP
#define UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP

class UWBP_StatusBuffTimerContainer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0280 (size: 0x8)
    TMap<EPalFoodStatusEffectType, int32> Effects;                                    // 0x0288 (size: 0x50)

    void UpdateCharacterBuff(class UPalIndividualCharacterParameter* individualParam);
    void ExecuteUbergraph_WBP_StatusBuffTimerContainer(int32 EntryPoint);
}; // Size: 0x2D8

#endif
