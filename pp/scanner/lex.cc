// Generated by Flexc++ V2.07.07 on Wed, 12 Feb 2020 16:19:50 +0100

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

// $insert class_ih
#include "scanner.ih"


    // s_ranges_: use (unsigned) characters as index to obtain
    //           that character's range-number.
    //           The range for EOF is defined in a constant in the
    //           class header file
size_t const ScannerBase::s_ranges_[] =
{
     0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
     3, 3, 3, 3, 3, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 9,10,10,10,10,11,12,12,
    12,12,12,12,12,12,12,12,13,13,14,15,16,17,17,18,18,18,18,18,18,18,18,18,18,
    18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,19,20,21,21,22,23,24,24,25,
    26,27,28,29,29,30,31,31,32,33,34,35,35,35,35,36,37,38,39,39,39,39,39,40,40,
    40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
    40,40,40,40,40,40,
};

// $insert startcondinfo
    // s_dfa_ contains the rows of *all* DFAs ordered by start state.  The
    // enum class StartCondition_is defined in the baseclass header.
    // StartCondition_::INITIAL is always 0.  Each entry defines the row to
    // transit to if the column's character range was sensed. Row numbers are
    // relative to the used DFA, and d_dfaBase_ is set to the first row of
    // the subset to use.  The row's final two values are respectively the
    // rule that may be matched at this state, and the rule's FINAL flag. If
    // the final value equals FINAL (= 1) then, if there's no continuation,
    // the rule is matched. If the BOL flag (8) is also set (so FINAL + BOL (=
    // 9) is set) then the rule only matches when d_atBOL is also true.
