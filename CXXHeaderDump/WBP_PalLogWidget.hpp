#ifndef UE4SS_SDK_WBP_PalLogWidget_HPP
#define UE4SS_SDK_WBP_PalLogWidget_HPP

class UWBP_PalLogWidget_C : public UPalLogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* CanvasPanel_22;                                               // 0x0418 (size: 0x8)
    class UBorder* ImportantBorder;                                                   // 0x0420 (size: 0x8)
    class UPalScrollBox* ScrollBox_NormalLog;                                         // 0x0428 (size: 0x8)
    class UVerticalBox* VerticalBox_DeathLog;                                         // 0x0430 (size: 0x8)
    class UBorder* VeryImportantBorder;                                               // 0x0438 (size: 0x8)
    TArray<class UPalLogWidgetBase*> NormalLogList;                                   // 0x0440 (size: 0x10)
    TArray<class UPalLogWidgetBase*> ImportantLogList;                                // 0x0450 (size: 0x10)
    double MoveTime;                                                                  // 0x0460 (size: 0x8)
    int32 MaxDisplayImportantLog;                                                     // 0x0468 (size: 0x4)
    FSoftObjectPath Icon Path;                                                        // 0x0470 (size: 0x20)
    TMap<class FGuid, class UPalLogWidgetBase*> veryImportantLogMap;                  // 0x0490 (size: 0x50)
    float Normal Log Display Time;                                                    // 0x04E0 (size: 0x4)
    float Important Log Display Time;                                                 // 0x04E4 (size: 0x4)
    FGuid nowDisplayVeryImportantLog;                                                 // 0x04E8 (size: 0x10)
    double veryImportantLogDisplayTime;                                               // 0x04F8 (size: 0x8)
    double veryImportantLogDisplayTimer;                                              // 0x0500 (size: 0x8)
    TArray<FGuid> veryImportantLogIDArray;                                            // 0x0508 (size: 0x10)
    TArray<class UWBP_Notice_Deathlog_C*> DeathLogList;                               // 0x0518 (size: 0x10)
    float Death Log Short Display Time;                                               // 0x0528 (size: 0x4)
    float Death Log Long Display Time;                                                // 0x052C (size: 0x4)
    TArray<class UWBP_Notice_Deathlog_C*> QueuedDeathLogList;                         // 0x0530 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FText& LogText, const TSoftObjectPtr<UTexture2D> Icon);
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    void UpdateDeathLog();
    void DisplayNextVeryImportantLog();
    void CheckVeryImportantLog(double DeltaTime);
    void OnAddedDeathLog(FText LogText, TSoftObjectPtr<UTexture2D> Icon);
    void OnRemovedVeryImportantLog(const FGuid& logId);
    void OnAddedVeryImportantLog(const FGuid& logId, const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void CreateLogWidget(TSubclassOf<class UPalLogWidgetBase> logWidgeClass, FText Text, FPalLogAdditionalData AdditionalData, class UPalLogWidgetBase*& createdWidget);
    void CheckImportantLog(bool& IsRemoved);
    void CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool& Removed);
    void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* relationSlot);
    void OnAddedImportantLog(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void On Added Normal Log(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint);
}; // Size: 0x540

#endif
