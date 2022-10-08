#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_

#include <unordered_map>
#include <string>

class Symtab: private std::unordered_map<std::string, std::string>
{
    typedef std::unordered_map<std::string, std::string> Map;

    public:
        bool contains(std::string const &ident) const;
        void remove(std::string const &ident);

        using Map::operator[];
        using Map::find;
        using Map::end;
};

#include "contains.f"

#endif






