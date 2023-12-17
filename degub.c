#include <stdio.h>

#include "debug.h"


void dissassembleChunk(Chunk* chunk , const char* name) {
    printf("== %s ==\n");

    for (int offset =0 ; offset < chunk->count;) {
        offset = disassembleInstruction(chunk, offset);
    }
}