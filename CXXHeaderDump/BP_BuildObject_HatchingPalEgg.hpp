#ifndef UE4SS_SDK_BP_BuildObject_HatchingPalEgg_HPP
#define UE4SS_SDK_BP_BuildObject_HatchingPalEgg_HPP

class ABP_BuildObject_HatchingPalEgg_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UPalMapObjectHatchingEggParameterComponent* PalMapObjectHatchingEggParameter; // 0x0588 (size: 0x8)
    class UBP_TemperatureComponent_C* BP_TemperatureComponent;                        // 0x0590 (size: 0x8)
    class UChildActorComponent* PalEggChildActor;                                     // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_EggHatchingMachine;                                // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)
    class UPalMapObjectHatchingEggModel* HatchingEggModel;                            // 0x05C8 (size: 0x8)
    class UNiagaraComponent* PalGetEffect;                                            // 0x05D0 (size: 0x8)
    FVector PalGetEffectOffset;                                                       // 0x05D8 (size: 0x18)
    TSubclassOf<class AActor> EggActorClass;                                          // 0x05F0 (size: 0x8)

    void GetHatchingTemperature(int32& Temperature);
    void OnRep_EggActorClass();
    void GetTemperatureDiff(int32& diff);
    void ResetHatchingSpeed();
    void UpdateHatchingSpeed();
    void GetCurrentTemperature(int32& CurrentTemperature);
    void SpawnGetPalEffect();
    void SetEggAnimPlayState(bool IsPlay);
    void SetupItemForeach(class UPalItemSlot* Slot, int32 Index);
    void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
    void OnUpdateItemContainer(class UPalItemContainer* Container);
    void OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(UClass* Loaded);
    void OnAvailable_BlueprintImpl();
    void LoadEggMeshModel(TSoftClassPtr<AActor> EggActorClass);
    void OnStartTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void OnEndTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void On Change Temperature(int32 NextTemperature);
    void OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model);
    void OnUpdateWorkable(bool Workable);
    void ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint);
}; // Size: 0x5F8

#endif
