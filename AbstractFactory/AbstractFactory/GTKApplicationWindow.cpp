#include "GTKApplicationWindow.h"
#include <iostream>
#include "IToolboxWindow.h"
#include "IStatusBarWindow.h"

GTKApplicationWindow::GTKApplicationWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height )
	, mToolboxWindow( nullptr )
	, mStatusBarWindow( nullptr ) { }

IToolboxWindow * GTKApplicationWindow::getToolboxWindow() {
	return mToolboxWindow;
}

IStatusBarWindow * GTKApplicationWindow::getStatusBarWindow() {
	return mStatusBarWindow;
}

void GTKApplicationWindow::setToolboxWindow( IToolboxWindow * toolboxWindow ) {
	mToolboxWindow = toolboxWindow;
}

void GTKApplicationWindow::setStatusBarWindow( IStatusBarWindow * statusBarWindow ) {
	mStatusBarWindow = statusBarWindow;
}

size_t GTKApplicationWindow::getWidth() {
	return mWidth;
}

size_t GTKApplicationWindow::getHeight() {
	return mHeight;
}

void GTKApplicationWindow::render() {
	std::cout << "GTKApplicationWindow of " << mWidth << " x " << mHeight<<"\n";
	if ( mToolboxWindow ) mToolboxWindow->render();
	if ( mStatusBarWindow ) mStatusBarWindow->render();
}

GTKApplicationWindow::~GTKApplicationWindow() {
	if ( mToolboxWindow ) delete mToolboxWindow;
	if ( mStatusBarWindow ) delete mStatusBarWindow;
}
