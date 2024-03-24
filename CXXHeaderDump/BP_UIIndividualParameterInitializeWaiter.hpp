#ifndef UE4SS_SDK_BP_UIIndividualParameterInitializeWaiter_HPP
#define UE4SS_SDK_BP_UIIndividualParameterInitializeWaiter_HPP

class UBP_UIIndividualParameterInitializeWaiter_C : public UObject
{
    class APalCharacter* RegisteredCharacter;                                         // 0x0028 (size: 0x8)
    FBP_UIIndividualParameterInitializeWaiter_COnComplete OnComplete;                 // 0x0030 (size: 0x10)
    void OnComplete(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
    FTimerHandle CheckIndividualParameterTimerHandle;                                 // 0x0040 (size: 0x8)

    void CheckIndividual();
    void OnCompleteInitiaize(class APalCharacter* Character);
    void Register(class APalCharacter* TargetCharacter);
    void OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
}; // Size: 0x48

#endif
