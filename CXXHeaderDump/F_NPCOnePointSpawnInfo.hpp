#ifndef UE4SS_SDK_F_NPCOnePointSpawnInfo_HPP
#define UE4SS_SDK_F_NPCOnePointSpawnInfo_HPP

struct FF_NPCOnePointSpawnInfo
{
    FName NPCName_20_49D436044BDF9AB5328F69A3028EB5ED;                                // 0x0000 (size: 0x8)
    FName UniqueName_23_C5975EAD4D0039A24B86139AA5D04F66;                             // 0x0008 (size: 0x8)
    FTransform Transform_2_38D8D0144FC1C0FB041C08AFE43B4A56;                          // 0x0010 (size: 0x60)
    TSubclassOf<class ABP_NPCAIController_C> OverrideControllerClass_15_6CC42151411B4921090B749ADA0E063F; // 0x0070 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> OverrideDefaultActionClass_16_698E88C544CC5063FF6DE691F6BEA5E9; // 0x0078 (size: 0x8)
    int32 OverrideLevel_17_248ED7A04C24B868F231F38B18A56DF2;                          // 0x0080 (size: 0x4)
    FF_NPC_PathWalkArray PathWalk_25_B786601A4A4C791196C63BAC2D2772DF;                // 0x0088 (size: 0x10)

}; // Size: 0x98

#endif
