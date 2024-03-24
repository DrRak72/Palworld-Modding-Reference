#ifndef UE4SS_SDK_WBP_PlayerHPGauge_HPP
#define UE4SS_SDK_WBP_PlayerHPGauge_HPP

class UWBP_PlayerHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UWBP_GuildGauge_C* WBP_GuildGauge;                                          // 0x0580 (size: 0x8)
    float ImportedSphereRadius;                                                       // 0x0588 (size: 0x4)
    FVector2D DrawOffset;                                                             // 0x0590 (size: 0x10)
    FTimerHandle CheckActorTimerHandle;                                               // 0x05A0 (size: 0x8)
    FTimerHandle CheckDisplayTypeTimerHandle;                                         // 0x05A8 (size: 0x8)
    class UBP_Status_Dying_C* CachedDyingStatus;                                      // 0x05B0 (size: 0x8)
    FWBP_PlayerHPGauge_COnDelayClose OnDelayClose;                                    // 0x05B8 (size: 0x10)
    void OnDelayClose(class UWidget* Widget);

    void OnDyingEnd();
    void SetupDying();
    void UpdateWidgetPosition();
    void OnUpdateLevel_binded(int32 NewLevel);
    void OnUpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetupByActor();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateForTick(double DeltaTime);
    void OnUpdateNickName_Binded(FString newNickName);
    void OnTimerEvent_CheckGuild();
    void OnTimerEvent_CheckActor();
    void OnInitialized();
    void Destruct();
    void DelayClose();
    void ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint);
    void OnDelayClose__DelegateSignature(class UWidget* Widget);
}; // Size: 0x5C8

#endif
