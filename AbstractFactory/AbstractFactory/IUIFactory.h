#pragma once

#include <string>

class IWindow;
class IToolboxWindow;
class IStatusBarWindow;
class IButton;

class IUIFactory {
public:
	virtual IWindow * createApplicationWindow( size_t width, size_t height ) = 0;
	virtual IToolboxWindow * createToolboxWindow( size_t width, size_t height ) = 0;
	virtual IStatusBarWindow * createStatusBarWindow( size_t width, size_t height ) = 0;
	virtual IButton * createButton( const std::string & title ) = 0;

	static IUIFactory* getUIFactory();
};
