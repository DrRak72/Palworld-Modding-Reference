#ifndef UE4SS_SDK_WBP_Menu_PlayerEXP_HPP
#define UE4SS_SDK_WBP_Menu_PlayerEXP_HPP

class UWBP_Menu_PlayerEXP_C : public UWBP_Menu_CharacterExpGauge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Menu_PlayerEXP(int32 EntryPoint);
}; // Size: 0x5D8

#endif
