#pragma once
#include "IToolboxWindow.h"
#include <vector>

class QTToolboxWindow :
	public virtual IToolboxWindow
{
public:
	QTToolboxWindow( size_t width, size_t height );
	virtual ~QTToolboxWindow();

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

