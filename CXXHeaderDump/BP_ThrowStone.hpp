#ifndef UE4SS_SDK_BP_ThrowStone_HPP
#define UE4SS_SDK_BP_ThrowStone_HPP

class ABP_ThrowStone_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UStaticMeshComponent* SM_Stone2;                                            // 0x0560 (size: 0x8)

    FName GetEquipSocketName();
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ThrowStone(int32 EntryPoint);
}; // Size: 0x568

#endif
