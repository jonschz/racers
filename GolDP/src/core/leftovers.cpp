#include "decomp.h"
#include "stdio.h"

// Destructor invocation for g_fontImgFile, not detected
// // LIBRARY: GOLDP 0x100043c0
// void FUN_100043c0()
// {
// 	STUB(0x100043c0);
// }


// // Destructor invocation for g_tileImgFile, not detected
// // LIBRARY: GOLDP 0x10004fc0
// void FUN_10004fc0()
// {
// 	STUB(0x10004fc0);
// }


// // Destructor invocation for g_uploadImgFile, not detected
// // LIBRARY: GOLDP 0x10015b60
// void FUN_10015b60()
// {
// 	STUB(0x10015b60);
// }


// // Destructor invocation for g_palettedTexture, not detected
// // LIBRARY: GOLDP 0x1001de40
// void FUN_1001de40()
// {
// 	STUB(0x1001de40);
// }


// // Destructor invocation for g_textureBmpFile, not detected
// // LIBRARY: GOLDP 0x1001f190
// void FUN_1001f190()
// {
// 	STUB(0x1001f190);
// }

// // Destructor invocation for , not detected

// // Destructor invocation for g_textureTgaFile, not detected
// // LIBRARY: GOLDP 0x1001f1c0
// void FUN_1001f1c0()
// {
// 	STUB(0x1001f1c0);
// }

// no recomp symbol
// LIBRARY: GOLDP 0x1004cb79


// 1004f6ec in recomp, no symbol
// // LIBRARY: GOLDP 0x1004b09d

// 1004f7c7 in recomp, no symbol
// // LIBRARY: GOLDP 0x1004b178

// no recomp symbol
// // LIBRARY: GOLDP 0x1004b784

// no recomp symbol
// // LIBRARY: GOLDP 0x1004b7d2

// 10051bda in recomp, without label
// // LIBRARY: GOLDP 0x1004c80b

// 10051d8d in recomp, without label
// // LIBRARY: GOLDP 0x1004c9be

// 10051f32 in recomp, without label
// // LIBRARY: GOLDP 0x1004cb63

// 10051fc3 in recomp, without symbol
// // LIBRARY: GOLDP 0x1004cbf4

// no recomp symbol
// // LIBRARY: GOLDP 0x1004db61

// no recomp symbol
// // LIBRARY: GOLDP 0x1004db96

// no recomp symbol
// // LIBRARY: GOLDP 0x1004dbc7

// no recomp symbol
// // LIBRARY: GOLDP 0x1004dbff

// no recomp symbol
// // LIBRARY: GOLDP 0x1004dc0c

// no recomp symbol
// // LIBRARY: GOLDP 0x1004dc1c

// 10052090 in recomp, without symbol
// // LIBRARY: GOLDP 0x1004ccc1


// 10052108 in recomp, without label
// // LIBRARY: GOLDP 0x1004cd39

// 100529d7 in recomp, no symbol
// // LIBRARY: GOLDP 0x1004df3c

// no symbol
// // LIBRARY: GOLDP 0x1004e053

// no recomp symbol
// // LIBRARY: GOLDP 0x1004e331

// no recomp symbol
// // LIBRARY: GOLDP 0x1004e3e8

// no recomp symbol
// // LIBRARY: GOLDP 0x1004f5f0

// no recomp symbol
// // LIBRARY: GOLDP 0x1004fd83

// no recomp symbol
// // LIBRARY: GOLDP 0x1005320d

// no recomp symbol
// // LIBRARY: GOLDP 0x10053257

// no recomp symbol
// // LIBRARY: GOLDP 0x1005328a

// no recomp symbol
// // LIBRARY: GOLDP 0x100532b3

// no recomp symbol
// // LIBRARY: GOLDP 0x100539cb












// unclear, looks like float math
// LIBRARY: GOLDP 0x1004b970
//

// unclear if independent
// LIBRARY: GOLDP 0x1004b984
//

// possibly hand-written assembly. Uses instructions not found in recomp (e.g. FPATAN (d9 f3))
// LIBRARY: GOLDP 0x1004b98d
//

// longer if statements, looks like compiled C++
// LIBRARY: GOLDP 0x1004ca68
//

// hard to tell
// LIBRARY: GOLDP 0x1004e586
//

// hard to tell
// LIBRARY: GOLDP 0x1004e6d4
//

// hard to tell
// LIBRARY: GOLDP 0x1004e6df
//

// lots of boolean operations
// LIBRARY: GOLDP 0x1004e818
//

// no idea, probably hand-written assembly (unusual instructions), calls weird functions below
// LIBRARY: GOLDP 0x1004eacb
//

// where did Ghidra get the label from?
// TODO
// // LIBRARY: GOLDP 0x1004ece2
// __set_errno

