#ifndef UE4SS_SDK_BP_PalSphere_Debug_HPP
#define UE4SS_SDK_BP_PalSphere_Debug_HPP

class ABP_PalSphere_Debug_C : public ABP_PalSphere_C
{

    void GetCaptureLevel(int32& Level);
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
}; // Size: 0x570

#endif
