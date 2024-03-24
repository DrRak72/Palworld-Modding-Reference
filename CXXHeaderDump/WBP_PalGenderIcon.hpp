#ifndef UE4SS_SDK_WBP_PalGenderIcon_HPP
#define UE4SS_SDK_WBP_PalGenderIcon_HPP

class UWBP_PalGenderIcon_C : public UUserWidget
{
    class UImage* Image_Gender;                                                       // 0x0278 (size: 0x8)

    void Setup(EPalGenderType GenderType);
}; // Size: 0x280

#endif
