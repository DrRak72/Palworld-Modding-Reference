#ifndef UE4SS_SDK_BP_FortressWall_HPP
#define UE4SS_SDK_BP_FortressWall_HPP

class ABP_FortressWall_C : public AActor
{
    class UStaticMeshComponent* SM_FortressWall;                                      // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool Patterned Texture?;                                                          // 0x02A0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A1

#endif