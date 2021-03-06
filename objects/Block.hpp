#ifndef _BLOCK_
#define _BLOCK_

#include <tamtypes.h>
#include <engine.hpp>
#include "../include/contants.hpp"

/** Block 3D object class  */
class Block
{
public:
    Mesh mesh;
    bool isHidden = true;
    int blockType;
    int xIndex = 0;
    int yIndex = 0;
    int zIndex = 0;

    Block();
    ~Block();
    void init(int block_type, float X, float Y, float Z);
    bool shouldBeDrawn();
private:
};

#endif
