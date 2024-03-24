#ifndef UE4SS_SDK_BP_MapObjectPlayerBedModel_HPP
#define UE4SS_SDK_BP_MapObjectPlayerBedModel_HPP

class UBP_MapObjectPlayerBedModel_C : public UPalMapObjectPlayerBedModel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    TSubclassOf<class UPalActionBase> SleepActionClass;                               // 0x0250 (size: 0x8)
    class AActor* PrevViewTarget;                                                     // 0x0258 (size: 0x8)
    class AActor* SleepPlayer;                                                        // 0x0260 (size: 0x8)
    class ABP_PlayerBedCamera_C* Camera;                                              // 0x0268 (size: 0x8)
    float CameraBeginBlendTime;                                                       // 0x0270 (size: 0x4)
    float CameraEndBlendTime;                                                         // 0x0274 (size: 0x4)

    bool IsSleepingInteractor(class APalCharacter* Character);
    void BP_OnTriggerInteract_SleepPlayerBed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void Setup(FVector FixPos, FRotator BedRotate);
    void PutPlayerToSleep(class UPalIndividualCharacterHandle* CharacterHandle);
    void OnBeginSleep(class AActor* Other);
    void ExecuteUbergraph_BP_MapObjectPlayerBedModel(int32 EntryPoint);
}; // Size: 0x278

#endif
