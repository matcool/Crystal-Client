#pragma once

#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/CCKeyboardDispatcher.hpp>
#include <Geode/modify/CCLayerColor.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/modify/AchievementNotifier.hpp>
#include <Geode/modify/EditLevelLayer.hpp>
#include <Geode/modify/GameManager.hpp>
#include <Geode/modify/GameObject.hpp>
#include <Geode/modify/GameSoundManager.hpp>
#include <Geode/modify/GameLevelManager.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/modify/GJGameLevel.hpp>
#include <Geode/modify/HardStreak.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/modify/CCSprite.hpp>
#include <Geode/modify/CCScheduler.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/CCDirector.hpp>
#include <Geode/modify/UILayer.hpp>
#include <Geode/modify/ObjectToolbox.hpp>
#include <Geode/modify/LevelTools.hpp>
#include <Geode/modify/GJGameLevel.hpp>
#include <Geode/loader/Dirs.hpp>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono>
#include <numbers>
#include "HitboxNode.hpp"
#include "Amethyst.hpp"
#include <Geode/fmod/fmod.hpp>
#include <stdio.h>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "CrystalProfile.hpp"
#include "Shortcuts.hpp"
#include "CrystalClient.hpp"
#include "Icon.hpp"

#ifdef GEODE_IS_MACOS
#include <dirent.h>
#include <CoreGraphics/CoreGraphics.h>
#include <ImageIO/ImageIO.h>
#include <CoreServices/CoreServices.h>
#endif

using namespace Shortcuts;
using namespace Variables;
using namespace geode::cocos;