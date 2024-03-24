#ifndef UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP
#define UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP

class UWBP_PalSkill_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_1;                                  // 0x0280 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_2;                                  // 0x0288 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_3;                                  // 0x0290 (size: 0x8)
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_Aim;                                // 0x0298 (size: 0x8)
    TArray<class UWBP_PalSkillEntry_C*> SkillEntryArray;                              // 0x02A0 (size: 0x10)
    class UPalShooterComponent* CurrentShooter;                                       // 0x02B0 (size: 0x8)
    FDataTableRowHandle ShootMsgID;                                                   // 0x02B8 (size: 0x10)
    FDataTableRowHandle FlyMsgID;                                                     // 0x02C8 (size: 0x10)
    class UPalIndividualCharacterParameter* Individual Parameter;                     // 0x02D8 (size: 0x8)
    TMap<int32, UPalActiveSkill*> CurrentSkillMap;                                    // 0x02E0 (size: 0x50)

    void Hide();
    void OnGetOff(class AActor* RideActor);
    void OnRide(class AActor* RideActor);
    void Setup();
    void OnInitialized();
    void StartAim();
    void EndAim();
    void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint);
}; // Size: 0x330

#endif
