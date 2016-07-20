#pragma once
#include "IStatusBarWindow.h"
#include <string>

class QTStatusBarWindow :
	public IStatusBarWindow
{
public:

	QTStatusBarWindow( size_t width, size_t height );

	virtual ~QTStatusBarWindow();


	virtual void setMessage( const std::string & ) override;


	virtual const std::string & getMessage() override;


	virtual size_t getWidth() override;


	virtual size_t getHeight() override;


	virtual void render() override;

protected:
	size_t		mWidth;
	size_t		mHeight;
	std::string mStatusMessage;
};

