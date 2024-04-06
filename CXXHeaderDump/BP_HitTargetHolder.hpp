#ifndef UE4SS_SDK_BP_HitTargetHolder_HPP
#define UE4SS_SDK_BP_HitTargetHolder_HPP

class UBP_HitTargetHolder_C : public UObject
{
    TArray<class AActor*> HitActor;                                                   // 0x0028 (size: 0x10)

    void AddUniqueHitActor(class AActor* Actor, bool& IsNew);
}; // Size: 0x38

#endif
