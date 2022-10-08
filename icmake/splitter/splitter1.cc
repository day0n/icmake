#define XERR
#include "splitter.ih"

Splitter::Splitter(unsigned argc, char **argv)
:
//    d_ptrs(argv, argv + argc),

    d_argc(argc),                           // update d_argc and d_argv when
    d_argv(argv),
    d_optstring("+acefhnNpPqst:T:uvVd"),    // d must be last: becomes d:
                                            // q is recognized but ignored
    d_scriptBim(".")
{
    getOpts();

    if (d_action == UNUSED)
        throw Exception{} << "action option not specified";

    setFiles();                         // d_file[12] and d_nFiles

    setTmpDir();
    d_pidName = d_tmpDir + to_string(getpid());

    setScriptBim();
}


