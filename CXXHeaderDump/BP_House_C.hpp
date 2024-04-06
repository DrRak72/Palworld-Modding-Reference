#ifndef UE4SS_SDK_BP_House_C_HPP
#define UE4SS_SDK_BP_House_C_HPP

class ABP_House_C_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_DoorBlock;                                         // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SM_House03;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    bool Patterned Texture?;                                                          // 0x02B0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2B1

#endif
