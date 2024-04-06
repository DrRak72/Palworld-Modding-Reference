#ifndef UE4SS_SDK_BP_EasyGuildInserter_HPP
#define UE4SS_SDK_BP_EasyGuildInserter_HPP

class ABP_EasyGuildInserter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    FLinearColor GuildColor;                                                          // 0x02A8 (size: 0x10)
    FString GuildName;                                                                // 0x02B8 (size: 0x10)

    void GetConvertedColor(FLinearColor& ColorForMakeData);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_EasyGuildInserter_Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_EasyGuildInserter(int32 EntryPoint);
}; // Size: 0x2C8

#endif
