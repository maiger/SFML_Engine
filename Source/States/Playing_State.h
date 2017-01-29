#ifndef PLAYING_STATE_H_INCLUDED
#define PLAYING_STATE_H_INCLUDED

#include "Game_State.h"

namespace State
{
    class Playing : public Game_State
    {
        public:
            Playing(Application& application);

            void input  () override;
            void update (float dt) override;
            void draw   () override;

        private:
    };
}

#endif // PLAYING_STATE_H_INCLUDED
