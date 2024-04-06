#ifndef UE4SS_SDK_BP_ThrowObject_FragGrenade_NPC_HPP
#define UE4SS_SDK_BP_ThrowObject_FragGrenade_NPC_HPP

class ABP_ThrowObject_FragGrenade_NPC_C : public ABP_ThrowObject_FragGrenade_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UNiagaraComponent* NS_SkillSign02;                                          // 0x03B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ThrowObject_FragGrenade_NPC(int32 EntryPoint);
}; // Size: 0x3B8

#endif
