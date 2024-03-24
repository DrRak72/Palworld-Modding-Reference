#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP

class UWBP_Ingame_PlayerGauge_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_KeyGuide;                                          // 0x0288 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1; // 0x0290 (size: 0x8)
    FName bindActionName;                                                             // 0x0298 (size: 0x8)
    TMap<class FName, class FDataTableRowHandle> MsgIDMap;                            // 0x02A0 (size: 0x50)

    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint);
}; // Size: 0x2F0

#endif
