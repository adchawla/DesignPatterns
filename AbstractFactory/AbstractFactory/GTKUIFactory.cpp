#include "GTKUIFactory.h"
#include "GTKApplicationWindow.h"
#include "GTKToolboxWindow.h"
#include "GTKStatusBarWindow.h"
#include "GTKButton.h"



GTKUIFactory::GTKUIFactory() { }


GTKUIFactory::~GTKUIFactory() { }

IApplicationWindow * GTKUIFactory::createApplicationWindow( size_t width, size_t height ) {
	return new GTKApplicationWindow( width, height );
}

IToolboxWindow * GTKUIFactory::createToolboxWindow( size_t width, size_t height ) {
	return new GTKToolboxWindow( width, height );
}

IStatusBarWindow * GTKUIFactory::createStatusBarWindow( size_t width, size_t height ) {
	return new GTKStatusBarWindow( width, height );
}

IButton * GTKUIFactory::createButton( const std::string & title ) {
	return new GTKButton( title );
}
