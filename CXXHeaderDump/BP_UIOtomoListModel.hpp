#ifndef UE4SS_SDK_BP_UIOtomoListModel_HPP
#define UE4SS_SDK_BP_UIOtomoListModel_HPP

class UBP_UIOtomoListModel_C : public UPalUIOtomoListModel
{

    int32 GetSlotCountInPage();
    void GetCurrentPageSlots(TArray<class UPalIndividualCharacterSlot*>& OutSlots);
}; // Size: 0x48

#endif
