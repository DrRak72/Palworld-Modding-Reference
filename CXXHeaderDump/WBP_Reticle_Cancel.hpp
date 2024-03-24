#ifndef UE4SS_SDK_WBP_Reticle_Cancel_HPP
#define UE4SS_SDK_WBP_Reticle_Cancel_HPP

class UWBP_Reticle_Cancel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Cancel;                                            // 0x0280 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0288 (size: 0x8)
    bool CurrentIsCancel;                                                             // 0x0290 (size: 0x1)

    void SetKeyGuideInfo(TEnumAsByte<Enum_ReticleCancel_DisplayType::Type> DisplayType);
    void ExecuteUbergraph_WBP_Reticle_Cancel(int32 EntryPoint);
}; // Size: 0x291

#endif