int const ScannerBase::s_dfa_[][44] =
{
    // INITIAL
    { 1, 2, 3, 1, 2, 1, 4, 5, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 7, 1,
          1, 1, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
          1, 8,    -1, -1},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    29, -1},  // 1
    {-1, 2,-1,-1, 2,-1,-1, 9,-1,-1,-1,10,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     1, -1},  // 2
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     3, -1},  // 3
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     8, -1},  // 4
    {11,-1,-1,11,-1,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,13,14,11,11,15,11,11,11,11,11,11,11,16,11,
         11,-1,    29, 20},  // 5
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,17,-1,18,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    29, -1},  // 6
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 7,-1,-1,-1,-1,-1, 7,-1,
         -1,-1, 7,-1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
         -1,-1,    14, -1},  // 7
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    30, -1},  // 8
    {11,-1,-1,11,-1,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,13,14,11,11,15,11,11,11,11,11,11,11,16,11,
         11,-1,    -1, 20},  // 9
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,18,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, -1},  // 10
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 11
    {12,19,-1,12,19,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
         12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
         12,-1,    -1,  0},  // 12
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,20,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 13
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,21,11,22,11,11,11,11,11,
         11,-1,    -1, 20},  // 14
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,23,11,11,11,11,11,24,11,11,11,11,11,
         11,-1,    -1, 20},  // 15
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,25,11,11,11,11,11,
         11,-1,    -1, 20},  // 16
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     4, -1},  // 17
    {18,18,-1,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,
         18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,
         18,-1,     2, -1},  // 18
    {19,19,-1,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,
         19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,
         19,-1,    -1,  0},  // 19
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,26,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 20
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,27,11,11,11,
         11,-1,    -1, 20},  // 21
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,28,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 22
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,29,11,11,11,11,11,11,11,30,11,11,11,11,11,
         11,-1,    -1, 20},  // 23
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,31,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 24
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,32,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 25
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,33,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 26
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,34,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 27
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,35,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 28
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,36,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 29
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,37,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 30
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,38,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 31
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,39,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 32
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,40,11,11,11,11,11,
         11,-1,    -1, 20},  // 33
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 18},  // 34
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,41,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 35
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,42,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 36
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,43,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 37
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,44,11,
         11,-1,    -1, 20},  // 38
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,45,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 39
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,46,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 40
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 19},  // 41
    {11,47,-1,11,47,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 42
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,48,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 43
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,49,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 44
    {11,50,-1,11,50,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 45
    {11,51,-1,11,51,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 46
    {-1,47,-1,-1,47,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,52,-1,
         -1,-1,52,-1,52,52,52,52,52,52,52,52,52,52,52,52,52,52,52,52,
         -1,-1,    -1, -1},  // 47
    {11,53,-1,11,53,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 48
    {11,-1,-1,11,-1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,54,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 49
    {-1,50,-1,-1,50,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,55,-1,
         -1,-1,55,-1,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
         -1,-1,    -1, -1},  // 50
    {-1,51,-1,-1,51,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,56,-1,
         -1,-1,56,-1,56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,
         -1,-1,    -1, -1},  // 51
    {-1,57,-1,-1,57,-1,-1,-1,-1,-1,-1,-1,52,-1,-1,-1,-1,-1,52,-1,
         -1,-1,52,-1,52,52,52,52,52,52,52,52,52,52,52,52,52,52,52,52,
         -1,-1,    -1, 15},  // 52
    {-1,53,-1,-1,53,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,58,-1,
         -1,-1,58,-1,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
         -1,-1,    -1, -1},  // 53
    {11,59,-1,11,59,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
         11,-1,    -1, 20},  // 54
    {-1,60,-1,-1,60,-1,-1,-1,-1,-1,-1,-1,55,-1,-1,-1,-1,-1,55,-1,
         -1,-1,55,-1,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,
         -1,-1,    -1, 17},  // 55
    {-1,61,-1,-1,61,-1,-1,-1,-1,-1,-1,-1,56,-1,-1,-1,-1,-1,56,-1,
         -1,-1,56,-1,56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,
         -1,-1,    -1, 23},  // 56
    {-1,57,-1,-1,57,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, 15},  // 57
    {-1,62,-1,-1,62,-1,-1,-1,-1,-1,-1,-1,58,-1,-1,-1,-1,-1,58,-1,
         -1,-1,58,-1,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
         -1,-1,    -1, 16},  // 58
    {-1,59,-1,-1,59,-1,63,-1,-1,-1,-1,-1,-1,-1,64,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, -1},  // 59
    {-1,60,-1,-1,60,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, 17},  // 60
    {-1,61,-1,-1,61,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, 23},  // 61
    {-1,62,-1,-1,62,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, 16},  // 62
    {65,65,-1,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,-1,    -1, -1},  // 63
    {66,66,-1,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
         66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
         66,-1,    -1, -1},  // 64
    {65,65,-1,65,65,65,67,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,-1,    -1, -1},  // 65
    {66,66,-1,66,66,66,66,66,66,66,66,66,66,66,66,66,68,66,66,66,
         66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
         66,-1,    -1, -1},  // 66
    {65,65,-1,65,65,65,67,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,
         65,-1,    -1, 21},  // 67
    {66,66,-1,66,66,66,66,66,66,66,66,66,66,66,66,66,68,66,66,66,
         66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
         66,-1,    -1, 22},  // 68
    // string
    { 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1,-1,    -1, -1},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    11, -1},  // 1
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    13, -1},  // 2
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     9, -1},  // 3
    { 5, 5, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
          5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
          5,-1,    11, -1},  // 4
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    10, -1},  // 5
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    12, -1},  // 6
    // comment
    { 1, 1, 2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1,-1,    -1, -1},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     6, -1},  // 1
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     7, -1},  // 2
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 4,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     6, -1},  // 3
    {-1, 4,-1,-1, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,     5, -1},  // 4
    // define
    { 1, 2, 3, 1, 2, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1,
          5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
          1,-1,    -1, -1},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    26, -1},  // 1
    {-1, 6,-1,-1, 6,-1,-1,-1,-1,-1,-1, 7,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    26, -1},  // 2
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    28, -1},  // 3
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 8,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    26, -1},  // 4
    { 9, 9,10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
          9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
          9,-1,    26, -1},  // 5
    {-1, 6,-1,-1, 6,-1,-1,-1,-1,-1,-1, 7,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, -1},  // 6
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 8,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    -1, -1},  // 7
    { 8, 8,-1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
          8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
          8,-1,    27, -1},  // 8
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    25, -1},  // 9
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,    24, -1},  // 10
};


int const (*ScannerBase::s_dfaBase_[])[44] =
{
    s_dfa_ + 0,
    s_dfa_ + 69,
    s_dfa_ + 76,
    s_dfa_ + 81,
};

size_t ScannerBase::s_istreamNr = 0;

