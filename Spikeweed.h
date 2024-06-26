#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>
#include "definitions.h"

namespace izombie
{
    class Spikeweed
    {
    public:
        Spikeweed(GameDataRef data);

        void DrawSpikeweeds();

        void Spawn();
        void Move(float dt);

        std::vector<sf::Sprite> GetSpikeweedSprites();
    private:
        GameDataRef _data;
        std::vector<sf::Sprite> spikeweeds;
        sf::Clock _totalTime;
    };
}
