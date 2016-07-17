#pragma once

#include <string>

class IWindow {
public:
	virtual size_t getWidth() = 0;
	virtual size_t getHeight() = 0;

	virtual void render() = 0;
	virtual ~IWindow() {}
};
