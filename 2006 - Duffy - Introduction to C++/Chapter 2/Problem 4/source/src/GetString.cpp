#include "GetString.hpp"
#include <sstream>

template <typename T>
    string getString(const T& value)
    {
        stringstream s;
        s << value; // Put value in string stream and return it as string
        return s.str();
    }

