#pragma once

#include "../Includes.hpp"

#define colorConv(color, r, g, b) {\
            r = color[0];\
            g = color[1];\
            b = color[2];\
           }

#define fadeConv(color1, color2, r, g, b, cyc) {\
            r = (color1[0] * cyc) + (color2[0] * (1.0-cyc));\
            g = (color1[1] * cyc) + (color2[1] * (1.0-cyc));\
            b = (color1[2] * cyc) + (color2[2] * (1.0-cyc));\
           }

enum EffectType {
    None,
    Static,
    Rainbow,
    Fade
};

enum AffectedType {
    P1Color1,
    P1Color2,
    P1Glow,
    P1WaveTrail,
    P1RegularTrail,
    P2Color1,
    P2Color2,
    P2Glow,
    P2WaveTrail,
    P2RegularTrail
};

class Icon {
    public:
        static Icon* get();
        void update();
        cocos2d::_ccColor3B getEffectColor(EffectType effect, AffectedType affect);
        void HSVtoRGB(float& fR, float& fG, float& fB, float& fH, float& fS, float& fV);
        void fade(float first[4], float second[4]);
        void stat(float color[4]);
    
    protected:
        float cycle = 0;
        float R, G, B;
};