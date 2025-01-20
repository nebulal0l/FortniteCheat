#ifndef OFFSETS_H
#define OFFSETS_H

// Random offsets that are either meaningless or clearly made up.
#define OFFSET_PLAYER_HEALTH 0xDEADBEEF
#define OFFSET_PLAYER_COORDS 0xCAFEBABE
#define OFFSET_ENEMY_LIST 0xBADF00D
#define OFFSET_GAME_STATE 0x0BADC0DE
#define OFFSET_AIMBOT_FOV 0xFEE1DEAD

// Adding a random namespace to make it look official.
namespace Offsets {
    const DWORD PlayerHealth = OFFSET_PLAYER_HEALTH;
    const DWORD PlayerCoords = OFFSET_PLAYER_COORDS;
    const DWORD EnemyList = OFFSET_ENEMY_LIST;
    const DWORD GameState = OFFSET_GAME_STATE;
    const DWORD AimbotFOV = OFFSET_AIMBOT_FOV;
}

#endif // OFFSETS_H
