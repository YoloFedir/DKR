#include "Logger.h"

void check(Logger& logger, int L, int K){

    if (L<1||L>K){
       logger.log("Input error");
    }
}
