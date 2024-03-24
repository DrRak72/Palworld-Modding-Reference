#ifndef UE4SS_SDK_WBP_IngameDamageVinette_HPP
#define UE4SS_SDK_WBP_IngameDamageVinette_HPP

class UWBP_IngameDamageVinette_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0290 (size: 0x8)
    class UImage* DamageVinette;                                                      // 0x0298 (size: 0x8)
    class UImage* DamageVinette_1;                                                    // 0x02A0 (size: 0x8)

    void AnmEvent_Start();
    void AnmEvent_End();
    void ExecuteUbergraph_WBP_IngameDamageVinette(int32 EntryPoint);
}; // Size: 0x2A8

#endif
