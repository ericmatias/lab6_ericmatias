//
// Created by Eric Matthew Matias on 4/30/17.
//

#ifndef LAB6_ERICMATIAS_NOTFOUNDEXCEPTION_H
#define LAB6_ERICMATIAS_NOTFOUNDEXCEPTION_H

#include <stdexcept>
#include <string>

class NotFoundException : public std::logic_error
{
public:
    NotFoundException(const std::string& message = "") :
            std::logic_error("Not Found Exception: " + message)
    {
    }
};

#endif //LAB6_ERICMATIAS_NOTFOUNDEXCEPTION_H
