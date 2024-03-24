#ifndef UE4SS_SDK_WBP_Buildup_Gauge_HPP
#define UE4SS_SDK_WBP_Buildup_Gauge_HPP

class UWBP_Buildup_Gauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Fill;                                                               // 0x0280 (size: 0x8)
    class UImage* Select;                                                             // 0x0288 (size: 0x8)

    void SetFill(bool IsFill);
    void SetSelect();
    void ExecuteUbergraph_WBP_Buildup_Gauge(int32 EntryPoint);
}; // Size: 0x290

#endif
