#ifndef UE4SS_SDK_WBP_ConvertItemStatusIndicator_HPP
#define UE4SS_SDK_WBP_ConvertItemStatusIndicator_HPP

class UWBP_ConvertItemStatusIndicator_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWBP_PalCraftInfo_C* WBP_PalCraftInfo;                                      // 0x0410 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0418 (size: 0x1)
    bool isValidRecipe;                                                               // 0x0419 (size: 0x1)
    double displayDetailRange;                                                        // 0x0420 (size: 0x8)
    FTimerHandle LocationCheckTimerHandle;                                            // 0x0428 (size: 0x8)
    bool IsFirstSetup;                                                                // 0x0430 (size: 0x1)
    class UPalMapObjectConvertItemModel* Model;                                       // 0x0438 (size: 0x8)

    void OnUpdatedWorkerPal(class UPalWorkBase* Work);
    void CloseDetail();
    void DisplayDetail();
    void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress);
    void OnUpdateProductSlot(class UPalItemSlot* Slot);
    void UpdateProductNum(class UPalMapObjectConvertItemModel* Model);
    void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
    void Initialize();
    void OnSetup();
    void Construct();
    void CheckLocationEvent();
    void Destruct();
    void ExecuteUbergraph_WBP_ConvertItemStatusIndicator(int32 EntryPoint);
}; // Size: 0x440

#endif
