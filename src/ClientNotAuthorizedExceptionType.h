#ifndef __INCLUDE_CLIENTNOTAUTHORIZEDEXCEPTIONTYPE_H__
#define __INCLUDE_CLIENTNOTAUTHORIZEDEXCEPTIONTYPE_H__

#include "ViperExtension.h"

class ClientNotAuthorizedExceptionType {
public:
	ClientNotAuthorizedExceptionType(int clientIndex);
	std::string what() const;

private:
	int ClientIndex;
};

#endif