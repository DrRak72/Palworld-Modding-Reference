#ifndef UE4SS_SDK_WBP_DebuffNotice_HPP
#define UE4SS_SDK_WBP_DebuffNotice_HPP

class UWBP_DebuffNotice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Flash;                                                // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UImage* Frame;                                                              // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DebuffName;                                        // 0x0298 (size: 0x8)
    TMap<TEnumAsByte<E_PalUIPlayerDebuffNoticeType::Type>, FDataTableRowHandle> MsgIDMap; // 0x02A0 (size: 0x50)

    void Setup(TEnumAsByte<E_PalUIPlayerDebuffNoticeType::Type> DebuffType);
    void AnmEvent_Flash();
    void ExecuteUbergraph_WBP_DebuffNotice(int32 EntryPoint);
}; // Size: 0x2F0

#endif
