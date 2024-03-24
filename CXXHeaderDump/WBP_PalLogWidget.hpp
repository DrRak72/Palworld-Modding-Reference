#ifndef UE4SS_SDK_WBP_PalLogWidget_HPP
#define UE4SS_SDK_WBP_PalLogWidget_HPP

class UWBP_PalLogWidget_C : public UPalLogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* CanvasPanel_22;                                               // 0x0418 (size: 0x8)
    class UBorder* ImportantBorder;                                                   // 0x0420 (size: 0x8)
    class UPalScrollBox* ScrollBox_NormalLog;                                         // 0x0428 (size: 0x8)
    class UBorder* VeryImportantBorder;                                               // 0x0430 (size: 0x8)
    TArray<class UPalLogWidgetBase*> NormalLogList;                                   // 0x0438 (size: 0x10)
    TArray<class UPalLogWidgetBase*> ImportantLogList;                                // 0x0448 (size: 0x10)
    double MoveTime;                                                                  // 0x0458 (size: 0x8)
    int32 MaxDisplayImportantLog;                                                     // 0x0460 (size: 0x4)
    FSoftObjectPath Icon Path;                                                        // 0x0468 (size: 0x20)
    TMap<class FGuid, class UPalLogWidgetBase*> veryImportantLogMap;                  // 0x0488 (size: 0x50)
    float Normal Log Display Time;                                                    // 0x04D8 (size: 0x4)
    float Important Log Display Time;                                                 // 0x04DC (size: 0x4)
    FGuid nowDisplayVeryImportantLog;                                                 // 0x04E0 (size: 0x10)
    double veryImportantLogDisplayTime;                                               // 0x04F0 (size: 0x8)
    double veryImportantLogDisplayTimer;                                              // 0x04F8 (size: 0x8)
    TArray<FGuid> veryImportantLogIDArray;                                            // 0x0500 (size: 0x10)

    void DisplayNextVeryImportantLog();
    void CheckVeryImportantLog(double DeltaTime);
    void OnRemovedVeryImportantLog(const FGuid& logId);
    void OnAddedVeryImportantLog(const FGuid& logId, const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void CreateLogWidget(TSubclassOf<class UPalLogWidgetBase> logWidgeClass, FText Text, FPalLogAdditionalData AdditionalData, class UPalLogWidgetBase*& createdWidget);
    void CheckImportantLog(bool& isRemoved);
    void CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool& Removed);
    void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* relationSlot);
    void OnAddedImportantLog(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void On Added Normal Log(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint);
}; // Size: 0x510

#endif
