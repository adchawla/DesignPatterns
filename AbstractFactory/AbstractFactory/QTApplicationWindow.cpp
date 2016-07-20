#include "QTApplicationWindow.h"
#include <iostream>
#include "IToolboxWindow.h"
#include "IStatusBarWindow.h"


QTApplicationWindow::QTApplicationWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height )
	, mToolboxWindow( nullptr )
	, mStatusBarWindow( nullptr ) { }

QTApplicationWindow::~QTApplicationWindow() {}

IToolboxWindow * QTApplicationWindow::getToolboxWindow() {
	return mToolboxWindow;
}

IStatusBarWindow * QTApplicationWindow::getStatusBarWindow() {
	return mStatusBarWindow;
}

void QTApplicationWindow::setToolboxWindow( IToolboxWindow * toolboxWindow) {
	mToolboxWindow = toolboxWindow;
}

void QTApplicationWindow::setStatusBarWindow( IStatusBarWindow * statusBarWindow ) {
	mStatusBarWindow = statusBarWindow;
}

size_t QTApplicationWindow::getWidth() {
	return mWidth;
}

size_t QTApplicationWindow::getHeight() {
	return mHeight;
}

void QTApplicationWindow::render() {
	std::cout << "QTApplicationWindow of " << mWidth << " x " << mHeight << "\n";
	if ( mToolboxWindow ) mToolboxWindow->render();
	if ( mStatusBarWindow ) mStatusBarWindow->render();
}
