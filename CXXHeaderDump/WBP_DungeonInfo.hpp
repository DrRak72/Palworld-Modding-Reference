#ifndef UE4SS_SDK_WBP_DungeonInfo_HPP
#define UE4SS_SDK_WBP_DungeonInfo_HPP

class UWBP_DungeonInfo_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* BossExistsImage;                                                    // 0x0410 (size: 0x8)
    class UCanvasPanel* DungeonInfo;                                                  // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DungeonName;                                       // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0428 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x0430 (size: 0x8)
    FPalDungeonInfoParameter DungeonInfoParameter;                                    // 0x0438 (size: 0x28)
    FText DefaultDisappearText;                                                       // 0x0460 (size: 0x18)
    FGameDateTime DisappeatTimeAt;                                                    // 0x0478 (size: 0x8)

    void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void UpdateDungeonDisappearRemainTime();
    void SetDungeonDisappearTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetDungeonLevel(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void UpdateDisplayInfo(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetupEvents(class UPalStageModelDungeon* StageModel);
    void UpdateDungeonInfoByTick();
    void Setup By Stage Model(class UPalStageModelDungeon* InStageModel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DungeonInfo(int32 EntryPoint);
}; // Size: 0x480

#endif
