#ifndef UE4SS_SDK_WBP_MainMenu_Money_HPP
#define UE4SS_SDK_WBP_MainMenu_Money_HPP

class UWBP_MainMenu_Money_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* CharaHead_Dot_7;                                                    // 0x0280 (size: 0x8)
    class UImage* CharaHead_Dot_8;                                                    // 0x0288 (size: 0x8)
    class UImage* CharaHead_Dot_9;                                                    // 0x0290 (size: 0x8)
    class UImage* CharaHead_Dot_10;                                                   // 0x0298 (size: 0x8)
    class UImage* CharaHead_Dot_11;                                                   // 0x02A0 (size: 0x8)
    class UImage* CharaHead_Dot_12;                                                   // 0x02A8 (size: 0x8)
    class UImage* CharaHeadBase_2;                                                    // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Money;                                             // 0x02B8 (size: 0x8)

    void WBP_MainMenu_Money_AutoGenFunc(int64 NowMoney);
    void UpdateMoney(FString NowMoney);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Money(int32 EntryPoint);
}; // Size: 0x2C0

#endif
