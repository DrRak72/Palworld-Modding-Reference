#ifndef UE4SS_SDK_BP_House_B_HPP
#define UE4SS_SDK_BP_House_B_HPP

class ABP_House_B_C : public AActor
{
    class UStaticMeshComponent* SM_DoorBlock;                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_House02;                                           // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool Patterned Texture?;                                                          // 0x02A8 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A9

#endif
