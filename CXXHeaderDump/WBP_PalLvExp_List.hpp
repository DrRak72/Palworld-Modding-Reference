#ifndef UE4SS_SDK_WBP_PalLvExp_List_HPP
#define UE4SS_SDK_WBP_PalLvExp_List_HPP

class UWBP_PalLvExp_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0280 (size: 0x8)
    class UWBP_PalLvExp_C* WBP_PalLvExp_0;                                            // 0x0288 (size: 0x8)
    class UWBP_PalLvExp_C* WBP_PalLvExp_1;                                            // 0x0290 (size: 0x8)
    class UWBP_PalLvExp_C* WBP_PalLvExp_2;                                            // 0x0298 (size: 0x8)
    class UWBP_PalLvExp_C* WBP_PalLvExp_3;                                            // 0x02A0 (size: 0x8)
    class UWBP_PalLvExp_C* WBP_PalLvExp_4;                                            // 0x02A8 (size: 0x8)
    TArray<class UWBP_PalLvExp_C*> ChildList;                                         // 0x02B0 (size: 0x10)

    void Setup();
    void Anm_Open_All();
    void Anm_Open(int32 Index);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLvExp_List(int32 EntryPoint);
}; // Size: 0x2C0

#endif
