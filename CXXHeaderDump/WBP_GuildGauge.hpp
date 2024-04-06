#ifndef UE4SS_SDK_WBP_GuildGauge_HPP
#define UE4SS_SDK_WBP_GuildGauge_HPP

class UWBP_GuildGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* GaugeBase;                                                          // 0x0280 (size: 0x8)
    class UPalProgressBar* PalProgressBar_Front_HP;                                   // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_HP_Back;                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName;                                         // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvNum;                                             // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x02A8 (size: 0x8)
    class UWBP_GuildMemberGauge_C* WBP_GuildMemberGauge;                              // 0x02B0 (size: 0x8)
    TEnumAsByte<E_PalUIGuildHPGaugeDisplayType::Type> CachedDisplayType;              // 0x02B8 (size: 0x1)
    class UPalUIDelayGaugeCalculator* DelayGauge;                                     // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* FriendColorMat;                                   // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* EnemyColorMat;                                    // 0x02D0 (size: 0x8)

    void SetDying(class UBP_Status_Dying_C* DyingStatus, bool Enable);
    void SetGuildName(FString GuildName);
    void SetLevel(int32 Level);
    void SetHP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void Set Display Type(TEnumAsByte<E_PalUIGuildHPGaugeDisplayType::Type> NewDisplayType);
    void SetNickName(FString NewNickName);
    void UpdateForTick(double DeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_GuildGauge(int32 EntryPoint);
}; // Size: 0x2D8

#endif
