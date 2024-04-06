#ifndef UE4SS_SDK_BP_CutsceneActor_Opening_HPP
#define UE4SS_SDK_BP_CutsceneActor_Opening_HPP

class ABP_CutsceneActor_Opening_C : public ABP_CutsceneActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0318 (size: 0x8)

    void OnPrePlayCutscene();
    void OnFinishedCutscene();
    void ExecuteUbergraph_BP_CutsceneActor_Opening(int32 EntryPoint);
}; // Size: 0x320

#endif
