#include "QTUIFactory.h"
#include "QTApplicationWindow.h"
#include "QTToolboxWindow.h"
#include "QTStatusBarWindow.h"
#include "QTButton.h"



QTUIFactory::QTUIFactory() { }


QTUIFactory::~QTUIFactory() { }

IApplicationWindow * QTUIFactory::createApplicationWindow( size_t width, size_t height ) {
	return new QTApplicationWindow( width, height );
}

IToolboxWindow * QTUIFactory::createToolboxWindow( size_t width, size_t height ) {
	return new QTToolboxWindow( width, height );
}

IStatusBarWindow * QTUIFactory::createStatusBarWindow( size_t width, size_t height ) {
	return new QTStatusBarWindow( width, height );
}

IButton * QTUIFactory::createButton( const std::string & title ) {
	return new QTButton( title );
}