// $insert inputImplementation
ScannerBase::Input::Input()
:
    d_in(0),
    d_lineNr(1)
{}

ScannerBase::Input::Input(std::istream *iStream, size_t lineNr)
:
    d_in(iStream),
    d_lineNr(lineNr)
{}

size_t ScannerBase::Input::get()
{
    switch (size_t ch = next())         // get the next input char
    {
        case '\n':
            ++d_lineNr;
        [[fallthrough]];

        default:
        return ch;
    }
}

size_t ScannerBase::Input::next()
{
    size_t ch;

    if (d_deque.empty())                // deque empty: next char fm d_in
    {
        if (d_in == 0)
            return AT_EOF;
        ch = d_in->get();
        return *d_in ? ch : static_cast<size_t>(AT_EOF);
    }

    ch = d_deque.front();
    d_deque.pop_front();

    return ch;
}

void ScannerBase::Input::reRead(size_t ch)
{
    if (ch < 0x100)
    {
        if (ch == '\n')
            --d_lineNr;
        d_deque.push_front(ch);
    }
}

void ScannerBase::Input::reRead(std::string const &str, size_t fm)
{
    for (size_t idx = str.size(); idx-- > fm; )
        reRead(str[idx]);
}

ScannerBase::ScannerBase(std::istream &in, std::ostream &out)
:
    d_filename("-"),
    d_out(new std::ostream(out.rdbuf())),
// $insert interactiveInit
    d_in(0),
    d_input(new std::istream(in.rdbuf())),
    d_dfaBase_(s_dfa_)
{}

void ScannerBase::switchStream_(std::istream &in, size_t lineNr)
{
    d_input.close();
    d_input = Input(new std::istream(in.rdbuf()), lineNr);
}


ScannerBase::ScannerBase(std::string const &infilename, std::string const &outfilename)
:
    d_filename(infilename),
    d_out(outfilename == "-"    ? new std::ostream(std::cout.rdbuf()) :
          outfilename == ""     ? new std::ostream(std::cerr.rdbuf()) :
                                  new std::ofstream(outfilename)),
    d_input(new std::ifstream(infilename)),
    d_dfaBase_(s_dfa_)
{}

void ScannerBase::switchStreams(std::istream &in, std::ostream &out)
{
    switchStream_(in, 1);
    switchOstream(out);
}


void ScannerBase::switchOstream(std::ostream &out)
{
    *d_out << std::flush;
    d_out.reset(new std::ostream(out.rdbuf()));
}

// $insert debugFunctions
void ScannerBase::setDebug(bool onOff)
{}

bool ScannerBase::debug() const
{
    return false;
}

void ScannerBase::redo(size_t nChars)
{
    size_t from = nChars >= length() ? 0 : length() - nChars;
    d_input.reRead(d_matched, from);
    d_matched.resize(from);
}

void ScannerBase::switchOstream(std::string const &outfilename)
{
    *d_out << std::flush;
    d_out.reset(
            outfilename == "-"    ? new std::ostream(std::cout.rdbuf()) :
            outfilename == ""     ? new std::ostream(std::cerr.rdbuf()) :
                                    new std::ofstream(outfilename));
}


void ScannerBase::switchIstream(std::string const &infilename)
{
    d_input.close();
    d_filename = infilename;
    d_input = Input(new std::ifstream(infilename));
    d_atBOL = true;
}

void ScannerBase::switchStreams(std::string const &infilename,
                           std::string const &outfilename)
{
    switchOstream(outfilename);
    switchIstream(infilename);
}

void ScannerBase::pushStream(std::istream  &istr)
{
    std::istream *streamPtr = new std::istream(istr.rdbuf());
    p_pushStream("(istream)", streamPtr);
}

void ScannerBase::pushStream(std::string const &name)
{
    std::istream *streamPtr = new std::ifstream(name);
    if (!*streamPtr)
    {
        delete streamPtr;
        throw std::runtime_error("Cannot read " + name);
    }
    p_pushStream(name, streamPtr);
}


void ScannerBase::p_pushStream(std::string const &name, std::istream *streamPtr)
{
    if (d_streamStack.size() == s_maxSizeofStreamStack_)
    {
        delete streamPtr;
        throw std::length_error("Max stream stack size exceeded");
    }

    d_streamStack.push_back(StreamStruct{d_filename, d_input});
    d_filename = name;
    d_input = Input(streamPtr);
    d_atBOL = true;
}

