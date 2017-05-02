//
// Created by Eric Matthew Matias on 4/30/17.
//

#ifndef LAB6_ERICMATIAS_PRECONDVIOLATEDEXCEP_H
#define LAB6_ERICMATIAS_PRECONDVIOLATEDEXCEP_H

#include <stdexcept>
#include <string>

class PrecondViolatedExcep : public std::logic_error
{
public:
   PrecondViolatedExcep(const std::string& message = "")
   : std::logic_error("Precondition Violated Exception: " + message) { 	}
}; // end PrecondViolatedExcep

#endif //LAB6_ERICMATIAS_PRECONDVIOLATEDEXCEP_H
