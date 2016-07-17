#pragma once
#include <string>

class IButton {
public:
	virtual void setTitle( const std::string & ) = 0;
	virtual void render() = 0;
	virtual ~IButton() {}
};