bool ScannerBase::popStream()
{
    d_input.close();

    if (d_streamStack.empty())
        return false;

    StreamStruct &top = d_streamStack.back();

    d_input =   top.pushedInput;
    d_filename = top.pushedName;
    d_streamStack.pop_back();

    return true;
}



  // See the manual's section `Run-time operations' section for an explanation
  // of this member.
ScannerBase::ActionType_ ScannerBase::actionType_(size_t range)
{
    d_nextState = d_dfaBase_[d_state][range];

    if (d_nextState != -1)                  // transition is possible
        return ActionType_::CONTINUE;

    if (knownFinalState())                  // FINAL state reached
        return ActionType_::MATCH;         

    if (d_matched.size())
        return ActionType_::ECHO_FIRST;    // no match, echo the 1st char

    return range != s_rangeOfEOF_ ? 
                ActionType_::ECHO_CH 
            : 
                ActionType_::RETURN;
}

void ScannerBase::accept(size_t nChars)          // old name: less
{
    if (nChars < d_matched.size())
    {
        d_input.reRead(d_matched, nChars);
        d_matched.resize(nChars);
    }
}

void ScannerBase::setMatchedSize(size_t length)
{
    d_input.reRead(d_matched, length);  // reread the tail section
    d_matched.resize(length);           // return what's left
}

  // At this point a rule has been matched.  The next character is not part of
  // the matched rule and is sent back to the input.  The final match length
  // is determined, the index of the matched rule is determined, and then
  // d_atBOL is updated. Finally the rule's index is returned.
  // The numbers behind the finalPtr assignments are explained in the 
  // manual's `Run-time operations' section.
size_t ScannerBase::matched_(size_t ch)
{
    d_input.reRead(ch);

    FinalData *finalPtr;
                            
    if (not d_atBOL)                    // not at BOL
        finalPtr = &d_final.std;        // then use the std rule (3, 4)

                                        // at BOL
    else if (not available(d_final.std.rule))   // only a BOL rule avail.
            finalPtr = &d_final.bol;            // use the BOL rule (6)

    else if (not available(d_final.bol.rule)) // only a std rule is avail.
        finalPtr = &d_final.std;        // use the std rule (7)
        
    else if (                           // Both are available (8)
        d_final.bol.length !=           // check lengths of matched texts
        d_final.std.length              // unequal lengths, use the rule
    )                                   // having the longer match length
        finalPtr =              
            d_final.bol.length > d_final.std.length ?
                &d_final.bol
            :
                &d_final.std;

    else                            // lengths are equal: use 1st rule
        finalPtr = 
            d_final.bol.rule < d_final.std.rule ?
                &d_final.bol
            :
                &d_final.std;

    setMatchedSize(finalPtr->length);

    d_atBOL = d_matched.back() == '\n';


    return finalPtr->rule;
}

size_t ScannerBase::getRange_(int ch)       // using int to prevent casts
{
    return ch == AT_EOF ? as<size_t>(s_rangeOfEOF_) : s_ranges_[ch];
}

  // At this point d_nextState contains the next state and continuation is
  // possible. The just read char. is appended to d_match
void ScannerBase::continue_(int ch)
{
    d_state = d_nextState;

    if (ch != AT_EOF)
        d_matched += ch;
}

void ScannerBase::echoCh_(size_t ch)
{
    *d_out << as<char>(ch);
    d_atBOL = ch == '\n';
}


   // At this point there is no continuation. The last character is
   // pushed back into the input stream as well as all but the first char. in
   // the buffer. The first char. in the buffer is echoed to stderr. 
   // If there isn't any 1st char yet then the current char doesn't fit any
   // rules and that char is then echoed
void ScannerBase::echoFirst_(size_t ch)
{
    d_input.reRead(ch);
    d_input.reRead(d_matched, 1);
    echoCh_(d_matched[0]);
}

    // Update the rules associated with the current state, do this separately
    // for BOL and std rules.
    // If a rule was set, update the rule index and the current d_matched
    // length. 
