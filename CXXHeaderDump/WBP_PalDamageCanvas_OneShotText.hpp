#ifndef UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP
#define UE4SS_SDK_WBP_PalDamageCanvas_OneShotText_HPP

class UWBP_PalDamageCanvas_OneShotText_C : public UPalDamageDisplayCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0418 (size: 0x8)
    int32 Damage;                                                                     // 0x0420 (size: 0x4)
    FVector Hit Location;                                                             // 0x0428 (size: 0x18)
    TMap<class TSoftObjectPtr<AActor>, class UPalUIDamageTextBase*> DisplayingDamageTextMap; // 0x0440 (size: 0x50)
    double DisplayTime;                                                               // 0x0490 (size: 0x8)
    float DamageTextDisplayLength;                                                    // 0x0498 (size: 0x4)

    void IsEquipAttacker(class AActor* Attacker, bool& IsEquip);
    void CalcLengthToPlayer(FVector HitLocation, double& Length);
    void CalcTargetLocation(FPalDamageInfo DamageInfo, class AActor* Defender, FVector& Location);
    void AddNewDamageText(FPalDamageInfo DamageInfo, class AActor* Defender);
    void CreateDamageWidget(class UPalUIDamageTextBase*& createdWdiget);
    void CalcDamageTextType(FPalDamageInfo DamageInfo, class AActor* Defender, double DamageRate, int32 weakCount, EPalDamageTextType& textType);
    void OnSetup();
    void Destruct();
    void AddDamageTextEvent(const FPalDamageInfo& DamageInfo, class AActor* Defender);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint);
}; // Size: 0x49C

#endif
