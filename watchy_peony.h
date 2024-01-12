#ifndef WATCHY_ORBITAL_H
#define WATCHY_ORBITAL_H

#include <Watchy.h>
#include "Font5x7FixedMono.h"

#define DEG2RAD 0.0174532925


class WatchyPeony : public Watchy{
    using Watchy::Watchy;
    public:
        WatchyPeony(const watchySettings& s) : Watchy(s) {}
        void drawWatchFace();
    private:
  };
#endif