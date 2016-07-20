#pragma once


#include <string>

class IApplicationWindow;
class IToolboxWindow;
class IStatusBarWindow;
class IButton;

class IUIFactory {
public:
	enum eUIType {
		kUITGTK,
		kUITQT
	};

	virtual IApplicationWindow * createApplicationWindow( size_t width, size_t height ) = 0;
	virtual IToolboxWindow * createToolboxWindow( size_t width, size_t height ) = 0;
	virtual IStatusBarWindow * createStatusBarWindow( size_t width, size_t height ) = 0;
	virtual IButton * createButton( const std::string & title ) = 0;

	static IUIFactory* getUIFactory();
	static void initializeUIFactory( eUIType uitype );
};
