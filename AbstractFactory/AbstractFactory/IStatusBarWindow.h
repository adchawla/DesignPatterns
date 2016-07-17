#pragma once

#include "IWindow.h"

class IStatusBarWindow : public virtual IWindow {
public:
	virtual void setMessage( const std::string & ) = 0;
	virtual const std::string & getMessage() = 0;
};
