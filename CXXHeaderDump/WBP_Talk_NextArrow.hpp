#ifndef UE4SS_SDK_WBP_Talk_NextArrow_HPP
#define UE4SS_SDK_WBP_Talk_NextArrow_HPP

class UWBP_Talk_NextArrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0280 (size: 0x8)
    class UImage* Image_30;                                                           // 0x0288 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Talk_NextArrow(int32 EntryPoint);
}; // Size: 0x290

#endif
