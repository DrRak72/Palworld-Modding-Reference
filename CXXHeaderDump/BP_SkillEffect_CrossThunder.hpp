#ifndef UE4SS_SDK_BP_SkillEffect_CrossThunder_HPP
#define UE4SS_SDK_BP_SkillEffect_CrossThunder_HPP

class ABP_SkillEffect_CrossThunder_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    double LocationOffset;                                                            // 0x03C8 (size: 0x8)
    double YawOffset;                                                                 // 0x03D0 (size: 0x8)

    void ReceiveBeginPlay();
    void OnInitialize();
    void ExecuteUbergraph_BP_SkillEffect_CrossThunder(int32 EntryPoint);
}; // Size: 0x3D8

#endif
