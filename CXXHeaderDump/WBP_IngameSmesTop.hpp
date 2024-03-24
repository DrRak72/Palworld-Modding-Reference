#ifndef UE4SS_SDK_WBP_IngameSmesTop_HPP
#define UE4SS_SDK_WBP_IngameSmesTop_HPP

class UWBP_IngameSmesTop_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Lower;                                          // 0x0580 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Lower;                                           // 0x0588 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Upper;                                          // 0x0590 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Upper;                                           // 0x0598 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_Smes_01;                                 // 0x05A0 (size: 0x8)
    class UCanvasPanel* Canvas_Lower;                                                 // 0x05A8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Upper;                                            // 0x05B0 (size: 0x8)
    class UCanvasPanel* PlayerLVUP;                                                   // 0x05B8 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x05C0 (size: 0x8)
    double levelUpDisplayTime;                                                        // 0x05C8 (size: 0x8)
    double openDelayTime;                                                             // 0x05D0 (size: 0x8)
    FDataTableRowHandle TechnologyTextHandle;                                         // 0x05D8 (size: 0x10)
    bool IsLevelUpAnimePlaying;                                                       // 0x05E8 (size: 0x1)
    bool isOpened;                                                                    // 0x05E9 (size: 0x1)

    void OnPlayerLevelUp(int32 DisplayLevel);
    void OnUpdateTechnologyPoint(int32 TechnologyPoint);
    void Setup();
    void PlayUnlockedMap(FName regionId);
    void Finished_A1B7BD03455E913C4335A7BF7BD61956();
    void Finished_5BC595C649AA650883AA559F46C6DEC4();
    void Finished_1CC36CF5434F95CC47067C9022BCAAAA();
    void Finished_619BCE1746569C3505CAB3B66FD0832F();
    void AnmEvent_Levelup();
    void AnmEvent_UpdateTechnologyPoint();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameSmesTop(int32 EntryPoint);
}; // Size: 0x5EA

#endif
