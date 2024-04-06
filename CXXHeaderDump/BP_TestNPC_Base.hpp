#ifndef UE4SS_SDK_BP_TestNPC_Base_HPP
#define UE4SS_SDK_BP_TestNPC_Base_HPP

class ABP_TestNPC_Base_C : public APalCharacter
{
    class UAnimSequence* PlayAnimation;                                               // 0x0910 (size: 0x8)

    void SetPlayAnimation(class UAnimSequence* AnimSequence);
}; // Size: 0x918

#endif
