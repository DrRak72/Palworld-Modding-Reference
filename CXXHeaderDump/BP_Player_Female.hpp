#ifndef UE4SS_SDK_BP_Player_Female_HPP
#define UE4SS_SDK_BP_Player_Female_HPP

class ABP_Player_Female_C : public ABP_PlayerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B50 (size: 0x8)
    class UPalSkeletalMeshComponent* HairAttachAccessory;                             // 0x0B58 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0B60 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0B68 (size: 0x8)
    class UPalBodyTemperatureComponent* PalBodyTemperature;                           // 0x0B70 (size: 0x8)
    class UBP_GliderComponent_C* BP_GliderComponent;                                  // 0x0B78 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0B80 (size: 0x8)
    class UPalSkeletalMeshComponent* HairMesh;                                        // 0x0B88 (size: 0x8)
    class UPalSkeletalMeshComponent* HeadMesh;                                        // 0x0B90 (size: 0x8)
    class UBP_PalClimbingComponent_C* BP_PalClimbingComponent;                        // 0x0B98 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0BA0 (size: 0x8)
    class UBP_FluidImplementation_C* BP_FluidImplementation;                          // 0x0BA8 (size: 0x8)
    class UBP_PlayerSoundEmitterComponent_C* BP_PlayerSoundEmitterComponent;          // 0x0BB0 (size: 0x8)
    class UNiagaraComponent* SlidingParticle;                                         // 0x0BB8 (size: 0x8)
    bool UsePhysicalBone;                                                             // 0x0BC0 (size: 0x1)
    class UNiagaraSystem* SlidingSmokeNiagara;                                        // 0x0BC8 (size: 0x8)
    class UNiagaraSystem* JumpNiagara;                                                // 0x0BD0 (size: 0x8)
    FName SoundID_Sliding;                                                            // 0x0BD8 (size: 0x8)
    class ABP_Lamp_C* Lamp;                                                           // 0x0BE0 (size: 0x8)
    class UNiagaraSystem* SlidingSmokeNiagara_Snow;                                   // 0x0BE8 (size: 0x8)
    class UNiagaraSystem* JumpNiagara_Snow;                                           // 0x0BF0 (size: 0x8)
    class UBP_PalLocalPlayerSystemSound_C* LocalPlayerSound;                          // 0x0BF8 (size: 0x8)

    class USkeletalMeshComponent* GetHeadMesh();
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    class USkeletalMeshComponent* GetOverrideFaceMesh();
    void OnUpdateSliding();
    void OnSlidingEnd();
    void OnSlidingBegin();
    void CreatePoliceSpawner();
    void CreateLamp();
    void OnLoaded_CD204E62480922149D33F2914AD3807A(class UObject* Loaded);
    void OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4(class UObject* Loaded);
    void BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature(class UPalCharacterMovementComponent* Component, bool IsInSliding);
    void OnJumped();
    void ReceiveTick(float DeltaSeconds);
    void LoadAsyncAsset();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_Player_Female_BP_GliderComponent_K2Node_ComponentBoundEvent_1_OnStartGliding__DelegateSignature();
    void ReceiveBeginPlay();
    void OnInitialized(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_Player_Female(int32 EntryPoint);
}; // Size: 0xC00

#endif
