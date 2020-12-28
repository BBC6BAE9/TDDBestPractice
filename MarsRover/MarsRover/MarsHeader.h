//
//  MarsHeader.h
//  MarsRover
//
//  Created by huang on 2020/12/27.
//

#ifndef MarsHeader_h
#define MarsHeader_h

typedef enum DIREDRTION {
    DIREDRTION_N  = 0, // 北
    DIREDRTION_E, // 东
    DIREDRTION_S, // 南
    DIREDRTION_W // 西
} DIREDRTION;

typedef struct{
    int x;
    int y;
} Position;

typedef struct{
    Position position;
    DIREDRTION direction;
} SpatialInfo;

#endif /* MarsHeader_h */
