/*
 * Copyright (c) 2015, Nick Brown
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef BASICTOKENS_H_
#define BASICTOKENS_H_

#define LET_TOKEN 0x00
#define STOP_TOKEN 0x01
#define OR_TOKEN 0x02
#define AND_TOKEN 0x03
#define EQ_TOKEN 0x04
#define NEQ_TOKEN 0x05
#define LT_TOKEN 0x06
#define GT_TOKEN 0x07
#define LEQ_TOKEN 0x08
#define GEQ_TOKEN 0x09
#define ADD_TOKEN 0x0A
#define SUB_TOKEN 0x0B
#define MUL_TOKEN 0x0C
#define DIV_TOKEN 0x0D
#define MOD_TOKEN 0x0E
#define IDENTIFIER_TOKEN 0x0F
#define REAL_TOKEN 0x10
#define STRING_TOKEN 0x11
#define INTEGER_TOKEN 0x12
#define IF_TOKEN 0x13
#define FOR_TOKEN 0x14
#define GOTO_TOKEN 0x15
#define ARRAYACCESS_TOKEN 0x16
#define ARRAYSET_TOKEN 0x17
#define IFELSE_TOKEN 0x18
#define POW_TOKEN 0x19
#define RETURN_TOKEN 0x1A
#define FNCALL_TOKEN 0x1B
#define RETURN_EXP_TOKEN 0x1C
#define BOOLEAN_TOKEN 0x1D
#define LETNOALIAS_TOKEN 0x1E
#define NONE_TOKEN 0x1F
#define IS_TOKEN 0x20
#define ARRAY_TOKEN 0x21
#define NOT_TOKEN 0x22
#define NATIVE_TOKEN 0x23
#define FN_ADDR_TOKEN 0x24
#define FNCALL_BY_VAR_TOKEN 0x25

#define ERR_STR_ONLYTEST_EQ 0x00
#define ERR_NONE_ONLYTEST_EQ 0x01
#define ERR_ONLY_ADDITION_STR 0x02
#define ERR_TOO_MANY_ARR_INDEX 0x03
#define ERR_NEG_ARR_INDEX 0x04
#define ERR_ARR_INDEX_EXCEED_SIZE 0x05
#define ERR_ONLY_DISPLAY_STR_WITH_INPUT 0x06
#define ERR_OUT_OF_SHARED_HEAP_MEM 0x07
#define ERR_OUT_OF_CORE_SHARED_HEAP_MEM 0x08
#define ERR_OUT_OF_SHARED_STACK_MEM 0x09
#define ERR_OUT_OF_CORE_SHARED_STACK_MEM 0x0A
#define ERR_ONLY_SEND_INT_AND_REAL 0x0B
#define ERR_SEND_TO_UNKNOWN_CORE 0x0C
#define ERR_SEND_TO_INACTIVE_CORE 0x0D
#define ERR_RECV_FROM_UNKNOWN_CORE 0x0E
#define ERR_RECV_FROM_INACTIVE_CORE 0x0F
#define ERR_SENDRECV_WITH_UNKNOWN_CORE 0x10
#define ERR_FREE_ON_NON_HEAP 0x11
#define ERR_INCORRECT_NUM_NATIVE_PARAMS 0x12
#define ERR_UNKNOWN_NATIVE_COMMAND 0x13
#define ERR_FNCALL_VAR_NOT_CONTAINING_FN_PTR 0x14
#define ERR_PROBE_NOT_SUPPORTED 0x15
#define ERR_NBSEND_NOT_SUPPORTED 0x16

#define NATIVE_FN_RTL_ISHOST 0x00
#define NATIVE_FN_RTL_ISDEVICE 0x01
#define NATIVE_FN_RTL_PRINT 0x02
#define NATIVE_FN_RTL_NUMDIMS 0x03
#define NATIVE_FN_RTL_DSIZE 0x04
#define NATIVE_FN_RTL_INPUT 0x05
#define NATIVE_FN_RTL_INPUTPRINT 0x06
#define NATIVE_FN_RTL_SYNC 0x07
#define NATIVE_FN_RTL_GC 0x08
#define NATIVE_FN_RTL_FREE 0x09
#define NATIVE_FN_RTL_SEND 0x0A
#define NATIVE_FN_RTL_RECV 0x0B
#define NATIVE_FN_RTL_SENDRECV 0x0C
#define NATIVE_FN_RTL_BCAST 0x0D
#define NATIVE_FN_RTL_NUMCORES 0x0E
#define NATIVE_FN_RTL_COREID 0x0F
#define NATIVE_FN_RTL_REDUCE 0x11
#define NATIVE_FN_RTL_ALLOCARRAY 0x12
#define NATIVE_FN_RTL_ALLOCSHAREDARRAY 0x13
#define NATIVE_FN_RTL_MATH 0x14
#define NATIVE_FN_RTL_PROBE_FOR_MESSAGE 0x15
#define NATIVE_FN_RTL_TEST_FOR_SEND 0x16
#define NATIVE_FN_RTL_WAIT_FOR_SEND 0x17
#define NATIVE_FN_RTL_SEND_NB 0x18

#endif /* BASICTOKENS_H_ */
