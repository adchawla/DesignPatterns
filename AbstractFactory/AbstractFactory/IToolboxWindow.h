#pragma once

#include "IWindow.h"

class IButton;

class IToolboxWindow : public virtual IWindow {
public:
	virtual void addButton( IButton *, size_t index ) = 0;
	virtual void removeButton( size_t index ) = 0;
};