void ScannerBase::updateFinals_()
{
    size_t len = d_matched.size();

    int const *rf = d_dfaBase_[d_state] + s_finIdx_;

    if (rf[0] != -1)        // update to the latest std rule
    {
        d_final.std = FinalData { as<size_t>(rf[0]), len };
    }

    if (rf[1] != -1)        // update to the latest bol rule
    {
        d_final.bol = FinalData { as<size_t>(rf[1]), len };
    }
}

void ScannerBase::reset_()
{
    d_final = Final{ 
                    FinalData{s_unavailable, 0}, 
                    FinalData {s_unavailable, 0} 
                };

    d_state = 0;
    d_return = true;

    if (!d_more)
        d_matched.clear();

    d_more = false;
}

int Scanner::executeAction_(size_t ruleIdx)
try
{
    switch (ruleIdx)
    {
        // $insert actions
        case 1:
        {
#line 15 "lexer"
            return SPACE;
        }
        break;
        case 3:
        {
#line 19 "lexer"
            return NL;
        }
        break;
        case 4:
        {
#line 21 "lexer"
            begin(StartCondition_::comment);
        }
        break;
        case 5:
        {
#line 24 "lexer"
            return endComment();
        }
        break;
        case 7:
        {
#line 28 "lexer"
            return NL;
        }
        break;
        case 8:
        {
#line 32 "lexer"
            startString();
        }
        break;
        case 9:
        {
#line 35 "lexer"
            return endString();
        }
        break;
        case 10:
        case 11:
        {
#line 38 "lexer"
            more();
        }
        break;
        case 12:
        case 13:
        {
#line 41 "lexer"
            invalidString();
        }
        break;
        case 14:
        {
#line 45 "lexer"
            {
                if (ident() == TEXT)
                return TEXT;
            }
        }
        break;
        case 15:
        {
#line 52 "lexer"
            ifdefDirective(); 
        }
        break;
        case 16:
        {
#line 53 "lexer"
            ifndefDirective();
        }
        break;
        case 17:
        {
#line 54 "lexer"
            undefDirective(); 
        }
        break;
        case 18:
        {
#line 57 "lexer"
            elseDirective();
        }
        break;
        case 19:
        {
#line 58 "lexer"
            endifDirective(); 
        }
        break;
        case 20:
        {
#line 61 "lexer"
            noDirective();
        }
        break;
        case 21:
        {
#line 65 "lexer"
            {
                if (includeLocal())
                return NEXT;
            }
        }
        break;
        case 22:
        {
#line 70 "lexer"
            {
                if (includeIM())
                return NEXT;
            }
        }
        break;
        case 23:
        {
#line 77 "lexer"
            defineDirective();
        }
        break;
        case 25:
        case 26:
        {
#line 85 "lexer"
            addBuffer();
        }
        break;
        case 28:
        {
#line 89 "lexer"
            return storeIdentValue();
        }
        break;
        case 29:
        {
#line 93 "lexer"
            return TEXT;
        }
        break;
        case 30:
        {
#line 95 "lexer"
            return atEOF();
        }
        break;
    }
    noReturn_();
    return 0;
}
catch (Leave_ value)
{
    return static_cast<int>(value);
}

int Scanner::lex_()
{
    reset_();
    preCode();

    while (true)
    {
        size_t ch = get_();                // fetch next char
        size_t range = getRange_(ch);      // determine the range

        updateFinals_();                    // update the state's Final info

        switch (actionType_(range))        // determine the action
        {
            case ActionType_::CONTINUE:
                continue_(ch);
            continue;

            case ActionType_::MATCH:
            {
                d_token_ = executeAction_(matched_(ch));
                if (return_())
                {
                    print();
                    postCode(PostEnum_::RETURN);
                    return d_token_;
                }
                break;
            }

            case ActionType_::ECHO_FIRST:
                echoFirst_(ch);
            break;

            case ActionType_::ECHO_CH:
                echoCh_(ch);
            break;

            case ActionType_::RETURN:
                if (!popStream())
                {
                     postCode(PostEnum_::END);
                     return 0;
                }
                postCode(PostEnum_::POP);
             continue;
        } // switch

        postCode(PostEnum_::WIP);

        reset_();
        preCode();
    } // while
}

void ScannerBase::print_() const
{
}


