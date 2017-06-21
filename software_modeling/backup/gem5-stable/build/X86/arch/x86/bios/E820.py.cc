#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_E820[] = {
    120,156,173,83,77,111,211,64,16,157,117,190,83,14,37,18,
    28,56,249,132,82,36,226,42,162,81,168,16,162,149,122,40,
    82,1,57,5,65,46,150,99,79,99,183,89,59,218,93,164,
    132,107,248,223,48,51,105,210,20,129,196,161,78,60,154,121,
    187,158,125,243,102,54,129,219,167,66,239,59,31,192,190,39,
    39,165,191,130,25,192,37,123,30,204,20,104,15,198,30,168,
    180,2,232,193,149,130,180,10,63,1,86,0,223,198,21,72,
    107,27,180,190,69,171,144,54,96,212,109,82,186,252,23,61,
    93,69,158,99,243,98,237,182,200,140,114,253,113,114,141,137,
    115,143,40,250,58,28,156,13,251,135,103,133,51,203,100,151,
    216,41,19,187,32,7,1,198,138,233,17,23,98,200,71,19,
    175,42,96,13,174,235,64,228,136,214,138,144,134,32,77,38,
    70,148,24,105,9,210,102,82,43,250,112,15,194,53,183,208,
    35,99,31,175,79,63,31,157,28,31,111,41,216,39,132,198,
    38,201,130,197,112,16,76,242,210,6,72,107,189,44,203,153,
    152,125,206,203,105,106,208,90,191,188,242,93,134,254,4,167,
    121,81,228,197,116,3,24,2,202,194,241,33,135,167,182,195,
    159,229,63,240,254,170,192,110,57,255,3,238,178,36,142,57,
    70,81,17,107,140,34,215,150,64,151,233,247,25,135,213,219,
    239,68,202,100,177,136,146,89,108,173,236,226,40,195,56,69,
    227,106,20,126,138,77,172,101,255,9,17,22,135,153,203,214,
    11,212,165,89,142,136,150,224,204,207,213,201,249,124,94,184,
    193,43,217,98,226,98,138,17,31,213,229,202,239,140,125,77,
    38,200,74,141,193,13,106,141,6,251,193,20,245,145,152,151,
    214,197,147,25,6,214,36,193,125,25,89,226,222,124,41,218,
    31,112,26,46,181,174,228,231,117,84,71,237,142,195,37,39,
    217,142,131,183,25,135,131,255,25,7,110,117,131,91,205,149,
    133,251,127,107,181,164,255,119,171,237,51,62,135,198,33,71,
    235,95,149,70,26,196,107,190,20,183,158,33,201,206,58,135,
    44,92,216,96,195,11,110,143,204,23,26,239,210,72,7,164,
    96,215,184,203,248,176,114,114,125,125,78,211,220,145,243,67,
    183,182,185,109,250,168,55,103,26,86,228,165,104,123,253,66,
    181,185,10,146,228,65,105,201,8,191,89,15,237,91,190,51,
    150,69,106,171,125,239,105,235,55,211,91,245,55,
};

EmbeddedPython embedded_m5_objects_E820(
    "m5/objects/E820.py",
    "/home/kemmere2/gem5/gem5-stable/src/arch/x86/bios/E820.py",
    "m5.objects.E820",
    data_m5_objects_E820,
    541,
    1151);

} // anonymous namespace