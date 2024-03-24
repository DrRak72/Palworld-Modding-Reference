#ifndef UE4SS_SDK_WBP_MapFilter_Win_HPP
#define UE4SS_SDK_WBP_MapFilter_Win_HPP

class UWBP_MapFilter_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content;                            // 0x0280 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_1;                          // 0x0288 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_2;                          // 0x0290 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_3;                          // 0x0298 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_4;                          // 0x02A0 (size: 0x8)
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_5;                          // 0x02A8 (size: 0x8)
    TArray<class UWBP_MapFilter_Content_C*> Filters;                                  // 0x02B0 (size: 0x10)
    TMap<class EPalLocationType, class FDataTableRowHandle> FilterMsgMap;             // 0x02C0 (size: 0x50)
    FWBP_MapFilter_Win_COnFilterChanged OnFilterChanged;                              // 0x0310 (size: 0x10)
    void OnFilterChanged(EPalLocationType FilterMap, bool isEnable);

    void Construct();
    void ChangeFilter(EPalLocationType LocationType, bool isEnable);
    void ForceFTEnable(bool isEnable);
    void ExecuteUbergraph_WBP_MapFilter_Win(int32 EntryPoint);
    void OnFilterChanged__DelegateSignature(EPalLocationType FilterMap, bool isEnable);
}; // Size: 0x320

#endif
