#pragma once
#include "IApplicationWindow.h"

class QTApplicationWindow : public IApplicationWindow
{
public:
	QTApplicationWindow( size_t width, size_t height );
	virtual ~QTApplicationWindow();

	virtual IToolboxWindow * getToolboxWindow() override;


	virtual IStatusBarWindow * getStatusBarWindow() override;


	virtual void setToolboxWindow( IToolboxWindow * ) override;


	virtual void setStatusBarWindow( IStatusBarWindow * ) override;


	virtual size_t getWidth() override;


	virtual size_t getHeight() override;


	virtual void render() override;

protected:
	size_t		mWidth;
	size_t		mHeight;
	IToolboxWindow * mToolboxWindow;
	IStatusBarWindow * mStatusBarWindow;
};

