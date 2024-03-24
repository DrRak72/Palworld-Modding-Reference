#ifndef UE4SS_SDK_WBP_PlayerUI_HPP
#define UE4SS_SDK_WBP_PlayerUI_HPP

class UWBP_PlayerUI_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Highlight_ConstructionMenu_Loop;                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* Highlight_ConstructionMenu_InOut;                         // 0x0418 (size: 0x8)
    class UWidgetAnimation* Show_ConstructionMenu;                                    // 0x0420 (size: 0x8)
    class UWidgetAnimation* Hide_ConstructionMenu;                                    // 0x0428 (size: 0x8)
    class UWidgetAnimation* HideShow_Aim;                                             // 0x0430 (size: 0x8)
    class UWBP_BattleEntry_Info_C* WBP_BattleEntry_Info;                              // 0x0438 (size: 0x8)
    class UWBP_BossBattle_BattleInfo_C* WBP_BossBattle_BattleInfo;                    // 0x0440 (size: 0x8)
    class UWBP_Crime_C* WBP_Crime;                                                    // 0x0448 (size: 0x8)
    class UWBP_Ingame_Compass_C* WBP_Ingame_Compass;                                  // 0x0450 (size: 0x8)
    class UWBP_Ingame_PlayerStamina_Circle_C* WBP_Ingame_PlayerStamina_Circle;        // 0x0458 (size: 0x8)
    class UWBP_IngameDamageVinette_C* WBP_IngameDamageVinette;                        // 0x0460 (size: 0x8)
    class UWBP_IngameFlyEff_C* WBP_IngameFlyEff;                                      // 0x0468 (size: 0x8)
    class UWBP_IngamePlaceName_C* WBP_IngamePlaceName;                                // 0x0470 (size: 0x8)
    class UWBP_IngameSmesTop_C* WBP_IngameSmesTop;                                    // 0x0478 (size: 0x8)
    class UWBP_IngameThermometerEff_C* WBP_IngameThermometerEff;                      // 0x0480 (size: 0x8)
    class UWBP_OtomoLoupe_C* WBP_OtomoLoupe_77;                                       // 0x0488 (size: 0x8)
    class UWBP_PalAim_C* WBP_PalAim;                                                  // 0x0490 (size: 0x8)
    class UWBP_PalInfo_C* WBP_PalInfo;                                                // 0x0498 (size: 0x8)
    class UWBP_PalLogWidget_C* WBP_PalLogWidget;                                      // 0x04A0 (size: 0x8)
    class UWBP_PalLvExp_List_C* WBP_PalLvExp_List;                                    // 0x04A8 (size: 0x8)
    class UWBP_PalNPCHPGaugeCanvas_C* WBP_PalNPCHPGaugeCanvas;                        // 0x04B0 (size: 0x8)
    class UWBP_PalPlayerDebuffNoticeBox_C* WBP_PalPlayerDebuffNoticeBox;              // 0x04B8 (size: 0x8)
    class UWBP_PalSkill_KeyGuide_C* WBP_PalSkill_KeyGuide;                            // 0x04C0 (size: 0x8)
    class UWBP_PartnerSkillInfo_C* WBP_PartnerSkillInfo;                              // 0x04C8 (size: 0x8)
    class UWBP_PlayerSideInfo_Separated_C* WBP_PlayerSideInfo_Separated;              // 0x04D0 (size: 0x8)
    class UWBP_PLLvExp_C* WBP_PLLvExp;                                                // 0x04D8 (size: 0x8)
    class UWBP_QuestAndBaseCampInfoCanvas_C* WBP_QuestAndBaseCampInfoCanvas;          // 0x04E0 (size: 0x8)
    class UWBP_Reticle_Cancel_C* WBP_Reticle_Cancel;                                  // 0x04E8 (size: 0x8)
    class UWBP_TutorialMessage_Temp_C* WBP_TutorialMessage_Temp;                      // 0x04F0 (size: 0x8)
    class UWBP_WarningUI_C* WBP_WarningUI;                                            // 0x04F8 (size: 0x8)
    class UWBP_WeightNotice_C* WBP_WeightNotice;                                      // 0x0500 (size: 0x8)
    double hideUITimer;                                                               // 0x0508 (size: 0x8)
    double hideWeaponInfoTimer;                                                       // 0x0510 (size: 0x8)
    double hideUITime;                                                                // 0x0518 (size: 0x8)
    bool isWaitUIHide;                                                                // 0x0520 (size: 0x1)
    bool isConflictOld;                                                               // 0x0521 (size: 0x1)
    bool isOverHideTimer;                                                             // 0x0522 (size: 0x1)
    bool isHidePlayerGauge;                                                           // 0x0523 (size: 0x1)
    bool IsHideWeaponInfo;                                                            // 0x0524 (size: 0x1)
    bool IsAiming;                                                                    // 0x0525 (size: 0x1)
    double lowHealthPercent;                                                          // 0x0528 (size: 0x8)
    double lastHpPercent;                                                             // 0x0530 (size: 0x8)
    class UPalIndividualCharacterParameter* Player Individual Parameter;              // 0x0538 (size: 0x8)
    bool isPlayerHPMax;                                                               // 0x0540 (size: 0x1)
    bool isPlayerSPMax;                                                               // 0x0541 (size: 0x1)
    bool isPlayerShieldMax;                                                           // 0x0542 (size: 0x1)
    bool IsInitialized;                                                               // 0x0543 (size: 0x1)
    float mapMaskPaintSize;                                                           // 0x0544 (size: 0x4)
    TSoftObjectPtr<UPalIndividualCharacterHandle> LastActivatedOtomoHandle;           // 0x0548 (size: 0x30)
    bool IsSuspendEffectiveAttackLog;                                                 // 0x0578 (size: 0x1)
    FTimerHandle ResumeEffectiveAttackLogTimer;                                       // 0x0580 (size: 0x8)
    FVector2D StaminaGauge_MinPosRate;                                                // 0x0588 (size: 0x10)
    FVector2D StaminaGauge_MaxPosRate;                                                // 0x0598 (size: 0x10)
    bool bIsRadialMenuOpened;                                                         // 0x05A8 (size: 0x1)
    bool IsRiding;                                                                    // 0x05A9 (size: 0x1)
    bool IsRideCharacterSPMax;                                                        // 0x05AA (size: 0x1)
    EPalBodyTemperatureState CachedTemperatureBodyState;                              // 0x05AB (size: 0x1)
    double StaminaGaugeRightOffset;                                                   // 0x05B0 (size: 0x8)
    bool IsBuilding;                                                                  // 0x05B8 (size: 0x1)
    bool ShouldHightConstruction;                                                     // 0x05B9 (size: 0x1)
    int32 CachedLastSphereLoadoutIndex;                                               // 0x05BC (size: 0x4)
    float CachedPlayerHunger;                                                         // 0x05C0 (size: 0x4)
    FTimerHandle CheckOtomoHungerTimerHandle;                                         // 0x05C8 (size: 0x8)
    FTimerHandle CheckEquipmentDurabilityTimerHandle;                                 // 0x05D0 (size: 0x8)
    class APalCharacter* CurrentLiftingCampPalCharacter;                              // 0x05D8 (size: 0x8)

    void SetIsHideWeaponInfo(bool bHide);
    void CheckWeaponDurability();
    void CheckArmorDurability();
    void OnToggleSleepPlayerBed(bool IsSleep);
    void OnToggleGrapplingCancel(bool CancelEnable);
    void OnChangedWeapon(class APalWeaponBase* weapon);
    void OnTimer_CheckEquipmentDurability();
    void OnTimer_CheckOtomoHunger();
    void OnUpdateInventoryWeight(float nowWeight);
    void OnUpdateInventoryMaxWeight(float maxWeight);
    void UpdateAimVisibility();
    void OnEndBuilding(class UPalBuilderComponent* BuilderComponent);
    void OnStartBuilding(class UPalBuilderComponent* BuilderComponent);
    void OnCapturedPal(const FPalUIPalCaptureInfo& CaptureInfo);
    void OnChangedTemperanture(int32 NextTemperature);
    void OnChangedTemperatureBodyState(EPalBodyTemperatureState BodyState);
    void On Update Ride Character SP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool isOverHeated);
    void OnGetoffOtomo(class AActor* RideActor);
    void OnRideOtomo(class AActor* RideActor);
    void OnChangedRegion(const FName& RegionNameID);
    void OnRadialMenuClosed();
    void OnRadialMenuOpened();
    void UpdateStaminaGaugePosition();
    void PaintWorldMap();
    void InitializeWorldMapTexture();
    void OnResumeEffectiveLog();
    void OnOtomoInflictDamage(FPalDamageResult DamageResult);
    void OnPlayerDamage(FPalDamageResult DamageResult);
    void CheckAutoUIHide(double DeltaTime);
    void CalcCompassRotation();
    void OnActivatedOtomo();
    void OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void OnDeactivatedOtomo();
    void On Update Shield Max HP(FFixedPoint64 nowShieldMaxHP);
    void Setup After CreatePlayerIndividualParameter();
    void OnDamagedShield(int32 Damage, bool IsShieldBroken);
    void OnUpdateShieldHP(FFixedPoint64 nowShieldMaxHP, FFixedPoint64 nowShieldHP);
    void OnUpdatePlayerHunger(float Current, float Last);
    void OnUpdatePlayerHP_LowHealthEffect(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnUnlockedMap(const FName& unlockedRegionId, const int32 PlayerId);
    void On Change Loadout(EPalPlayerInventoryType inventoryType, int32 Index);
    void On Update Player SP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool isOverHeated);
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnChangeOtomo();
    void IsPalGaugeShouldShow(bool& isShow);
    void IsPlayerWeaponInfoShouldShow(bool& isShow);
    void Is Player Gauge Should Show(bool& isShow);
    void ResetHideUITimer();
    void Show UI();
    void Start Hide UITimer();
    void Should Check UIAuto Hide(bool& shouldCheck);
    void Finished_EE570CBA4C1A6B90D4B5E88E8D12910C();
    void Anm_Hide_Loadout();
    void Anm_Show_Loadout();
    void Anm_Hide_PlayerGauge();
    void Anm_Show_PlayerGauge();
    void Anm_Toggle_Highlight_Construction();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void OnStartAim();
    void OnEndAim();
    void OnUpdateOtomoInfo();
    void OnUpdateLoadout(EPalPlayerInventoryType NewParam2, int32 NewParam);
    void OnWeaponTrigger();
    void OnSetup_AfterCreatedPlayer();
    void OnInitialized();
    void OnStartCrime(FGuid CrimeInstance);
    void OnEndCrime(FGuid CrimeInstance);
    void OnReportCrime(class UPalIndividualCharacterHandle* CriminalHandle, const TArray<FName>& CrimeIds);
    void OnEndWanted(class UPalIndividualCharacterHandle* CriminalHandle);
    void ResetStartCrime();
    void Destruct();
    void OnLiftCampPal(class APalCharacter* TargetCharacter);
    void OnEndLiftCampPal();
    void ExecuteUbergraph_WBP_PlayerUI(int32 EntryPoint);
}; // Size: 0x5E0

#endif
