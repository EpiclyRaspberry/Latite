#include "pch.h"
#include "LevelRendererPlayer.h"
#include "sdk/signature/storage.h"
#include "sdk/Util.h"
#include "util/LMath.h"

Vec3& SDK::LevelRendererPlayer::getOrigin() {
    if (SDK::internalVers == SDK::V1_18_12) return util::directAccess<Vec3>(this, 0x504);
    return util::directAccess<Vec3>(this, Signatures::Offset::LevelRendererPlayer_origin.result);
}

float& SDK::LevelRendererPlayer::getFovX() {
    if (SDK::internalVers >= SDK::V1_20_50) return util::directAccess<float>(this, 0xDC0);
    if (SDK::internalVers == SDK::V1_18_12) return util::directAccess<float>(this, 0x1418);
    if (SDK::internalVers >= SDK::V1_20_30) return util::directAccess<float>(this, 0xDB8);
        return util::directAccess<float>(this, Signatures::Offset::LevelRendererPlayer_fovX.result);
}

float& SDK::LevelRendererPlayer::getFovY() {
    if (SDK::internalVers >= SDK::V1_20_50) return util::directAccess<float>(this, 0xDD4);
    if (SDK::internalVers == SDK::V1_18_12) return util::directAccess<float>(this, 0x142C);
    if (SDK::internalVers >= SDK::V1_20_30) return util::directAccess<float>(this, 0xDCC);
    return util::directAccess<float>(this, Signatures::Offset::LevelRendererPlayer_fovX.result + 20);
}
