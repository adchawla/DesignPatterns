#pragma once

#include "IWindow.h"

class IToolboxWindow;
class IStatusBarWindow;

class IApplicationWindow : public virtual IWindow {
public:
	virtual IToolboxWindow * getToolboxWindow() = 0;
	virtual IStatusBarWindow * getStatusBarWindow() = 0;

	virtual void setToolboxWindow( IToolboxWindow * ) = 0;
	virtual void setStatusBarWindow( IStatusBarWindow * ) = 0;
};