#pragma once
#include "IToolboxWindow.h"
#include <vector>

class GTKToolboxWindow :
	public virtual IToolboxWindow
{
public:
	GTKToolboxWindow( size_t width, size_t height );
	virtual ~GTKToolboxWindow();

	virtual void addButton( IButton *, size_t index ) override;


	virtual void removeButton( size_t index ) override;


	virtual size_t getWidth() override;


	virtual size_t getHeight() override;


	virtual void render() override;
protected:
	size_t		mWidth;
	size_t		mHeight;
	std::vector<IButton*> mButtons;
};

