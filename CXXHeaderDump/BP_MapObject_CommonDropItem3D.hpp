#ifndef UE4SS_SDK_BP_MapObject_CommonDropItem3D_HPP
#define UE4SS_SDK_BP_MapObject_CommonDropItem3D_HPP

class ABP_MapObject_CommonDropItem3D_C : public APalMapObjectDropItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03C0 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03C8 (size: 0x8)
    double ReleasePower;                                                              // 0x03D0 (size: 0x8)
    double ObtainDelayTime;                                                           // 0x03D8 (size: 0x8)
    bool bObtainableByProgress;                                                       // 0x03E0 (size: 0x1)
    double CurrentLinearDamping;                                                      // 0x03E8 (size: 0x8)
    double LinearDownSpeed;                                                           // 0x03F0 (size: 0x8)
    double DefaultLinearDamping;                                                      // 0x03F8 (size: 0x8)
    TSubclassOf<class AActor> VisualActorClass;                                       // 0x0400 (size: 0x8)

    void OnRep_VisualActorClass();
    void ReleaseObject(FVector Direction);
    void SetupStaticMesh(class UStaticMesh* InStaticMesh, FVector CenterOfMass, class UMaterialInterface* Material);
    void SetupVisualInServer(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnLoaded_857256B349A5E9E377896489F9AD883E(UClass* Loaded);
    void ReceiveBeginPlay();
    void SetItemModelInServer(TSoftClassPtr<AActor> VisualModel);
    void BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_MapObject_CommonDropItem3D(int32 EntryPoint);
}; // Size: 0x408

#endif
