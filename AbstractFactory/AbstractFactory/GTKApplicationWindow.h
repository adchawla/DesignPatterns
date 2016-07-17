#pragma once
#include "IApplicationWindow.h"

class GTKApplicationWindow : public virtual IApplicationWindow {

public:
	GTKApplicationWindow( size_t width, size_t height );

	virtual IToolboxWindow * getToolboxWindow() override;


	virtual IStatusBarWindow * getStatusBarWindow() override;


	virtual void setToolboxWindow( IToolboxWindow * ) override;


	virtual void setStatusBarWindow( IStatusBarWindow * ) override;


	virtual size_t getWidth() override;


	virtual size_t getHeight() override;


	virtual void render() override;

	virtual ~GTKApplicationWindow();

protected:
	size_t		mWidth;
	size_t		mHeight;
	IToolboxWindow * mToolboxWindow;
	IStatusBarWindow * mStatusBarWindow;

};
