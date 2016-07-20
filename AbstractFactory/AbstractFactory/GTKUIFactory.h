#pragma once
#include "IUIFactory.h"

class GTKUIFactory : public IUIFactory
{
public:
	GTKUIFactory();
	virtual ~GTKUIFactory();

	virtual IApplicationWindow * createApplicationWindow( size_t width, size_t height ) override;


	virtual IToolboxWindow * createToolboxWindow( size_t width, size_t height ) override;


	virtual IStatusBarWindow * createStatusBarWindow( size_t width, size_t height ) override;


	virtual IButton * createButton( const std::string & title ) override;

};

