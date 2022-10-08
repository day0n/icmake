#define XERR
#include "splitter.ih"

void Splitter::setScriptBim()
{
    if (d_scriptBim == ".")                        // use the default -t path
        d_scriptBim = d_tmpDir + to_string(getpid()) + ".bim.";
    else 
        d_scriptBim += '.';
}
