#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_ThworObjectNone_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_ThworObjectNone_HPP

class UWBP_Ingame_PlayerGauge_ThworObjectNone_C : public UUserWidget
{
    class UImage* Base;                                                               // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0280 (size: 0x8)
    TMap<TEnumAsByte<E_PalUIThrowObjectNoneMessageType::Type>, FDataTableRowHandle> MsgIDMap; // 0x0288 (size: 0x50)

    void SetDisplayMode(TEnumAsByte<E_PalUIThrowObjectNoneMessageType::Type> DisplayType);
}; // Size: 0x2D8

#endif