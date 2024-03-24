#ifndef UE4SS_SDK_WBP_Menu_PlayerGauge_HP_HPP
#define UE4SS_SDK_WBP_Menu_PlayerGauge_HP_HPP

class UWBP_Menu_PlayerGauge_HP_C : public UWBP_Menu_CharacterHPGauge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Menu_PlayerGauge_HP(int32 EntryPoint);
}; // Size: 0x5C0

#endif
