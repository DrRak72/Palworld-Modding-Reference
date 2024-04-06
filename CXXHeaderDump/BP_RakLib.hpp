#ifndef UE4SS_SDK_BP_RakLib_HPP
#define UE4SS_SDK_BP_RakLib_HPP

class ABP_RakLib_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool Initialized;                                                                 // 0x02A0 (size: 0x1)
    FKey NewVar;                                                                      // 0x02A8 (size: 0x18)

    void RakLibRegisterKeybind(FString KeyName, FString FunctionCallbackName);
    void CheckAdminByUID(FGuid PlayerUId, bool& Admin);
    void GetPlayerByUID(const FGuid& PlayerUId, class APalPlayerCharacter*& Player, bool& Success);
    bool GetInitialized();
    void CheckConcreteValidity(class UPalMapObjectConcreteModelBase* Concrete, bool& Valid, class UPalMapObjectItemContainerModule*& ContainerModule, class UPalItemContainer*& Container, TArray<class UPalItemSlot*>& SlotArray);
    void CheckModelValidity(const class UPalMapObjectModel*& Model, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
    void CheckActorValidity(const class APalMapObject*& Item, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
    void SetSigInfo(float Tick Interval);
    void RakLibRegisterNotify(FString ClassName, FString FunctionCallbackName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PrintToModLoader(FString Message);
    void ExecuteUbergraph_BP_RakLib(int32 EntryPoint);
}; // Size: 0x2C0

#endif
