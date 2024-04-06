#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_Separated_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_Separated_HPP

class UWBP_Ingame_PlayerGauge_Separated_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_HP_Gauge_Default;                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_HP_Gauge_Low;                                         // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Weapon_Broken;                                        // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Weapon_Default;                                       // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_ShowHideRight;                                        // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_ShowHideLeft;                                         // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_UseBullet;                                            // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Anm_Damage;                                               // 0x02B8 (size: 0x8)
    class UWidgetAnimation* Anm_HPGaugeFlare_Yellow;                                  // 0x02C0 (size: 0x8)
    class UWidgetAnimation* Anm_HPGaugeFlare_Blue;                                    // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Anm_ShieldGaugeFlare_Color_Yellow;                        // 0x02D0 (size: 0x8)
    class UWidgetAnimation* Anm_ShieldGaugeFlare_Color_Blue;                          // 0x02D8 (size: 0x8)
    class UCanvasPanel* Canvas_Shield;                                                // 0x02E0 (size: 0x8)
    class UCanvasPanel* Canvas_WeaponInfo;                                            // 0x02E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_GrapplingGun_Cool;                                // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_BallChangeKeyGuide;                           // 0x02F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_BallChangeKeyGuide_1;                         // 0x0300 (size: 0x8)
    class UHorizontalBox* HorizontalBox_SphereNum;                                    // 0x0308 (size: 0x8)
    class UImage* Icon_Weapon;                                                        // 0x0310 (size: 0x8)
    class UImage* Image_Infinity;                                                     // 0x0318 (size: 0x8)
    class UImage* Image_Sphere;                                                       // 0x0320 (size: 0x8)
    class UProgressBar* ProgressBar_CoolProgress;                                     // 0x0328 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x0330 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Back;                                     // 0x0338 (size: 0x8)
    class UProgressBar* ProgressBar_ShieldGauge;                                      // 0x0340 (size: 0x8)
    class UProgressBar* ProgressBar_ShieldGauge_Back;                                 // 0x0348 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CoolTimerNum;                                      // 0x0350 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxBulletNum;                                      // 0x0358 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x0360 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowBulletNum;                                      // 0x0368 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x0370 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SphereName;                                        // 0x0378 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SphereNum_1;                                       // 0x0380 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SphereNum_10;                                      // 0x0388 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SphereNum_100;                                     // 0x0390 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SphereNum_Plus;                                    // 0x0398 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WeaponName;                                        // 0x03A0 (size: 0x8)
    class UVerticalBox* VerticalBox_BulletNum;                                        // 0x03A8 (size: 0x8)
    class UWBP_Ingame_PalHPGauge_C* WBP_Ingame_PalHPGauge;                            // 0x03B0 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_KeyGuide_C* WBP_Ingame_PlayerGauge_KeyGuide_PalInstruct; // 0x03B8 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_KeyGuide_C* WBP_Ingame_PlayerGauge_KeyGuide_SummonPal; // 0x03C0 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_KeyGuide_C* WBP_Ingame_PlayerGauge_KeyGuide_ThrowSphere; // 0x03C8 (size: 0x8)
    class UWBP_Ingame_PlayerGauge_ThworObjectNone_C* WBP_Ingame_PlayerGauge_PalSphereNone; // 0x03D0 (size: 0x8)
    class UWBP_Ingame_Thermometer_C* WBP_Ingame_Thermometer;                          // 0x03D8 (size: 0x8)
    class UWBP_Ingame_TimeZone_C* WBP_Ingame_TimeZone;                                // 0x03E0 (size: 0x8)
    class UWBP_IngameHungerGauge_C* WBP_IngameHungerGauge;                            // 0x03E8 (size: 0x8)
    class UWBP_IngameStatusPoint_C* WBP_IngameStatusPoint;                            // 0x03F0 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallAiming; // 0x03F8 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1; // 0x0400 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallStatic; // 0x0408 (size: 0x8)
    class UWBP_StatusBuffTimerContainer_C* WBP_StatusBuffTimerContainer;              // 0x0410 (size: 0x8)
    class UPalUIDelayGaugeCalculator* HpDelayGauge;                                   // 0x0418 (size: 0x8)
    class UPalUIDelayGaugeCalculator* ShieldDelayGauge;                               // 0x0420 (size: 0x8)
    TSoftObjectPtr<APalWeaponBase> nowHasWeapon;                                      // 0x0428 (size: 0x30)
    int32 lasMaxBulletNum;                                                            // 0x0458 (size: 0x4)
    int32 lastNowBulletNum;                                                           // 0x045C (size: 0x4)
    int32 SavedMagazineSize;                                                          // 0x0460 (size: 0x4)
    class UMaterialInstanceDynamic* bulletGaugeMaterial;                              // 0x0468 (size: 0x8)
    FFixedPoint64 lastShield;                                                         // 0x0470 (size: 0x8)
    bool IsRiding;                                                                    // 0x0478 (size: 0x1)
    FName CachedLastEquipBallID;                                                      // 0x047C (size: 0x8)
    TMap<class FPalDataTableRowName_ItemData, class TSoftObjectPtr<UTexture2D>> BallIconMap; // 0x0488 (size: 0x50)
    FTimerHandle HideBallnameTimerHandle;                                             // 0x04D8 (size: 0x8)
    bool IsOverBallNameHideTimer;                                                     // 0x04E0 (size: 0x1)
    bool IsAiming;                                                                    // 0x04E1 (size: 0x1)
    bool HasSpecialWeapon;                                                            // 0x04E2 (size: 0x1)
    bool IsNothingBall;                                                               // 0x04E3 (size: 0x1)
    bool IsFirstUpdateHP;                                                             // 0x04E4 (size: 0x1)
    class UPalItemSlot* CurrentGrenadeSlot;                                           // 0x04E8 (size: 0x8)
    double NoPalSphereNoticeDIsplayTime;                                              // 0x04F0 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_1(float RemainingTime, float CoolDownTime);
    void CREATEDELEGATE_PROXYFUNCTION_0(float RemainingTime, float CoolDownTime);
    void SetEnableFirstSummonPalGuide(bool IsEnableFlag);
    void SetWeaponNameText(class APalWeaponBase* WeaponBase);
    void OnGrapplingGunCoolStateUpdate(bool StartCool);
    void OnGrapplingGunCoolTimerUpdate(double Timer, double CoolTime);
    void SetUsableHandFlag(bool IsLeftHandUsable, bool IsRightHandUsable);
    void SetBallNum(int32 Num);
    void HideBallName();
    void SetBallDetail(FName BallItemID, int32 DisplayNum);
    void Set Player Hunger(double HungerRate);
    void SetVisibilityShield(bool IsVisible);
    void OnUpdateGrenadeLoadoutSlot(class UPalItemSlot* Slot);
    void OnUpdateBallLoadoutSlot(class UPalItemSlot* Slot);
    void RegisterBallLoadoutEvent(class UPalItemSlot* itemSlot);
    void IsRideCharacterSPFull();
    void ChangeNoRideMode();
    void ChangeRideMode(class AActor* Actor);
    void OnEndShieldGaugeDelay();
    void OnStartShieldGaugeDelay();
    void OnEndHPGaugeDelay();
    void OnStartHPGaugeDelay();
    void Setup Delay Gauge();
    void IsPalThrowWeapon(class APalWeaponBase* WeaponBase, bool& IsPalThrowWeapon);
    void IsSpecialWeapon(class APalWeaponBase* WeaponBase, bool& isSpecial);
    void IsDummyWeapon(class APalWeaponBase* WeaponBase, bool& IsDummy);
    void Is Require Bullet(class APalWeaponBase* WeaponActor, bool& IsRequire);
    void TryUpdateMaxBullet();
    void UpdatePalInfo(class UPalIndividualCharacterSlot* targetSlot);
    void IsInfinityWeapon(FName weaponName, bool& isInfinity);
    void HideBulletInfo();
    void HideAllWeaponInfo();
    void ChangePalThrowDetail();
    void Change Normal Weapon Detail(bool IsGrenade);
    void Change Infinity Weapon Detail(class APalWeaponBase* WeaponBase);
    void Update Weapon Icon(class APalWeaponBase* WeaponBase);
    void OnReloadWeapon(int32 bulletsNum);
    void CalcMaxBulletNum(int32& maxBulletNum);
    void UpdateMaxBulletNum(int32 maxBulletNum);
    void Update Now Bullet Num(int32 nowBulletNum);
    void SetupBulletGauge(int32 MagazineSize);
    void Setup Bullet Info(class APalWeaponBase* WeaponBase);
    void BindWeaponEvent(class APalWeaponBase* WeaponBase);
    void Unbind Last Equiped Weapon Event();
    void Update Weapon(class APalWeaponBase* WeaponBase);
    void UpdateShield(FFixedPoint64 maxShield, FFixedPoint64 nowShield);
    void UpdateSP(FFixedPoint64 nowSP, FFixedPoint64 MaxSP, bool isOverHeated);
    void Update HP(FFixedPoint64 nowHP, FFixedPoint64 MaxHP);
    void AnmEvent_UseBullet();
    void AnmEvent_ShowHideLeft(bool Hide);
    void AnmEvent_ShowHideRight(bool Hide);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void AnmEvent_TriggerDamage();
    void ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated(int32 EntryPoint);
}; // Size: 0x4F8

#endif
