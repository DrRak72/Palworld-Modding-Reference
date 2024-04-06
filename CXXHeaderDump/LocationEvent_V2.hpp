#ifndef UE4SS_SDK_LocationEvent_V2_HPP
#define UE4SS_SDK_LocationEvent_V2_HPP

struct FLocationEvent_V2
{
    FVector Vector1Position_29_53BB17B340F2F8CBDB00619E8ACA8A8F;                      // 0x0000 (size: 0x18)
    FVector Vector2Velocity_30_6147F7B84D206402EBDD6CAEC72CB864;                      // 0x0018 (size: 0x18)
    FVector Vector3Acceleration_31_1A2DB79F440455DC0602B5A462D5F37F;                  // 0x0030 (size: 0x18)
    FNiagaraID NiagaraIDParticleID_37_5946869544681B0D2B8C48BAD6380BBC;               // 0x0048 (size: 0x8)
    float Float1NormalizedAge_36_A3BB598447BD630CE9BE078C0CB3DCAC;                    // 0x0050 (size: 0x4)
    float Float2RandomNormalizedFloat_33_2CCDADFB4F6411E0CA2698A4EB43EB80;            // 0x0054 (size: 0x4)
    float Float3DistanceTraveled_34_782CD1B14231731F4BDF6C972AA68747;                 // 0x0058 (size: 0x4)
    FLinearColor LinearColorParticleColor_40_C9EA94794B2C8C8FCF8ABF80675AF2A6;        // 0x005C (size: 0x10)
    bool BooleanLocalSpace_46_A5DC22A74C34467D28031D80D664D64E;                       // 0x006C (size: 0x1)

}; // Size: 0x6D

#endif
