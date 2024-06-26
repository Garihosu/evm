
#ifndef EVM_H
#define EVM_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#include "evmdefs.h"

#define REG_AMOUNT 8
#define CODE_MAX 2048
#define DATA_STACK_MAX 0x800
#define RETURN_STACK_MAX 0x80

#define EVM_PUTC 0
#define EVM_GETC 1

EVMInstance* evmNew();

void evmStart(EVMInstance* e, size_t start);
void evmEnd(EVMInstance* e);

void evmLoadCode(EVMInstance* e, size_t start, uint8_t* code, size_t codeSize);

void evmCycle(EVMInstance* e);
void evmMonitor(EVMInstance* e);

void evmDataDump(EVMInstance* e);
void evmCodeDump(EVMInstance* e);

#endif
