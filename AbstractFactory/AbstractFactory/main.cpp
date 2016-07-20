#include "GTKApplicationWindow.h"
#include "GTKStatusBarWindow.h"
#include "GTKToolboxWindow.h"
#include "QTApplicationWindow.h"
#include "QTStatusBarWindow.h"
#include "QTToolboxWindow.h"

#include "GTKButton.h"
#include <iostream>

void setupToolbox( IToolboxWindow * toolboxWindow );
void setupShapeButtons( IToolboxWindow * toolboxWindow );
void setupPenButtons( IToolboxWindow * toolboxWindow );
void setupEraserButton( IToolboxWindow * toolboxWindow );

// global variable to keep track which UI toolkit is selected.
// Note: not the best way to achieve the switch but minimize the effort a lot.
int uikit = -1;

int main(int argc, char ** argv) {

	// logic to switch ui kit
	uikit = 1;
	if ( argc > 1 ) {
		if ( strcmp( argv[ 1 ], "qt" ) == 0 ) {
			uikit = 2;
		}
	}
	
	IApplicationWindow * appWindow = nullptr;
	IToolboxWindow * toolboxWindow = nullptr;
	IStatusBarWindow * statusboxWindow = nullptr;
	switch ( uikit ) {
	case 1:
		appWindow = new GTKApplicationWindow( 300, 400 );
		toolboxWindow = new GTKToolboxWindow( 50, 400 );
		statusboxWindow = new GTKStatusBarWindow( 50, 400 );
		break;

	case 2:
		appWindow = new QTApplicationWindow( 300, 400 );
		toolboxWindow = new QTToolboxWindow( 50, 400 );
		statusboxWindow = new QTStatusBarWindow( 50, 400 );
	}
	appWindow->setStatusBarWindow( statusboxWindow );
	appWindow->setToolboxWindow( toolboxWindow );
	statusboxWindow->setMessage( "CAPS: ON" );
	setupToolbox( toolboxWindow );
	appWindow->render();
}


void setupToolbox( IToolboxWindow * toolboxWindow ) {
	setupShapeButtons( toolboxWindow );
	setupPenButtons( toolboxWindow );
	setupEraserButton( toolboxWindow );
}


void setupShapeButtons( IToolboxWindow * toolboxWindow ) {
	IButton * rectButton = new GTKButton( "Draw Rect" );
	IButton * circleButton = new GTKButton( "Draw Circle" );
	IButton * polyButton = new GTKButton( "Draw Polygon" );
	toolboxWindow->addButton( rectButton, -1 );
	toolboxWindow->addButton( circleButton, -1 );
	toolboxWindow->addButton( polyButton, -1 );
}

void setupPenButtons( IToolboxWindow * toolboxWindow ) {
	IButton * markerButton = new GTKButton( "Draw With Marker" );
	IButton * ballpenButton = new GTKButton( "Draw With Ball Pen" );
	IButton * pencilButton = new GTKButton( "Draw With Pencil" );
	toolboxWindow->addButton( markerButton, -1 );
	toolboxWindow->addButton( ballpenButton, -1 );
	toolboxWindow->addButton( pencilButton, -1 );
}

void setupEraserButton( IToolboxWindow * toolboxWindow ) {
	IButton * eraserButton = new GTKButton( "Eraser" );
	toolboxWindow->addButton( eraserButton, -1 );
}

