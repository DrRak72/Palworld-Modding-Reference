#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_HPP

class UWBP_WorkerRadialMenu_C : public UWBP_CommonRadialMenuBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A8 (size: 0x8)
    FName CameraModName;                                                              // 0x05B0 (size: 0x8)
    FWBP_WorkerRadialMenu_COnSelectedMenu OnSelectedMenu;                             // 0x05B8 (size: 0x10)
    void OnSelectedMenu(EPalWorkerRadialMenuResult Result);
    FDataTableRowHandle MsgID_ShowStatus;                                             // 0x05C8 (size: 0x10)
    FDataTableRowHandle MsgID_MoveToOtomo;                                            // 0x05D8 (size: 0x10)
    FDataTableRowHandle MsgID_MoveToBox;                                              // 0x05E8 (size: 0x10)
    FDataTableRowHandle MsgID_Feed;                                                   // 0x05F8 (size: 0x10)
    FDataTableRowHandle MsgID_Pet;                                                    // 0x0608 (size: 0x10)

    void OnSelectedMenu_Internal(int32 Index);
    void CreateContent(FText Text, class UWBP_WorkerRadialMenuContent_C*& createdWidget);
    void SetupContents();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnClosed();
    void ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint);
    void OnSelectedMenu__DelegateSignature(EPalWorkerRadialMenuResult Result);
}; // Size: 0x618

#endif
