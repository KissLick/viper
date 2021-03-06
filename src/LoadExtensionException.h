#ifndef __INCLUDE_LOADEXTENSIONEXCEPTION_H__
#define __INCLUDE_LOADEXTENSIONEXCEPTION_H__

#include "STL.h"

class LoadExtensionException {
public:
	LoadExtensionException(std::string fullExtensionName,
		std::string error);

	std::string what() const;

private:
	std::string FullExtensionName;
	std::string Error;
};

#endif