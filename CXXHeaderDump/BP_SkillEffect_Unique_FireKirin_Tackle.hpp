#ifndef UE4SS_SDK_BP_SkillEffect_Unique_FireKirin_Tackle_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_FireKirin_Tackle_HPP

class ABP_SkillEffect_Unique_FireKirin_Tackle_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UBoxComponent* BoxCollision30;                                              // 0x03C8 (size: 0x8)
    class UBoxComponent* BoxCollision29;                                              // 0x03D0 (size: 0x8)
    class UBoxComponent* BoxCollision28;                                              // 0x03D8 (size: 0x8)
    class UBoxComponent* BoxCollision27;                                              // 0x03E0 (size: 0x8)
    class UBoxComponent* BoxCollision26;                                              // 0x03E8 (size: 0x8)
    class UBoxComponent* BoxCollision25;                                              // 0x03F0 (size: 0x8)
    class UBoxComponent* BoxCollision24;                                              // 0x03F8 (size: 0x8)
    class UBoxComponent* BoxCollision23;                                              // 0x0400 (size: 0x8)
    class UBoxComponent* BoxCollision22;                                              // 0x0408 (size: 0x8)
    class UBoxComponent* BoxCollision21;                                              // 0x0410 (size: 0x8)
    class UBoxComponent* BoxCollision20;                                              // 0x0418 (size: 0x8)
    class UBoxComponent* BoxCollision19;                                              // 0x0420 (size: 0x8)
    class UBoxComponent* BoxCollision18;                                              // 0x0428 (size: 0x8)
    class UBoxComponent* BoxCollision17;                                              // 0x0430 (size: 0x8)
    class UBoxComponent* BoxCollision16;                                              // 0x0438 (size: 0x8)
    class UBoxComponent* BoxCollision15;                                              // 0x0440 (size: 0x8)
    class UBoxComponent* BoxCollision14;                                              // 0x0448 (size: 0x8)
    class UBoxComponent* BoxCollision13;                                              // 0x0450 (size: 0x8)
    class UBoxComponent* BoxCollision12;                                              // 0x0458 (size: 0x8)
    class UBoxComponent* BoxCollision11;                                              // 0x0460 (size: 0x8)
    class UBoxComponent* BoxCollision10;                                              // 0x0468 (size: 0x8)
    class UBoxComponent* BoxCollision9;                                               // 0x0470 (size: 0x8)
    class UBoxComponent* BoxCollision8;                                               // 0x0478 (size: 0x8)
    class UBoxComponent* BoxCollision7;                                               // 0x0480 (size: 0x8)
    class UBoxComponent* BoxCollision6;                                               // 0x0488 (size: 0x8)
    class UBoxComponent* BoxCollision5;                                               // 0x0490 (size: 0x8)
    class UBoxComponent* BoxCollision4;                                               // 0x0498 (size: 0x8)
    class UBoxComponent* BoxCollision3;                                               // 0x04A0 (size: 0x8)
    class UBoxComponent* BoxCollision2;                                               // 0x04A8 (size: 0x8)
    class UBoxComponent* BoxCollision1;                                               // 0x04B0 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x04B8 (size: 0x8)
    TArray<class UBoxComponent*> BoxCollisions;                                       // 0x04C0 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x04D0 (size: 0x4)
    double BoxDistance;                                                               // 0x04D8 (size: 0x8)
    FVector BoxExtent;                                                                // 0x04E0 (size: 0x18)
    FVector PreBoxLocation;                                                           // 0x04F8 (size: 0x18)

    void GetCurrentDistance(double& Distance);
    void SetupBoxCollisions();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_FireKirin_Tackle(int32 EntryPoint);
}; // Size: 0x510

#endif
