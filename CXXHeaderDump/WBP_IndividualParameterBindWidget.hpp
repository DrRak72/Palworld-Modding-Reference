#ifndef UE4SS_SDK_WBP_IndividualParameterBindWidget_HPP
#define UE4SS_SDK_WBP_IndividualParameterBindWidget_HPP

class UWBP_IndividualParameterBindWidget_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterHandle> bindedHandle;                       // 0x0410 (size: 0x30)
    bool IsBindHP;                                                                    // 0x0440 (size: 0x1)
    bool IsBindSP;                                                                    // 0x0441 (size: 0x1)
    bool IsBindHunger;                                                                // 0x0442 (size: 0x1)
    bool IsBindFoodAmount;                                                            // 0x0443 (size: 0x1)
    bool IsBindNickName;                                                              // 0x0444 (size: 0x1)
    bool IsBindSanity;                                                                // 0x0445 (size: 0x1)
    bool IsBindExp;                                                                   // 0x0446 (size: 0x1)
    bool IsBindLevel;                                                                 // 0x0447 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateHp OnUpdateHp;                        // 0x0448 (size: 0x10)
    void OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    FWBP_IndividualParameterBindWidget_COnUpdateSP OnUpdateSP;                        // 0x0458 (size: 0x10)
    void OnUpdateSP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool isOverHeated);
    FWBP_IndividualParameterBindWidget_COnUpdateHunger OnUpdateHunger;                // 0x0468 (size: 0x10)
    void OnUpdateHunger(double nowHunger, double nowMaxHunger);
    FWBP_IndividualParameterBindWidget_COnUpdateNickName OnUpdateNickName;            // 0x0478 (size: 0x10)
    void OnUpdateNickName(FString NewNickName);
    FWBP_IndividualParameterBindWidget_COnUpdateSanity OnUpdateSanity;                // 0x0488 (size: 0x10)
    void OnUpdateSanity(double nowSanity, double nowMaxSanity);
    FWBP_IndividualParameterBindWidget_COnUpdateExp OnUpdateExp;                      // 0x0498 (size: 0x10)
    void OnUpdateExp(int32 addExp, int32 oldExp, double nowExpRate);
    FWBP_IndividualParameterBindWidget_COnUpdateLevel OnUpdateLevel;                  // 0x04A8 (size: 0x10)
    void OnUpdateLevel(int32 NewLevel);
    bool isBindActiveSkill;                                                           // 0x04B8 (size: 0x1)
    bool isBindPassiveSkill;                                                          // 0x04B9 (size: 0x1)
    bool isBindMasteredSkills;                                                        // 0x04BA (size: 0x1)
    bool isBindElement;                                                               // 0x04BB (size: 0x1)
    bool isBindRank;                                                                  // 0x04BC (size: 0x1)
    bool isBindSoul;                                                                  // 0x04BD (size: 0x1)
    bool isBindWorkSuitability;                                                       // 0x04BE (size: 0x1)
    bool isBindCondition;                                                             // 0x04BF (size: 0x1)
    bool isBindBuff;                                                                  // 0x04C0 (size: 0x1)
    bool IsPlayerCharacter;                                                           // 0x04C1 (size: 0x1)
    bool ignoreAfterBindInitialize;                                                   // 0x04C2 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateCondition OnUpdateCondition;          // 0x04C8 (size: 0x10)
    void OnUpdateCondition();
    FWBP_IndividualParameterBindWidget_COnUpdateActiveSkill OnUpdateActiveSkill;      // 0x04D8 (size: 0x10)
    void OnUpdateActiveSkill(TArray<EPalWazaID>& ActiveSkills);
    bool isBindGender;                                                                // 0x04E8 (size: 0x1)
    bool isBindRarity;                                                                // 0x04E9 (size: 0x1)
    bool ShowLevelPenalty;                                                            // 0x04EA (size: 0x1)
    bool GetLevelPenalty;                                                             // 0x04EB (size: 0x1)
    TArray<EPalWazaID> TmpWazaArray;                                                  // 0x04F0 (size: 0x10)
    FWBP_IndividualParameterBindWidget_COnUpdateMasteredSkill OnUpdateMasteredSkill;  // 0x0500 (size: 0x10)
    void OnUpdateMasteredSkill(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    FWBP_IndividualParameterBindWidget_COnUpdateBuff OnUpdateBuff;                    // 0x0510 (size: 0x10)
    void OnUpdateBuff();
    FWBP_IndividualParameterBindWidget_COnUpdateSoulRank OnUpdateSoulRank;            // 0x0520 (size: 0x10)
    void OnUpdateSoulRank();
    bool IsBindStatusPoint;                                                           // 0x0530 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateStatusPoint OnUpdateStatusPoint;      // 0x0538 (size: 0x10)
    void OnUpdateStatusPoint();
    FPalInstanceID SyncId;                                                            // 0x0548 (size: 0x30)
    bool IsBindTalent;                                                                // 0x0578 (size: 0x1)
    FWBP_IndividualParameterBindWidget_COnUpdateTalent OnUpdateTalent;                // 0x0580 (size: 0x10)
    void OnUpdateTalent();
    FWBP_IndividualParameterBindWidget_COnUpdateWorkSuitabilityOption OnUpdateWorkSuitabilityOption; // 0x0590 (size: 0x10)
    void OnUpdateWorkSuitabilityOption(FPalWorkSuitabilityPreferenceInfo Info);

    void OnUpdateWorkSuitabilityOption_Internal(const FPalWorkSuitabilityPreferenceInfo& NewWorkSuitabilityOption);
    void SyncBind(FPalInstanceID InstanceId);
    void On Update Trainer Level Internal(int32 addLevel, int32 nowLevel);
    void OnUpdateStatusPoint_Internal();
    void OnUpdateSoulRank_Internal();
    void SetRarity(bool IsBoss, bool IsRare);
    void SetSoulRank(int32 Rank);
    void SetGender(EPalGenderType GenderType);
    void SetFoodAmount(int32 FoodAmount);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void OnUpdateBuff_Internal();
    void OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID);
    void OnUpdateWaza_Internal(EPalWazaID WazaID);
    void SetRank(int32 Rank);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void GetBindedHandle(class UPalIndividualCharacterHandle*& targetHandle);
    void On Update Level Internal(int32 addLevel, int32 nowLevel);
    void OnUpdateExp_Internal(int32 addExp, int32 nowExp);
    void OnCheckCondition_Internal();
    void OnUpdateSanity_Internal(float nowSanity, float oldSanity);
    void OnUpdateTalent_Internal();
    void OnUpdateNickName_Internal(FString NewNickName);
    void Unbind();
    void On Update Hunger Internal(float Current, float Last);
    void OnUpdateSP_Internal(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool isOverHeated);
    void OnUpdateHP_Internal(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UnbindEvent();
    void Bind Event(class UPalIndividualCharacterParameter* targetParam);
    void BindFromSlot(class UPalIndividualCharacterSlot* targetSlot);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void Destruct();
    void ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint);
    void OnUpdateWorkSuitabilityOption__DelegateSignature(FPalWorkSuitabilityPreferenceInfo Info);
    void OnUpdateTalent__DelegateSignature();
    void OnUpdateStatusPoint__DelegateSignature();
    void OnUpdateSoulRank__DelegateSignature();
    void OnUpdateBuff__DelegateSignature();
    void OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    void OnUpdateActiveSkill__DelegateSignature(TArray<EPalWazaID>& ActiveSkills);
    void OnUpdateCondition__DelegateSignature();
    void OnUpdateLevel__DelegateSignature(int32 NewLevel);
    void OnUpdateExp__DelegateSignature(int32 addExp, int32 oldExp, double nowExpRate);
    void OnUpdateSanity__DelegateSignature(double nowSanity, double nowMaxSanity);
    void OnUpdateNickName__DelegateSignature(FString NewNickName);
    void OnUpdateHunger__DelegateSignature(double nowHunger, double nowMaxHunger);
    void OnUpdateSP__DelegateSignature(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool isOverHeated);
    void OnUpdateHP__DelegateSignature(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
}; // Size: 0x5A0

#endif
