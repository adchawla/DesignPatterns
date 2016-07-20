#pragma once
#include "IUIFactory.h"

class QTUIFactory : public IUIFactory
{
public:
	QTUIFactory();
	virtual ~QTUIFactory();

	virtual IApplicationWindow * createApplicationWindow( size_t width, size_t height ) override;


	virtual IToolboxWindow * createToolboxWindow( size_t width, size_t height ) override;


	virtual IStatusBarWindow * createStatusBarWindow( size_t width, size_t height ) override;


	virtual IButton * createButton( const std::string & title ) override;

};

