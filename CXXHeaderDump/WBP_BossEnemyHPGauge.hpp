#ifndef UE4SS_SDK_WBP_BossEnemyHPGauge_HPP
#define UE4SS_SDK_WBP_BossEnemyHPGauge_HPP

class UWBP_BossEnemyHPGauge_C : public UPalUICharacterHPGaugeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Close;                                                    // 0x0410 (size: 0x8)
    class UWBP_IngameBossHP_C* WBP_IngameBossHP;                                      // 0x0418 (size: 0x8)
    class APalCharacter* TargetCharacter;                                             // 0x0420 (size: 0x8)
    class UPalIndividualCharacterParameter* TargetIndividualParameter;                // 0x0428 (size: 0x8)
    FWBP_BossEnemyHPGauge_COnDead OnDead;                                             // 0x0430 (size: 0x10)
    void OnDead(class APalCharacter* TargetCharacter);
    bool isAlreadyDead;                                                               // 0x0440 (size: 0x1)

    void OnUpdateElement(EPalElementType type1, EPalElementType type2);
    void On Update Level(int32 addLevel, int32 nowLevel);
    void OnUpdateHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnRequestClose();
    void UpdateVisibility();
    void UpdateText();
    void SetupEvents();
    void SetTargetCharacter(class APalCharacter* TargetCharacter);
    void Finished_10F7592E48B01E3F065E49BC1224338C();
    void AnmEvent_Close();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint);
    void OnDead__DelegateSignature(class APalCharacter* TargetCharacter);
}; // Size: 0x441

#endif
