#ifndef UE4SS_SDK_WBP_PlayerSideInfo_Separated_HPP
#define UE4SS_SDK_WBP_PlayerSideInfo_Separated_HPP

class UWBP_PlayerSideInfo_Separated_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_Separated_C* WBP_Ingame_PlayerGauge_Separated;      // 0x05A8 (size: 0x8)
    FTimerHandle CheckCaptureCountTimerHandle;                                        // 0x05B0 (size: 0x8)
    FTimerHandle CheckFirstActivationPalTimerHandle;                                  // 0x05B8 (size: 0x8)

    void OnTimer_CheckActivationOtomo();
    void DisableFirstSummonPalGuide();
    void EnableFirstSummonPalGuide();
    void OnTimer_CheckCaptureCount();
    void SetupFirstPalThrowGuide();
    void OnUpdateUsableHandFlag(bool CanUseLeftHandFlag, bool CanUseRightHandFlag);
    void OnEndAim();
    void OnAim();
    void OnChangedBodyTenperatureState(EPalBodyTemperatureState BodyState);
    void OnChangedTenperatureRegistRate(int32 NextResistHeat, int32 NextResistCold);
    void OnGetOff(class AActor* RideActor);
    void OnRideon(class AActor* RideActor);
    void Setup();
    void OnUpdatePlayerInventory(class UPalItemContainer* Container);
    void OnUpdatePlayerEquipment(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void OnDamagePlayer(FPalDamageResult DamageResult);
    void OnChangeOtomoIndex();
    void OnChangedLoadoutIndex(EPalPlayerInventoryType inventoryType, int32 Index);
    void OnChangedTemperature(int32 NextTemperature);
    void OnInitialized();
    void Destruct();
    void UpdateHunger_Binded(double nowHunger, double nowMaxHunger);
    void UpdatePlayerBuff();
    void ExecuteUbergraph_WBP_PlayerSideInfo_Separated(int32 EntryPoint);
}; // Size: 0x5C0

#endif
