#ifndef UE4SS_SDK_BP_Palmi_HPP
#define UE4SS_SDK_BP_Palmi_HPP

class ABP_Palmi_C : public ABP_PlayerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B50 (size: 0x8)
    class UStaticMeshComponent* GliderCube;                                           // 0x0B58 (size: 0x8)
    class UBP_PalClimbingComponent_C* BP_PalClimbingComponent;                        // 0x0B60 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0B68 (size: 0x8)
    class UBP_FluidImplementation_C* BP_FluidImplementation;                          // 0x0B70 (size: 0x8)
    class UNiagaraComponent* GlidingEffect;                                           // 0x0B78 (size: 0x8)
    class UBP_PlayerSoundEmitterComponent_C* BP_PlayerSoundEmitterComponent;          // 0x0B80 (size: 0x8)
    class UStaticMeshComponent* Backpack;                                             // 0x0B88 (size: 0x8)
    class USkeletalMeshComponent* HairSkeletalMesh;                                   // 0x0B90 (size: 0x8)
    class USkeletalMeshComponent* HeadSkeletalMesh;                                   // 0x0B98 (size: 0x8)
    class USkeletalMeshComponent* EagleMesh;                                          // 0x0BA0 (size: 0x8)
    class UNiagaraComponent* SlidingParticle;                                         // 0x0BA8 (size: 0x8)
    bool UsePhysicalBone;                                                             // 0x0BB0 (size: 0x1)
    class UNiagaraSystem* SlidingSmokeNiagara;                                        // 0x0BB8 (size: 0x8)
    class UNiagaraSystem* JumpNiagara;                                                // 0x0BC0 (size: 0x8)
    double GliderItemSPRate;                                                          // 0x0BC8 (size: 0x8)
    double DefaultGravityScale;                                                       // 0x0BD0 (size: 0x8)
    double GliderItemGravityRate;                                                     // 0x0BD8 (size: 0x8)
    FName SoundID_Sliding;                                                            // 0x0BE0 (size: 0x8)

    void OnUpdateSliding();
    void OnSlidingEnd();
    void OnSlidingBegin();
    void CreatePoliceSpawner();
    void StopSound_GliderGliding();
    void PlaySound_GliderEnd();
    void PlaySound_GliderGliding();
    void PlaySound_GliderStart();
    void CreateLamp();
    void HasEagle(bool& HasEagle);
    void OnLoaded_A360914747F314ED08960198D794D75A(class UObject* Loaded);
    void OnLoaded_EC24973A4B14E982DB99289E63FBB28B(class UObject* Loaded);
    void ReceiveBeginPlay();
    void OnStartGliding();
    void OnEndGliding();
    void BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature(class UPalCharacterMovementComponent* Component, bool IsInSliding);
    void OnJumped();
    void ReceiveTick(float DeltaSeconds);
    void LoadAsyncAsset();
    void ExecuteUbergraph_BP_Palmi(int32 EntryPoint);
}; // Size: 0xBE8

#endif
