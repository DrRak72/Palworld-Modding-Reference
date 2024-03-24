#ifndef UE4SS_SDK_WBP_PalHudInvader_HPP
#define UE4SS_SDK_WBP_PalHudInvader_HPP

class UWBP_PalHudInvader_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* MI_Icon;                                                            // 0x0410 (size: 0x8)

    void OnSetup();
    void ParentDestroyEvent(class AActor* DestroyedActor);
    void ParentDeadEvent(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_WBP_PalHudInvader(int32 EntryPoint);
}; // Size: 0x418

#endif