// hard to tell
// LIBRARY: GOLDP 0x1004ed0a
//

// hard to tell, calls the previous fn, probably hand-written assembly (unusual instructions)
// LIBRARY: GOLDP 0x1004ed33
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004edf4
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004ee02
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004ee11
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004ee34
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004ee90
//

// likely hand-written assembly. Not sure if this is a continuation of the previous function, nothing points to it
// LIBRARY: GOLDP 0x1004eef7
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004ef83
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004ef8d
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004ef94
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004ef9b
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004efa2
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004efcd
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004eff7
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004f036
//

// likely hand-written assembly. Function boundaries unclear
// LIBRARY: GOLDP 0x1004f053
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f060
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f077
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f0c0
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f0d5
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f0ec
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f105
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f148
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f15e
//

// likely hand-written assembly
// LIBRARY: GOLDP 0x1004f16b
//

// likely hand-written assembly; function boundaries unclear
// LIBRARY: GOLDP 0x1004f195
//



// longer if statements, looks like compiled C++, called from C++-like code in function 0x1004ca68
// LIBRARY: GOLDP 0x10050530
//

// probably part of 0x10050530
// LIBRARY: GOLDP 0x10050574
//

// probably part of 0x10050530
// LIBRARY: GOLDP 0x1005057a
//


// --- BEGIN all misdetections that are part of _memmove ---

// probably part of _memmove
// LIBRARY: GOLDP 0x10050624
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050645
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050659
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050680
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050699
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050706
//

// probably part of _memmove
// LIBRARY: GOLDP 0x10050720
//

// LIBRARY: GOLDP 0x1005072c
//

// LIBRARY: GOLDP 0x1005073d
//

// LIBRARY: GOLDP 0x10050758
//

// LIBRARY: GOLDP 0x100507ac
//

// LIBRARY: GOLDP 0x100507d5
//

// LIBRARY: GOLDP 0x10050800
//

// LIBRARY: GOLDP 0x10050831
//

// LIBRARY: GOLDP 0x1005089e
//

// LIBRARY: GOLDP 0x100508b8
//

// LIBRARY: GOLDP 0x100508c5
//


// LIBRARY: GOLDP 0x100508dc
//

// --- END parts of memmove ---


// called from _realloc, hard to pin down since _realloc mismatches
// LIBRARY: GOLDP 0x10051bb4
//


// likely part of $CRT_C_INITIALIZER
// LIBRARY: GOLDP 0x10051d72
//

// --- BEGIN part of memcpy ---
// LIBRARY: GOLDP 0x10052a54
//

// LIBRARY: GOLDP 0x10052a75
//

// LIBRARY: GOLDP 0x10052a89
//

// LIBRARY: GOLDP 0x10052ab0
//

// LIBRARY: GOLDP 0x10052ac9
//

// LIBRARY: GOLDP 0x10052b36
//

// LIBRARY: GOLDP 0x10052b50
//

// LIBRARY: GOLDP 0x10052b5c
//

// LIBRARY: GOLDP 0x10052b6d
//

// LIBRARY: GOLDP 0x10052b88
//

// LIBRARY: GOLDP 0x10052bdc
//

// LIBRARY: GOLDP 0x10052c05
//

// LIBRARY: GOLDP 0x10052c30
//

// LIBRARY: GOLDP 0x10052c61
//

// LIBRARY: GOLDP 0x10052cce
//

// LIBRARY: GOLDP 0x10052ce8
//

// LIBRARY: GOLDP 0x10052cf5
//

// LIBRARY: GOLDP 0x10052d0c
//

// --- END part of memcpy ---

// just `return 0;` called from the next fn
// LIBRARY: GOLDP 0x10052d25
//

// called from hand-written assembly, possibly also hand-written
// LIBRARY: GOLDP 0x10052d28
//

// likely hand-written assembly (funny: 8 consecutive `push eax` instructions)
// LIBRARY: GOLDP 0x10052f50
//

// likely hand-written assembly (funny: 8 consecutive `push eax` instructions)
// LIBRARY: GOLDP 0x10052f90
//

// called from _strtol, no recomp symbol
// // LIBRARY: GOLDP 0x1005346b

// called from _strchr, no recomp symbol
// LIBRARY: GOLDP 0x10053670
//

// part of previous fn
// LIBRARY: GOLDP 0x10053675
//

// called from CRT_C_INITIALIZER, no symbol
// LIBRARY: GOLDP 0x10053b13

// called indirectly CRT_C_INITIALIZER, likely no symbol
// LIBRARY: GOLDP 0x10053b1c
//

// Unsure, isn't referenced, can't identify easily
// LIBRARY: GOLDP 0x100549c0
//
